// Given three distinct integers A, B and C, print the second largest number among them.
// Problem link: https://www.codechef.com/CCSTART2/problems/SECLAR
// Solution link: https://www.codechef.com/viewsolution/56847169
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A, B, C;
	cin >> A >> B >> C;
	int max = -1;
	if (A > B && A > C)
	    max = A;
	else if (B > C)
	    max = B;
	else
	    max = C;
	
	int ans = -1;
	if (max == A)
	{
        ans = B > C ? B : C;
    } 
    else if (max == B)
    {
        ans = A > C ? A : C;
    }
    else
    {
        ans = B > A ? B : A;
    }
    cout << ans << endl;
	return 0;
}
