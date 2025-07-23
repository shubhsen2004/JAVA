#include<iostream>
using namespace std;

int factorial (int a)
{
    int fact = 1;
    for(int  i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    return ans;

}

int main()
{
    int n;
    cin >> n ;
    int r;
    cin >> r;
    int ans = ncr(n,r);
    cout << "answer is :"<< ans << endl;
}