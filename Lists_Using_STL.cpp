#include <iostream>
#include <list>
using namespace std;
void display(list<int> &Reference_Object)
{
    list<int>::iterator Function_Pointer;
    for (Function_Pointer = Reference_Object.begin(); Function_Pointer != Reference_Object.end(); Function_Pointer++)
    {
        cout << *Function_Pointer << endl;
    }
}
int main()
{
    int Var;
    cout << "So Finally It's Time To Create An Array Based List Using List Header File In C Plus Plus" << endl;
    list<int> Object;
    cout << "Enter How Big List Do You Want To Make??" << endl;
    cin >> Var;
    for (int i = 0; i < Var; i++)
    {
        int Temp_Var;
        cout << "Enter Value No. " << i << endl;
        cin >> Temp_Var;
        Object.push_back(Temp_Var);
    }
    list<int>::iterator Pointer;
    Pointer = Object.begin();
    cout << "So These Are The Values Of The List(Resizable Array) I Created" << endl;
    for (int i = 0; i < Var; i++)
    {
        cout << *Pointer << endl;
        Pointer++;
    }
    Object.reverse();
    Pointer = Object.begin();
    cout << "Now I Am Reversing The List I Created And Below Are The Values Of Reversed Array" << endl;
    for (int i = 0; i < Var; i++)
    {
        cout << *Pointer << endl;
        Pointer++;
    }
    cout << "Now I Am Sorting The Array I Created And Below Are The Values Of A Sorted Array" << endl;
    Object.sort();
    display(Object);
    Object.pop_back();
    Object.pop_front();
    cout << "Now I Am Showing You The List After Removing First And The Element Before Last From The List" << endl;
    display(Object);
    int Varriable;
    cout << "Now Enter Which Element Do You Want To Remove From Your List??" << endl;
    cin >> Varriable;
    Object.remove(Varriable);
    display(Object);
    cout << "As You Can See That The Element You Have Wanted To Be Removed Has Successfully Removed" << endl;
    return 0;
}