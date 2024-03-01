#include<stdio.h>

int addition(int no1, int no2)
{
  int sum=0;
  sum= no1+no2;
  return sum;

}
int substraction(int a1, int a2)
{
  int sub=0;
  sub= a1-a2;
  return sub;

}
int multiplication(int b1, int b2)
{
  int mul=0;
  mul= b1*b2;
  return mul;

}
int main()
{
  int val1=10;
  int val2=11;
  int ans=0;

  ans=addition(val1,val2);
    printf("addition is : %d\n", ans);

  ans=substraction(val1,val2);
    printf("sub is : %d\n", ans);

  ans=multiplication(val1,val2);
    printf("mul is : %d\n", ans);

  return 0;
}