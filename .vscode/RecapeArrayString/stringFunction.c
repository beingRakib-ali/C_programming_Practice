#include<stdio.h>
int main()
{
   char name1[] = "Rakib is learning c language from phitron course";
  // char name2[] = "Sarker";
  // char name2[] = " Sarker"; it use for strcat cause its have a space in font.so output show like Rakib Sar.(for 4 words.)
   
  /* int a = strlen(name1);
    printf("%d\n",a);  */
    
  /* printf("%d",strcmp(name1,name2));  //name1 is smaller than name2 thats why output is -1;   name1>name2 output is 1; name1 == name2 output is 0;  */   
    
    /* printf("%d\n",strcasecmp(name1,name2)); 
    // upper/lower is same. example Rakib and raKiB output is 0; cause strcasecmp is case sensitive. 
    */
    
  /*  printf("%d\n",strlen(name1));

 //   strcat(name1,name2);    strcat = string concatenation  strcat make  name1 and name2 in one sentense.
   // strncat(name1,name2,4);  strcat = string concatenation  strcat make  name1 and name2 in one sentense to 4 words. so output is Rakib Sar. space take one place.
  //  puts(name1);
   // printf("%d \n",strlen(name1));
    */
    

    //strcpy(name1,name2);
   // strncpy(name1,name2,3); //4 words copy from name2 and 1 from name1 cause name1 len is 5 so 1 is empty its filled by name1 words. 
   // puts(name1);

  // strstr(name1,'i');
 // printf("%s\n",strchr(name1,'l')); //from sequense.
 // printf("%s\n",strstr(name1,"from")); //strstr use for find string in string from sequense.
 // printf("%s\n",strrchr(name1,'l')); //from reverse.

    return 0;
}

