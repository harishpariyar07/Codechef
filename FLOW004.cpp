// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
// Program link: https://www.codechef.com/problems/FLOW004
// Solution link: https://www.codechef.com/viewsolution/56492903
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    vector<int> nums;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    for (int i = 0; i < t; i++)
    {
        int n = nums[i], sum = n % 10;
        while (n > 0)
        {
            int r = n % 10;
            n /= 10;
            if (n == 0)
                sum += r;
        }
        cout << sum << endl;
    }
    return 0;
}
