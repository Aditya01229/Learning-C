#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int Randoms(int lower, int upper);
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the level(1-3) \n ");
    scanf("%d",&a);
    if(a==1)
     {
      int n;
      for(int j=1;j<=5;j++)
      {
       int n = Randoms(1, 21);     
       printf("Your question is ");
       printf("%d^2=?\n", n);
       b=n*n;
       printf("Enter your ans= ");
       scanf("%d",&c);
       if(c==b)
        {
         printf("your ans is correct \n %d^2=%d \n",n,b);
        }
       else
        {
         printf("your ans is wrong\n correct ans:- %d^2=%d \n",n,b) ;
        }
      }
      ++a;
    }
     
    if(a==2)
    {
      for(int j=1;j<=5;j++)
      {
       int n = Randoms(21, 51);
       printf("Your question is ");
       printf("%d^2 =? \n", n);
       b=n*n;
       printf("Enter your ans= ");
       scanf("%d",&c);
       if(c==b)
        {
         printf("your ans is correct \n %d^2=%d \n",n,b);
        }
       else
        {
         printf("your ans is wrong\n correct ans:- %d^2=%d\n",n,b) ;
        }
      } ++a;  
    }
    if(a==3)
    { 
      for(int j=1;j<=5;j++)
      { 
       int n = Randoms(51, 101); 
       printf("Your question is ");
       printf("%d^2 =? \n", n);
       b=n*n;
       printf("Enter your ans= ");
       scanf("%d",&c);
       if(c==b)
        {
         printf("your ans is correct \n %d^2=%d \n",n,b);
        }
       else
        {
         printf("your ans is wrong\n correct ans:- %d^2=%d \n",n,b) ;
        }
      }   
    }
    return 0;
}
// Code for generating random number.
int Randoms(int lower, int upper)
{
    int n;
    int num = (rand() % (upper - lower + 1)) + lower;
     for (int i = 0; i < 5; i++){
      printf("",num);
  }
  
    // Returning the generated number to the main function.
    return num;
}