#include<stdio.h>
#include<string.h>
int main(){
    char* s1 = "College Wallah";
    // char* s2 = s1;
    // s1[0] = 'M';
    // printf("%s",s2);
    char* s2 = "Physic Wallah";
    s2=s1;
   //s2 = "Math Wallah";
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}