#include<stdio.h>
int main(){
    // int x=65;
    // printf("%d ", x);
    // char ch= (char)x;
    // printf("%c\n", ch);
    // char ch='a';
    // printf("%c ", ch);
    // int x= (int)ch;
    // printf("%d", x);
    for (int i = 65; i <=90; i++)
    {
        printf("%d ", i);
        char ch=(char)i;
        printf("%c\n",ch);
    }
    

    return 0;
}