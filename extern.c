#include <stdio.h>

int i;
int j=11;
extern int a;

int main()
{
    printf("%d \n",i);
    printf("%d \n",j);
    printf("%d \n",a);
    return 0;
}