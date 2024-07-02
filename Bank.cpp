#include<stdio.h>
#include<stdlib.h>
int main()
{
	int money=1000,op;
	printf("1.check balance\n 2.deposit money\n 3.withdraw money\n 4.exit\n");
	printf("enter the option");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("your balance is:%d",money);
			break;
		case 2:
			int dep;
			printf("enter the money to deposit:\n");
			scanf("%d",&dep);
			money=money+dep;
			printf("money is deposited:\n");
			break;
		case 3:
			int wd;
			printf("enter the money to withdraw:\n");
			scanf("%d",&wd);
		    if(wd<money){
		    	money=money-1;
		    	break;
			}
			else{
				printf("insuffcient balance:\n");
				 break;
			}
		case 4:
			exit(0);
			
	}
	return 0;
}
