#include<stdio.h>
int main(){
   int sp;
   int cp;
   printf("enter sp :");
   scanf("%d", &sp);
   printf("enter cp:");
   scanf("%d", &cp);
   if (sp>cp)
   {
     printf("profit");
   }
   if(cp>sp){
     printf("loss");
   }
   if (sp==cp)
   {
     printf("no profit , no loss");
   }
   return 0;
      
}