// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
// Problem link: https://www.codechef.com/problems/FLOW013
// Solution link: https://www.codechef.com/viewsolution/56490491
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int nums[n][3] = {0};
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> nums[i][j];
            sum += nums[i][j];
        }
        if (sum == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
