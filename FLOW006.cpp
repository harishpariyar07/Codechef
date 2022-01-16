// Sum of Digits
// You're given an integer N. Write a program to calculate the sum of all the digits of N.
[Problem Link](https://discuss.codechef.com/problems/FLOW006)
[Solution Link](https://www.codechef.com/viewsolution/56491472)
#include <iostream>
#include <vector>
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
        int n = nums[i];
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
