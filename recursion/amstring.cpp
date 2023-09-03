#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool armstrong(int a)
{
    int temp = a;
    int cnt = 0;
    int ans = 0;

    while (a != 0)
    {
        int digit = a % 10; // Get the last digit
        cnt++;
        a = a / 10; // Remove the last digit
    }

    a = temp; // Reset 'a' to its original value

    while (a != 0)
    {
        int value = a % 10;
        int check = pow(value, cnt);
        ans = ans + check;
        a = a / 10;
    }

    if (ans == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a = 153;
    bool valid = armstrong(a);
    if (valid)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}
