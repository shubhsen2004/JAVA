#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {3, 4, 7, 3, 4, 2, 7};

    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;

    return 0;
}
