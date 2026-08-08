#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str;
   // *ptr = "physics wallah";
   *ptr = 'R';
    printf("%s",str); 
    return 0;
}