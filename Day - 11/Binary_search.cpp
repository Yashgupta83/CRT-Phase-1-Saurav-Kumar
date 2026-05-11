#include <iostream>

using namespace std;
class solution
{
public:
    int Binary_search(int nums[], int n, int target)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
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
    int result = s1.Binary_search(arr, n, 3);
    cout << "Index of target element: " << result << endl;
    return 0;
}