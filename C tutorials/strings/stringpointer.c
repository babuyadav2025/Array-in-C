#include<stdio.h>
#include<string.h>
int main(){
    //char str[]="College wallah";
    //char* ptr=str;// ptr now point to str[0]
   // printf("%p\n",&str[0]);
   // printf("%p",str);
//    int i=0;
//    while(*ptr!='\0'){
//     printf("%c",*ptr);
//     ptr++;
//     i++;
//    }
    char* ptr = "College Wallah";
    ptr[0]='A';
    printf("%s",ptr);
    return 0;
}