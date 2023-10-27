#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> Object;
    Object.push_back(5);
    Object.push_back(50);
    cout << "So The Size Of The Resizable Array(Vector) Is " << Object.size() << endl;
    cout << "The First Element From The Vector Array Is " << Object[0] << endl;
    cout << "The Second Element From The Vector Array Is " << Object.at(1) << endl;
    Object.push_back(35);
    Object.pop_back();
    for (int i = 0; i < Object.size(); i++)
    {
        cout << "So The Value Of The Resizable Array(Vector) No. " << i << " Is " << Object.at(i) << endl;
    }
    vector<int>::iterator Begining_Pointer = Object.begin();
    vector<int>::iterator Ending_Pointer = Object.end();
    Object.insert(Begining_Pointer, 599);
    Object.insert(Ending_Pointer + 1, 5959);
    cout << "Now The Elements Of The Resizable Array(Vector) Is Changed" << endl;
    for (int i = 0; i < Object.size(); i++)
    {
        cout << "So The Value Of The Resizable Array(Vector) No. " << i << " Is " << Object[i] << endl;
    }
    cout << "Now We Are Going To Demonstrate Values By Using Pointer" << endl;
    for (int i = 0; i < Object.size(); i++)
    {
        cout << "So The Value Of The Resizable Array(Vector) No. " << i << " Is " << *(Begining_Pointer) << endl;
        Begining_Pointer++;
    }
    
    return 0;
}