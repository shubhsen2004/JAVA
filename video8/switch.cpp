#include <iostream>
using namespace std;
int main()
{
    //
    char ch = '1';
    int a = 1;
    switch (a)
    {
    case '2':
        cout << "First" << endl;
        break;

    case 1:
        switch (ch)
        {
        case '1':
            cout << "second" << endl;
        
        }
         break;
        
    default:
        cout << "third" << endl;
    }
}
