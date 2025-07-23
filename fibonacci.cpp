 #include<iostream>
 using namespace std;
 int main ()
 {
    int a=0;
    int b=1;
    int c; int n=10;
    for (int i=0; i<=n; i++)
    {
        cout<< a <<" ";
        c=a+b;
        a=b;
        b=c;

    }
 }