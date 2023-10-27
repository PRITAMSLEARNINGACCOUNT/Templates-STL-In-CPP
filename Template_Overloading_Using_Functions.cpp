#include <iostream>
using namespace std;
template <class Data_Type>
void Func(Data_Type Varriable)
{
    Data_Type Var = Varriable;
    cout << "So The Value Of The Varriable Declared In This Function Using Templatised Data Type Is " << Var << endl;
}
void Func(float Varriable)
{
    cout << "So The Value Passed To This Function Is " << Varriable << endl;
}
int main()
{
    Func(4.66);
    cout << "So Both Function Are Named Same That's Why An Ambiguity Is Happening And The Function Is Overloading Too,That's The Reason When We Are Giving A Floating Point Number The Function Is Executing The Second Function Instead Of The Templatised Function,But Whenever We Are Giving Some Different Value Instead Of Floating Point Number It Is Executing The Second Function" << endl;
    return 0;
}