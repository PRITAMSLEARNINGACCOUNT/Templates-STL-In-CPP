#include <iostream>
using namespace std;
template <class Data_Type>
class Vector
{
private:
    Data_Type *array;
    int Size_Of_Array;

public:
    Vector(int Size_Of_Array)
    {
        this->Size_Of_Array = Size_Of_Array;
        array = new Data_Type[Size_Of_Array];
        for (int i = 0; i < Size_Of_Array; i++)
        {
            cout << "Enter The Value Of Vector No. " << i << endl;
            cin >> array[i];
        }
        cout << "So You Have Given The Values Of Vector Which Are" << endl;
        for (int i = 0; i < Size_Of_Array; i++)
        {
            cout << array[i] << endl;
        }
    }
    Data_Type DotProduct(Vector &Object)
    {
        Data_Type Return_Value = 0;

        for (int i = 0; i < this->Size_Of_Array; i++)
        {
            Return_Value += this->array[i] * Object.array[i];
        }
        cout << "So The Dot Product Of Both Vectors Is " << Return_Value << endl;
        return 0;
    }
};

int main()
{
    int var;
    cout << "Enter How Many Values Do You Want To Take For Calculate Dot Product Of Two Vectors??" << endl;
    cin >> var;
    Vector<float> Object(var);
    Vector<float> Object_2(var);
    Object.DotProduct(Object_2);
    return 0;
}