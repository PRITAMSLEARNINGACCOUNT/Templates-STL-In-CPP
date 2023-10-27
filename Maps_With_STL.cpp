#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> Associative_Array;
    Associative_Array["Key_Value"] = 50;
    Associative_Array["Index 0"] = 56;
    Associative_Array["Index 1-Key Value"] = 99;
    cout << "Initializing A Pointer With The Begining Value Of The Associative Array(Dictionary)" << endl;
    map<string, int>::iterator Pointer;
    Pointer = Associative_Array.begin();
    cout << "Printing Only The First Key Value Pairs" << endl;
    cout << (*Pointer).first << " = " << (*Pointer).second << endl;
    cout << "In C Plus Plus Maps Works Like Dictionary Where Each Key Has It's Own Value" << endl;
    cout << "Now We Are Printing The Ending Value Of The Key From Associative Array(Dictionary)" << endl;
    Pointer = Associative_Array.end();
    Pointer--;
    cout << (*Pointer).first << " = " << (*Pointer).second << endl;
    cout << "Now We Are Printing Every Key Value Pairs From Dictionary (Associative Array) Using A Loop" << endl;
    for (Pointer = Associative_Array.begin(); Pointer != Associative_Array.end(); Pointer++)
    {
        cout << (*Pointer).first << " = " << (*Pointer).second << endl;
    }
    cout << "Now I Am Inserting A New Value To The Dictionary(Associative Array) Using Insert Method And Also Using Some Varriable" << endl;
    string a = "Hello World";
    int b = 55;
    Associative_Array.insert({{a, b}, {a, b}});
    cout << "Now We Are Printing Every Key Value Pairs From Dictionary (Associative Array) Using A Loop Again" << endl;
    for (Pointer = Associative_Array.begin(); Pointer != Associative_Array.end(); Pointer++)
    {
        cout << (*Pointer).first << " = " << (*Pointer).second << endl;
    }
    return 0;
}