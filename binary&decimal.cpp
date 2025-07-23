#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int i = 0;
  while (n != 0)
  {
    int digit = n & 1;

    sum = (digit * pow(10, i)) + sum;
    n = n >> 1;
    i++;
  }
  cout << " answer is :" << sum << endl;
}