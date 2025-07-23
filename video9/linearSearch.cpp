#include <iostream>
using namespace std;

int search(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            // return arr[i];
            return i;
        }
    }
    return 9;
}

int main()
{
    int arr[5] = {5, 8, 6, 4, 3};

    int l;
    cout << "enter the searching value : " << endl;
    cin >> l;

    int ans = search(arr, 5, l);
    if (ans < 6)
    {
        cout << "value is present at:" << ans << endl;
    }
    else
        cout << "search value is not in arrey";
}