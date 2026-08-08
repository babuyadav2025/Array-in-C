#include<stdio.h>
#include<string.h>
int main(){ 
   // char str[]="Hello guys how are you ?";
     //printf("%s",str);
     //puts(str);
    // puts("Hey hello");
    char str[40];
    //scanf("%s",str); only first word cosider 
    gets(str);// entire sentence can be input
    printf("Your input is: %s",str);
     return 0;
}
