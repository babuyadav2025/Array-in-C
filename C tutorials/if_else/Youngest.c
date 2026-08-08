#include<stdio.h>
int main()
{
    int Ram , Shyam, Ajay;
    printf("Age of Ram is:");
    scanf("%d", &Ram);
    printf("Age of Shyam is:");
    scanf("%d", &Shyam);
    printf("Age of Ajay is:");
    scanf("%d", &Ajay);
    if (Ram>Shyam && Ram>Ajay)
    {
        printf("Ram is youngest %d", Ram);
    }
    if (Shyam>Ram && Shyam>Ajay)
    {
        printf("Shyam is youngest %d", Shyam);
    }
    if (Ajay>Ram && Ajay>Shyam)
    {
        printf("Ajay is youngest %d", Ajay);
    }
    
    return 0;
}