// For each testcase, output one integer in a new line, which is the number of Wolverine-like minions after the transmogrification.
// Problem link: https://www.codechef.com/problems/CHN15A
// Solution link: https://www.codechef.com/viewsolution/56513960
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K, count = 0;
        cin >> N >> K;
        vector<int> A(N);
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
            if ((A[j] + K) % 7 == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
