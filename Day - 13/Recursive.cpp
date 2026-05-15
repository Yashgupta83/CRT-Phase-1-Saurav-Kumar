#include<iostream>
using namespace std;
int fun(int n)
{
    if (n == 0)
    return false;
    if(n == 1)
    return true;
    return (n % 2 == 0) && fun(n / 2);
}
int main ()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (fun(n))
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
    return 0;
}