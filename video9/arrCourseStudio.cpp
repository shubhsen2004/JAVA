#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {1, 5, 3, 6, 4, 2, 3};

    int ans =0;

    // xoring all element 1^1=0 and 1^3 =1
    for (int i = 0; i < 7; i++)
    {
       ans = ans^arr[i];
    }
    
     for (int i = 0; i < 7; i++)
    {
       ans = ans^i;
    }
    cout << ans << endl;

    return 0;
}
