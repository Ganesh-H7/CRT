#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char username[50],password[40];
	int count=3;
	
    while(count>0)
	{    
	    printf("enter username:");
		scanf("%s",&username);
		printf("enter password:");
		scanf("%s \n",&password);
		if(strcmp(password,"ganesh123")==0)
		{
			count = 0;
			printf("Accessed");
		}
		else
		{
			if(count == 0)
			{
				printf("last chance");
				count--;
			}
			else
		    { 
			  if(count==2)
			 {
				printf("wrong password. 1 chance left");
				count--;
		   	}
			else
			{
				printf("wrong password account has been blocked",count);
				count--;
			}
		  }  
		}
	  	
	}
	return 0;		
}
	
