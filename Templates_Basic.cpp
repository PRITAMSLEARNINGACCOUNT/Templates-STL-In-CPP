#include <iostream>
using namespace std;
template <class T>
class Base
{
    T a;

public:
    Base(T a)
    {
        this->a = a;
    }
    void PrintData(void)
    {
        cout << "So The Data Given By User Is " << a << endl;
    }
};
int main()
{
    Base<int> Object(5);
    Object.PrintData();
    Base<float> Object_2(5.54);
    Object_2.PrintData();
    Base<string> Object_3("Hello World");
    Object_3.PrintData();
    
    return 0;
}