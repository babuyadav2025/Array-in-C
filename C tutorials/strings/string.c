#include<stdio.h>
int main(){
    // char arr[]= "Hello world this is my code";
    // int i=0;
    // while(arr[i]!='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // }
    char str[] = "Mathmatics Subject";
    str[2] = 97;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    } 
    return 0;

}
