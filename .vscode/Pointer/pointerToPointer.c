#include <stdio.h>

int main() {
    int a = 5;
    printf("%d\n", a);

    int* p = &a;
    printf("%p\n", &p);

    int** q = &p;
    printf("%p\n", q);

    **q = 15;
    printf("%d\n", a);

    return 0;
}

// json command for vs code

//"C_Cpp.clang_format_fallbackStyle": "{ BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 0}",