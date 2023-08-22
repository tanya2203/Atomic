/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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
        if (arr[mid] >= arr[0])        //differnece idhar
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
int main()
{

    int arr[8] = {7, 8, 17, 7, 1, 3, 5, 6};

    int ans = PivotElement(arr, 8);

    cout << ans;
    // cout<<ans;

    return 0;
}