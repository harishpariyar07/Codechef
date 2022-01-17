// Chef gives you three integers N, K and S and asks you to find the only element which appears K times in his array.
// Problem link: https://www.codechef.com/problems/REPEAT
// Solution link: https://www.codechef.com/viewsolution/56527176
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K, S;
        cin >> N >> K >> S;
        int rem = S - N * N;
        cout << rem / (K - 1) << endl;
    }
    return 0;
}
