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
    }
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