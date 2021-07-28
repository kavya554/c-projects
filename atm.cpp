#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x,y;
	char ch;	
	printf("enter initial amt\n");
	scanf("%f",&x);
	while(1){
	
	printf("Enter\n c for credit\n d for debit\n b for balance\n x for exit\n");
	scanf("\n%c",&ch);
	
	switch(ch)
	{
		case 'c':
			printf("enter credit amt\n");
			scanf("%f",&y);
			x=x+y;
			printf("New amount=%f\n",x);
			break;
		case 'd':
			printf("Enter debit amt\n");
			scanf("%f",&y);
			if(x>=y)
			{
				x=x-y;
				printf("New amount=%f\n",x);
			}
			else
			{
				printf("Insufficient Balance\n");
			}
			break;
		case 'b':
			printf("Balance:=%f\n",x);
			break;
		case 'x':
			exit(0);
		default:
			printf("Invalid option\n");
			
			
	}
}
}
