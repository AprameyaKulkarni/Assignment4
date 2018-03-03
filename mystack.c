#include<stdio.h>
#include<stdlib.h>
#include"mystack.h"


extern struct stack_element *top;

void push(int num)
{
	struct stack_element *above_element= (struct stack_element *)malloc(sizeof(struct stack_element));
	above_element->value= num;
	above_element->below=top;
	top=above_element;
}


void pop()
{
	if (top == NULL)
		printf("\nStack is empty.\n");
	else
	{
		struct stack_element *temp;
		temp=top;
		printf("\nValue popped out is %d \n",temp->value);
		top=top->below;
		free(temp);
	}
}



void peek()
{
	if(top==NULL)
		printf("\nstack is empty.\n");
	else
		printf("\nTop value of the stack is %d \n",top->value);
}

