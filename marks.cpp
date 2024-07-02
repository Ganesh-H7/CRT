#include<stdio.h>
int main(){
	
	int a,grade;
	scanf("%d",&a);
	grade=a/10;
	if(a<100)
	{
	  switch(grade)
   	
	   {
		case 10:
		    printf("A");
		    break;
		    case 9:
		    printf("A");
		    break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
	    case 6:
			printf("D");
			break;
		default:
			printf("f");
			break;
	
	   }
	}
	else{
		printf("enter the marks between 1-100");
	}

	return 0;
}
