#include<iostream>
using namespace std;
int main()

{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n-i+1 )
        {
            cout <<j ;
            j++;
        }
        int k=i-1;
        while(k)
        {
            cout<<"*";
            k--;
        }

        int r=i-1;
        while(r>0){
        cout<<"*";
        r--;
        }
        
        int temp = n-i+1;
        while(temp){

        cout<<temp;
        temp--;
        }
        cout<<endl;
        i++;
    }

}