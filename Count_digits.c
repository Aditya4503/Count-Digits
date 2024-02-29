#include <stdio.h>
 int main()
{
  int N;
  printf("Enter a number : "); 
  scanf("%d",&N);
  int count=0;
  int M=N;
  while(N!=0)  
   {  
     N=N/10;  
     count++;  
   }  
        
	printf("The number %d contains %d digits.", M,count);
    return 0;  
} 

// Code by : alpha_maverick