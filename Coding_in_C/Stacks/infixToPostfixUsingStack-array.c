#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = 0;

void push(char ch)
{
    if(top == MAX)
    {
        printf("STACK OVERFLOW!\n");
        return;
    }
    stack[top++] = ch;
}

char pop()
{
    if(top == 0)
    {
        return '\0';
    }
    return stack[--top];
}

char peek()
{
    if(top == 0)
    {
        return '\0';
    }
    return stack[top - 1];
}

int precedence(char op)
{
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while(infix[i] != '\0')
    {
        char ch = infix[i];

        if(isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while(peek() != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }
        else
        {
            while(top != 0 && precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }

        i++;
    }

    while(top != 0)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix Expression = %s\n", postfix);

    return 0;
}