#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int ans = isPrime(n);
    if (ans == 1)
        cout << "is a prime no" << endl;
    else
        cout << "is not a prme no " << endl;
}