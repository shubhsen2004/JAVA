#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout<< "enter the value of n : "<< endl;
    // cin >> n;
    // int i=1;
    // while(i<=n)
    // {
    //     cout<< i<<endl;
    //     i = i+1;
    // }

    // int n;
    // cin>>n;
    // int sum = 0;
    // int i=1;
    // while(i<=n)
    // {
    //     sum += i;

    //     i= i+1;
    // }

    // cout<<sum;

    // int n = 10;
    // int sum = 0;
    // int i = 2;
    // while(i<=n)
    // {

    //     sum +=i;
    //     i = i+2;
    // }
    // cout<< sum <<endl;

    //         int n = 11;
    //         int i=2;
    //         int count = 0;
    //         while( i<n/2)
    //         {
    //             if(n%i==0)
    //             {
    //             count++;
    //             }
    //          i=i+1;

    //         }
    //         if (count==0)

    //             cout<<"prime number"<<endl;

    //         else
    //         cout<<"not prime";

    //  patern-1

    // int n;

    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j =1;
    //     while(j<=n)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //   pattern -2

    // int n;

    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j =1;
    //     while(j<=n)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern-3

    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j =1;
    //     while(j<=n)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // patern-4
    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j =1;
    //     while(j<=n)
    //     {
    //         int k=n-j+1;
    //         cout<<k<<" ";

    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Patern -5

    // int n;
    // int j = 1;
    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {

    //     while(j<=n*i)
    //     {

    //         cout<<j<<" ";

    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    // PAttern - 6

    // int n;

    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {

    //         cout<<"*"<<" ";

    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    //   Pattern - 7
    // int n;

    // cin>>n;
    // int i =1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {

    //         cout<<i<<" ";

    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  pattern-8

    // int n;

    // cin>>n;
    // int i =1;
    // int count =1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {

    //         cout<<count<<" ";

    //         count++;
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    //  }

    //  pattern - 9
    // int n;

    // cin>>n;
    // int row =1;
    // int count =1;
    // while(row<=n)
    // {
    //     int column = 1;
    //     int count = row;
    //     while(column<=row)
    //     {

    //         cout<<count<<" ";

    //         count++;
    //         column++;

    //     }
    //     cout<<endl;
    //     row++;
    //  }

    // int n;

    // cin>>n;
    // int row =1;

    // while(row<=n)
    // {
    //     int column =1;

    //     while(column<=row)
    //     {

    //         cout<<column+row-1<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    //  pattern -10
    // int n;

    // cin>>n;
    // int row =1;

    // while(row<=n)
    // {
    //     int column =1;

    //     while(column<=row)
    //     {

    //         cout<<row-column+1<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    // pattern-11
    // int n;

    // cin>>n;
    // int row =1;

    // while(row<=n)
    // {
    //     int column =1;

    //     while(column<=n)
    //     {
    //         char ch = 'A'+row-1;

    //         cout<<ch<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    // pattern -12

    // int n;

    // cin>>n;
    // int row =1;

    // while(row<=n)
    // {
    //     int column =1;

    //     while(column<=n)
    //     {
    //         char ch = 'A'+column-1;
    //         cout<<ch<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    // pattern -13

    // int n;

    // cin>>n;
    // int column =1;
    // int row =1;

    // while(row<=n)
    // {

    //     while(column<=n*row)
    //     {
    //         char ch = 'A'+column-1;
    //         cout<<ch<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    //  pattern-14

    // int n;

    // cin>>n;

    // int row =1;

    // while(row<=n)
    // {

    //     int column = 0;
    //     while(column<n)
    //     {
    //         char ch = 'A'+column + row-1;
    //         cout<<ch<<" ";

    //          column++;

    //     }
    //     cout<<endl;
    //     row ++;

    //  }

    //   pattern- 15

    //  int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         char ch ='A'+i-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern-16

    // int n;
    //  cin>>n;
    //  int i = 1;
    //  int j = 1;
    // while(i<=n)
    // {
    //     int count = 1;
    //     while(count<=i)
    //     {

    //         char ch ='A'+j-1;
    //         cout<<ch<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // patterrn - 17

    // int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;

    //     while(j<=i)
    //     {

    //         char ch ='A'+i+j-2;
    //         cout<<ch<<" ";
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern-18

    // int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;

    //     while(j<=i)
    //     {

    //         char ch ='A'+n-1-i+j;
    //         cout<<ch<<" ";
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  pattern-19
    // int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;
    //     char start ='A'+i-1;
    //     while(j<=n)
    //     {

    //         cout<<start<<" ";
    //         j++;
    //         start= start +1;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern-20

    // int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;

    //     while(j<=n-i)
    //     {
    //         cout<<"  ";
    //         j++;
    //     }

    //     while(j<=n)
    //     {
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern - 21
    // int n;
    //  cin>>n;
    //  int i = 0;

    // while(i<=n)
    // {
    //     int j=1;

    //     while(j<=n-i)
    //     {
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  pattern -22
    // int n;
    //  cin>>n;
    //  int i = 1;

    // while(i<=n)
    // {
    //     int j=1;

    //     while(j<=i-1)
    //     {
    //         cout<<" ";
    //         j++;
    //     }

    //     while(j<=n)
    //     {
    //         cout<<"*";
    //         j++;
    //     }

    //     cout<<endl;
    //     i++;
    // }

    // Pattern-23

    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n - i)
    //     {
    //         cout << "  ";
    //         j++;
    //     }

    // while(j<=n)
    // {
    //     cout<< j-4+i<<" ";
    //     j++;
    // }

    // int k=i-1;

    // while(k>0)
    // {
        
    //     cout<<k<<" ";
        
    //     k--;
    // }
        
    //     cout<<endl;
    //     i++;
    // }


    //pattern - 24

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
