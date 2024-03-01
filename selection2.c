# include<stdio.h>

int main()
 {
    int std =0;
    printf("primary school portal \n");

    printf("enter your std: \n");
    scanf("%d",&std);
    // if else if lader
    if(std==1)
     {
        printf("your exam is at 1p.m \n");
     }
    else if(std == 2)
     {
        printf("your exam is at 2p.m \n");
     }
    else if(std==3)
     {
        printf("your exam is at 3p.m \n");  
     }
    else if(std==4)
     {
        printf("your exam is at 4p.m \n");
     }
    else
     {
        printf("invalid std \n");
     }

     return 0;
 }