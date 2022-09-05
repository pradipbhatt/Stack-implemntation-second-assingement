#include <iostream>
#include "stack.cpp"
using namespace std;

bool areBracketsBalanced(string expr)
{
    Stack temp(100);
    for (int i = 0; i < expr.length(); i++)
    {
        if (temp.isEmpty())
        {
            temp.push(expr[i]);
        }
        else if ((temp.peek() == '(' && expr[i] == ')') || (temp.peek() == '{' && expr[i] == '}') || (temp.peek() == '[' && expr[i] == ']'))
        {
            temp.pop();
        }
        else
        {
            temp.push(expr[i]);
        }
    }
    if (temp.isEmpty())
    {
        return true;
    }
    return false;
}

int main()
{
    string expr;
    cout << "enter an expression";
    cin >> expr;
    if (areBracketsBalanced(expr))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}