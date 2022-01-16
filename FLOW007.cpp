// Reverse The Number
// Given an Integer N, write a program to reverse it.
// Problem link: https://www.codechef.com/LRNDSA01/problems/FLOW007
// Solution link: https://www.codechef.com/viewsolution/49097539
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	vector<int> nums(t);
	for (int i = 0; i < t; i++)
	{
	    cin >> nums[i];
	    int n = nums[i], rev = 0;
	    while (n > 0)
	    {
	       int r = n % 10;
	       rev = rev * 10 + r;
	       n /= 10;
	    }
	    cout << rev << endl;
	}
	return 0;
}

