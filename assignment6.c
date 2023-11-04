#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;
   for(icnt = 0; icnt < iNo ; icnt++)
    {
        printf("$  * ");
    }


}

int main()

{

int iValue = 0;

printf("Enter number"); 
scanf("%d",&iValue);

Pattern(iValue);

return 0;
}