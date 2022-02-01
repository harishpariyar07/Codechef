// You are given N, X, Y, A and the array B that is returned by Chef's program. Determine whether Chef's program gave the correct output.
// Problem link: https://www.codechef.com/problems/SUBSTADD
// Solution link: https://www.codechef.com/viewsolution/57402203
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while(T--)
    {
        int n, x ,y;
        cin >> n >> x >> y;
        vector<int> A(n, 0);
        vector<int> B(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> B[j];
        }
        
        
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (A[i]+x == B[i] || A[i]+y == B[i])
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

