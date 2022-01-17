// For each line of the input, output the square root of the input integer, rounded down to the nearest integer, in a new line.
// Problem link: https://www.codechef.com/status/FSQRT
// Solution link: https://www.codechef.com/viewsolution/56531588
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            if (i * i == N)
            {
                cout << i << endl;
                break;
            }
            else if (i * i > N)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }
    return 0;
}
