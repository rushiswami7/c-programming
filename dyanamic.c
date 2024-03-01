# include <stdio.h>
# include <stdlib.h>

int main()
{
    int arr[5];  //S
    float fval;  //S
    double brr[4]; //S

    int isize;
    int *ptr=NULL;

    printf("enter the size of array..\n");
    scanf("%d",&isize);

    ptr=(int *) malloc (isize * sizeof(int));

    free(ptr);

    return 0;
}