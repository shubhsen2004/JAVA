#include<iostream>
using namespace std;
int main()
{
    int a =4;
    int b =6;
    cout << (a&b) << endl;  // and bitvise 
    cout << (a|b)<<endl; // or bitwise
    cout << ~a<< endl; // not bitwise 
    cout<<(a^b)<<endl; // xor bitwise

}