#include <iostream>
#include <vector>
using namespace std;

int FirstOcc(vector<int>& arr, int n, int x)
{
    int s = 0;
    int e = n - 1;
    int firstOcc = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == x)
        {
            firstOcc = mid;
            e = mid - 1;
        }
        else if (x > arr[mid])
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

int LastOcc(vector<int>& arr, int n, int x)
{
    int s = 0;
    int e = n - 1;
    int lastOcc = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == x)
        {
            lastOcc = mid;
            s = mid + 1;
        }
        else if (x > arr[mid])
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

int count(vector<int>& arr, int n, int x) {
    int FO = FirstOcc(arr, n, x);
    if (FO == -1) {
        // Element not found
        return 0;
    }
    int LO = LastOcc(arr, n, x);
    int Count = (LO - FO) + 1;
    return Count;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int occurrenceCount = count(arr, n, x);
    cout << occurrenceCount << endl;

    return 0;
}
