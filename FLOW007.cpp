// Reverse The Number
// Given an Integer N, write a program to reverse it.
// Problem link: https://www.codechef.com/LRNDSA01/problems/FLOW007
// Solution link: https://www.codechef.com/viewsolution/49097539
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        int rev = 0;
        int num = nums[i];
        while (num > 0)
        {
            int x = num % 10;
            rev = rev * 10 + x;
            num /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}
