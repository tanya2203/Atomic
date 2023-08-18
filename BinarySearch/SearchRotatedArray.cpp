
#include <iostream>
using namespace std;

int PivotElement(int arr[], int n)
{

    // mid

    int s = 0;
    int e = n - 1;
    int mid = (s + ((e - s) / 2));
    while (s < e) // not eqal
    {

        // if (arr[mid] == key)
        // {
        //     return mid;
        // }
        // greater
        if (arr[mid] >= arr[0]) // differnece idhar
        {
            s = mid + 1;
        }

        // smaller
        else
        {
            e = mid;
        }
        mid = (s + ((e - s) / 2));
    }

    return s; // or s
}

int BinarySearch(int arr[], int n, int s, int e, int key)
{

    // mid

    // int s = 0;
    // int e = n - 1;
    int mid = (s + ((e - s) / 2));
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        // greater
        if (key > arr[mid])
        {
            s = mid + 1;
        }

        // smaller
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + ((e - s) / 2));
    }

    return -1;
}
int SearchRotatedSortedArray(int arr[], int n, int k)
{

    int pivot = PivotElement(arr, n);

    // 2nd line
    if ((k > arr[pivot]) && (k <= arr[n - 1]))
    {
        return BinarySearch(arr, n, pivot, n - 1, k);
    }
    // first line
    else
    {
        return BinarySearch(arr, n, 0, pivot, k);
    }
}

int main()
{

    int arr[8] = {7, 12, 1, 15, 1, 2, 3, 4};

    int ans = SearchRotatedSortedArray(arr, 8, 15);

    cout << ans;

    return 0;
}