#include<stdio.h>

int main()
 {
    int no=0;
    int ans = 0;

    printf("enter no: \n");
    scanf("%d",&no);

    ans = no % 2; // ith paryant seq

    if (ans == 0)  // jar asel tar(selection start)  ('==' comparision oprat12)
     {  
       printf("even");

     }
    else  //nasel tar
     {
       printf("odd");

     }




    return 0;
 }