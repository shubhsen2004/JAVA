#include <iostream>
#include<climits>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++)
    {

        maxi = max(maxi, num[i]);
        // if(num[i]>max)
        // {
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for(int i = 0; i<n; i++)
    {

        mini = min(mini, num[i]);
        // if(num[i]<min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}

int main()
{
    // int arr[] = {5, 6, 9, 2, 44, 66, 55, 22, 11, 77, 3, 5, 7};

    // int size = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     cout << "max value of arr is :" << arr[0] << endl;
//     cout << "min value of arr is :" << arr[size] << endl;




    int arr[] = {5, 6, 9, 2, 44, 66, 55, 22, 11, 77, 3, 5, 7};

    int size = sizeof(arr) / sizeof(int);

    cout << "max value is :" << getMax(arr,size) << endl;
     cout << "min value is :" << getMin(arr,size) << endl;

}