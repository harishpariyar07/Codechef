// Relational Operators are operators which check relatioship between two values. Given two numerical values A and B you need to help chef in finding the relationship between them
// Problem link: https://www.codechef.com/problems/CHOPRT
// Solution link: https://www.codechef.com/viewsolution/56493379
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    vector<vector<int> > nums(t);
    for (int i = 0; i < t; i++)
    {
        nums[i] = vector<int>(2);
        cin >> nums[i][0];
        cin >> nums[i][1];
        if (nums[i][0] > nums[i][1])
            cout << ">" << endl;
        else if (nums[i][0] < nums[i][1])
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
