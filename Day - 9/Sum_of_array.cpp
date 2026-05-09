#include<iostream>
using namespace std;

class sum
{
    public:
    int sum_of_array(int arr[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum s;
    int ans = s.sum_of_array(arr, n);
    cout << "Sum of array is: " << ans<< endl;
    return 0;
}