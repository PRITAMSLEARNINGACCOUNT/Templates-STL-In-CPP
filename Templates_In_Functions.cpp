#include <iostream>
using namespace std;
template <class Data_Type>
void Simple_Calculator(Data_Type a, Data_Type b, char Operator)
{
    switch (Operator)
    {
    case '+':
        cout << "So The Sum Of Two Numbers Given By You Is " << a + b << endl;
        break;
    case '-':
        cout << "So The Subtraction Of Two Numbers Given By You Is " << a - b << endl;
        break;
    case '*':
        cout << "So The Multiplication Of Two Numbers Given By You Is " << a * b << endl;
        break;
    case '/':
        cout << "So The Division Of Two Numbers Given By You Is " << a / b << endl;
        break;

    default:
        cout << "Invalid Operator" << endl;
        break;
    }
}
int main()
{
    string Operator;
    string Data_Type;
    char Parameter;
    cout << "Enter Which Type Of Operation Do You Want To Do(Addition,Subtraction,Multiplication,Division)??" << endl;
    cin >> Operator;
    cout << "Which Data Type Are You Using For Your Calculation(Decimal Or Integer)??" << endl;
    cin >> Data_Type;
    if (Operator == "Addition" || Operator == "addition")
    {
        Parameter = '+';
    }
    else if (Operator == "Multiply" || Operator == "multiply" || Operator == "Multiplication" || Operator == "multiplication")
    {
        Parameter = '*';
    }
    else if (Operator == "division" || Operator == "Division")
    {
        Parameter = '/';
    }
    else if (Operator == "Subtract" || Operator == "subtract" || Operator == "Subtraction" || Operator == "subtraction")
    {
        Parameter = '-';
    }
    else
    {
        Parameter = 'I';
    }
    if (Data_Type == "Integer" || Data_Type == "integer")
    {
        int a, b;
        cout << "Enter First Number??" << endl;
        cin >> a;
        cout << "Enter Second Number??" << endl;
        cin >> b;
        Simple_Calculator(a, b, Parameter);
    }
    else if (Data_Type == "Decimal" || Data_Type == "decimal")
    {
        float a, b;
        cout << "Enter First Number??" << endl;
        cin >> a;
        cout << "Enter Second Number??" << endl;
        cin >> b;
        Simple_Calculator(a, b, Parameter);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}