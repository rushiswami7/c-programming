#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   unlink("rushi.txt");
   printf("delete  file success \n");

    return 0;
}