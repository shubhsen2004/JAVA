#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 8, 6, 4, 3};

    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        brr[i] = arr[4 - i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }
    
}