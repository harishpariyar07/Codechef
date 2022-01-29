// Packaging Cupcakes
// For each test case, output the package size that will maximize the number of leftover cupcakes. If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.
// Problem link: https://www.codechef.com/problems/MUFFINS3
// Solution link:
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
		int n;
		cin >> n;
		// Cupakes -> PackageSize LeftoverCupcakes
		// 13 -> 7(13/2+1) 6
		// 25 -> 13(25/2+1) 12
		// 9 -> 5(9/2+1) 4
		// From the above example, it is seen that the max size that results max leftover cupcakes is n/2 + 1
		cout << (n/2+1) << endl;
    }
	return 0;
}

/*
-------> SOLUTION IS CORRECT BUT TIME EXCEEDED <------- 
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    int maxLeftover = 0, packageSize = 0;
	    if (N == 2)
	    {
	        packageSize = 2;
	    }
	    else
	    {
	        for (int i = 1; i <= N; i++)
	        {
	            int package = i;
	            int leftover = N % i;
	            if (maxLeftover < leftover)
	            {
	                maxLeftover = leftover;
	                packageSize = i;
	            }
	        } 
	    }
	   
	    cout << packageSize << endl;
	}
	return 0;
}

*/