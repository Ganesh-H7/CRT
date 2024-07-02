#include<stdio.h>
int main(){
	int i=2,j=2;
	
	printf("for loop:\n");
	for(i=2;i<10;i=i+2){
	printf("%d \n",i);
	}
	printf("\n");
	
    printf("while loop:\n");
    
	while(j<=10){
		printf("%d \n",j);
		j+=2;
		
	}
	return 0;
}
