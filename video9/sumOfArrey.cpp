#include<iostream>
using namespace std;
 int main ()
 {
    int arr[] = {5,6,2,4,3};
    int sum = 0;
    for(int i = 0; i<=4; i++)
    {
        sum = sum +arr[i];
    }
    cout << "sum of arrey :" << sum << endl;
 }