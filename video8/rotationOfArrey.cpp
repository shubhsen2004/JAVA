#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 8, 2, 3, 4, 6, 9};
    int a;
    cout << "if you choose '0' then shift left \nif you choose '1' then shift right " << endl;
    cout << "enter 0 or 1 choosing side for shifting element :" << endl;
    cin >> a;
    cout << "enter the number which element you shift:" << endl;
    int n;
    cin >> n;

    if (a == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - i];
            arr[n - i] = temp;
        }

        for (int i = 0; i < 7; i++)
        {
            cout << arr[i] << " ";
        }
    }
}