#include<stdio.h>
void main()
{
 for(int i=1;i<101;i++)
 {
  if(i%3==0 && i%5!=0)    
  {
    printf("fizz\n");
  }
  if(i%3!=0 && i%5==0)
  {
   printf("buzz\n");
  }
  if(i%15==0)
  {
    printf("fizzbuzz\n");
  }
  if(i%3!=0 && i%5!=0)
  {
  printf("%d \n",i);
  }
 }
}
