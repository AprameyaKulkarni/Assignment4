#include<stdio.h>
#include"mystack.h"


struct stack_element *top=NULL;

int main()
{
	
	int choice,element;
	char ch;
	printf("\n----------------------\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.peek\n");
	printf("----------------------\n");
	do
	{
		printf("enter your choice(1 or 2 or 3):");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
		{
		printf("\nEnter the element to put into stack:");
		scanf("%d", &element);
		push(element);
		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		peek();
		break;
		}
		default:
		printf("\nEnter correct option.");
	}
		printf("\nwant to give next command?(y/n)?");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	printf("\nThank you,Goodbye.\n");

}
