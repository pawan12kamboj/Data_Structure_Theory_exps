#include <iostream>
#define size 100
char stack_[size];
int top=-1;

using namespace std;

void push(char item)
{
    if(top >= size-1)
    {
        cout<<"Overflow\n";
    }
    else
    {
        top++;
        stack_[top] = item;
    }
}
char pop()
{
    char item;
    item = stack_[top];
    top--;
    return(item);
}
int is_operator(char symbol)
{
    if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
    {
        return 1;
    }
}
int precedence(char symbol)
{
    if(symbol == '^')
        return 3;
    else if(symbol == '*' || symbol == '/')
        return 2;
    else if(symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}

