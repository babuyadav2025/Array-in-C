#include<stdio.h>
int main(){
    // char ch = '\0';
    // printf("%d",ch);
    char ch[]={'H','e','l','l','o','\0'};
    int i=0;
    while(ch[i]!=0){
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}