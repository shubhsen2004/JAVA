#include <iostream>
using namespace std;

int main()
{
    //int arr[5] = {5, 8, 6, 4, 3};
    int arr[6] = {6,8,4,3,9,2};
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
        swap(arr[i], arr[i+1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
