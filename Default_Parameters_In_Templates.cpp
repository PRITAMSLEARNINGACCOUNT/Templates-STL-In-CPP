#include <iostream>
using namespace std;
template <class Default_Data_Type = int, class Default_Data_Type_2 = float>
class Base_Class
{
private:
    Default_Data_Type Var;
    Default_Data_Type_2 Var_2;

public:
    Base_Class(Default_Data_Type Var, Default_Data_Type_2 Var_2)
    {
        this->Var = Var;
        this->Var_2 = Var_2;
    }
    void Show_Average(void)
    {
        cout << "So The Average Of Two Numbers Given By User Is " << (Var + Var_2) / 2 << endl;
    }
};

int main()
{
    Base_Class<> Object(4, 4.4);
    Object.Show_Average();
    cout << "This Is Showing The Average Of Two Values Using Default Parameters In Templates" << endl;
    Base_Class<int, int> Object_2(4, 4);
    Object_2.Show_Average();
    cout << "This Is Showing The Average Of Two Values By Overriding Default Parameters In Templates" << endl;

    return 0;
}