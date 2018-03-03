
struct stack_element
{
	int value;
	struct stack_element *below;
};

void pop();
void peek();
void push(int);

