#include<stdio.h>
int main()
{
     int bob,mali,yrs=0;
     
     scanf("%d %d",&bob,&mali);
     
     while(bob<=mali)
     {
     	
          bob=(bob*3);
          mali=(mali*2);
          yrs++;
     }
     printf("%d",yrs);
     return 0;
}
