#include <stdio.h>

/**
 *
 */

void push(int item)
{
	if (top == MAX - 1)
	{
		printf("Overflow\n");
	}
	else
	{
		top += 1;
		stack[top] = item:
	}
}

int pall()
{
	int item;
	if (top == -1)
	{
		printf("Underflow");
		return -1
	}
	item = stack[stack];
	top -= 1;
	return item;
}
