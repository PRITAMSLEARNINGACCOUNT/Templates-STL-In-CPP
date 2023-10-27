#include <iostream>
using namespace std;
template <class DataType, class Second_Data_Type>
class Test
{
private:
    DataType var;
    Second_Data_Type var_2;
    Second_Data_Type var_3;

public:
    Test(DataType var, Second_Data_Type var_2, Second_Data_Type var_3)
    {
        this->var = var;
        this->var_2 = var_2;
    }
    void PrintData(void)
    {

        cout << "The Size Of The Object Created Using This Pointer Is " << sizeof(*this) << endl;
        cout << "The Size Of The First Custom Data Type Created Using This Pointer Is " << sizeof(this->var) << endl;
        cout << "The Size Of The Second Custom Data Type Object Created Using This Pointer Is " << sizeof(this->var_2) << endl;
        cout << "The Size Of The Second Custom Data Type(2) Object Created Using This Pointer Is " << sizeof(this->var_3) << endl;
    }
};

int main()
{
    Test<char, float> Object('H', 54.99, 58.96);
    cout << "The Size Of String Data Type Is " << sizeof(string) << endl;
    Object.PrintData();
    return 0;
}