#include <iostream>
#include <vector> // Include this for using vector
using namespace std;

int main()
{
    int arr[7] = {1, 5, 3, 6, 4, 2, 3};
    int brr[5] = {5, 2, 7, 6, 9};
    vector<int> ans; // Use vector instead of array

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++) // Correctly increment j
        {
            if (arr[i] == brr[j])
            {
                // ans.push_back(arr[i]);
                cout<< arr[i] << endl;
                break; // Avoid pushing the same element multiple times
            }
        }
    }

    
    return 0;
}
