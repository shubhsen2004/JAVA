#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
   
        cout << "value of "<< i <<" index is"<< arr[i] << endl; 
    }
}
int main()
{

    int num[] = {
        4, 
        5,
        8,
        3,
        4,
    };
    printarr(num,7);

    int b[]={0,0,56,6,8,2,4,6,2};
    int size = sizeof(b)/sizeof(int);
    cout << "size :"<< size << endl;

    // printarr(b,8);


    
}