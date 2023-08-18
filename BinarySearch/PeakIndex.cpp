/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int PeakIndex(int arr[], int n)
{

    // mid

    int s = 0;
    int e = n - 1;
    int mid = (s + ((e - s) / 2));
    while (s <e) // not eqal
    {

        // if (arr[mid] == key)
        // {
        //     return mid;
        // }
        // greater
        if (arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }

        // smaller
        else 
        {
            e = mid ;
        }
        mid = (s + ((e - s) / 2));
    }

    return e;  // or s
}
int main()
{

    int arr[8] = {1, 2, 4, 7, 8, 10, 5, 4};


       int ans = PeakIndex(arr, 8);

    cout << ans;

    return 0;
}