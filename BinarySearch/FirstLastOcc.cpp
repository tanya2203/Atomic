#include <iostream>
#include <vector>
using namespace std;

int FirstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int firstOcc = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            firstOcc = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return firstOcc;
}

int LastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int lastOcc = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            lastOcc = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return lastOcc;
}

int main()
{
    int arr[8] = {1, 2, 4, 7, 8, 8, 12, 17};
    pair<int, int> p;
    p.first = FirstOcc(arr, 8, 8);
    p.second = LastOcc(arr, 8, 8);

    cout << "First Occurrence is " << p.first << " Last Occurrence is " << p.second << endl;

    return 0;
}
