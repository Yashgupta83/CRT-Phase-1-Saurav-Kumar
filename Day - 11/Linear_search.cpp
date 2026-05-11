#include <iostream>

using namespace std;
class solution
{
public:
    int Linear_search(int nums[], int n, int target)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    solution s1;
    int result = s1.Linear_search(arr, n, 5);
    cout << "Index of target element: " << result << endl;
    return 0;
}