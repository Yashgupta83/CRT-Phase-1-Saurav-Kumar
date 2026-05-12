#include<iostream>
using namespace std;
void digit_sum(int n, int &sum)
{
    if (n == 0)
    {
        return;
    }
    sum += n % 10;
    digit_sum(n / 10, sum);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    digit_sum(num, sum);
    cout << "Sum of digits of " << num << " is: " << sum << endl;
    return 0;
}