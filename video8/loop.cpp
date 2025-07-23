#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    char ch = '1';
    while (a > 0)
    {
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
                exit(0);
                ;
            }

        default:
            cout << "third" << endl;
        }
    }
}