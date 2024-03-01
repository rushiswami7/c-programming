#include<stdio.h>

int addition(int no1, int no2)
{    
    int sum=0;
    sum = no1 + no2;

    return sum;
}

int main()
{

   int val1= 0;  int val2= 0;
   int ret=0;

   printf("enter 1st no. \n");
   scanf("%d",&val1);

   printf("enter 2nd no. \n");
   scanf("%d",&val2); // input kontya datatype ch ahe  &val1 indicates the address of that variale.

   ret= addition(val1,val2);
   printf("addition is %d\n",ret);

   return 0;

}