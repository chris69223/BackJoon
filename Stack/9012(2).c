#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <string.h>

typedef char element;
int top;
char ary[50];
char stack[50];
int count = 0;
int isEmpty()
{
	if (top == 0)
		return 1;
	else
		return 0;
}
void push(element data)
{
	stack[top++] = data;
}
int pop()
{
	return stack[--top];
}
void init()
{
	top = 0;
	memset(ary, 0, 50);
	memset(stack, 0, 50);
}
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		init();
		scanf("%s", ary);
		for (int i = 0; i < strlen(ary); i++)
		{
			if (ary[i] == '(')
			{
				push('(');
				count++;
			}
			else if (ary[i] == ')')
			{
				if (!isEmpty())
					pop();
				count--;
			}

			
		}
		if (isEmpty() && (count == 0))
			printf("YES\n");
		else if (ary[0] == ')')
			printf("NO\n");
		else
			printf("NO\n");
	}
	return 0;
}



