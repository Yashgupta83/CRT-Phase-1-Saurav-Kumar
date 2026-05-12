#include <iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selection_sort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap_array(nums[i], nums[min_idx]);
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
        


