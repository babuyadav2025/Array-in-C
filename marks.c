#include<stdio.h>
int main(){
    int marks[5];
    printf("Enter marks of students:");
    for(int i=0;i<=4;i++){
        scanf("%d",&marks[i]);
    } 
    printf("students roll number whose marks is less than 35:"); 
    for(int i=0;i<=4;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    
    
    return 0;

}