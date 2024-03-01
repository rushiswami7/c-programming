#include<stdio.h> //Header file for printf and scanf func
//void display()
//{
 //   prinf("Inside display func \n");
//}
int main() //Entry point function from where execution stars
 {
    int val1= 10;
    int val2= 11;
    int ans= 0;
    
    ans= val1+val2;
    printf("%d",ans);  //%d format specifier(int,%f for float& double,%c char)
    
    //printf("inside main func \n");

   // display();
    return 0; //return 0 to OS which indicates success

}