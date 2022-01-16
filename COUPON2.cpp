// Should Chef buy the coupon? Note that Chef shall buy the coupon only if it costs him strictly less than what it costs him without the coupon, in total.
// Problem link: https://www.codechef.com/problems/COUPON2
// Solution link: https://www.codechef.com/viewsolution/56518693
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int D, C;
        cin >> D >> C;
        int A[2][3];
        int cost_1 = 0, cost_2 = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
                if (i == 0)
                    cost_1 += A[i][j];
                else
                    cost_2 += A[i][j];
            }
        }
        int cost = cost_1 + cost_2;
        if (cost_1 >= 150 && cost_2 >= 150)
        {
            if ((cost + 2 * D) > (cost + C))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (cost_1 >= 150 || cost_2 >= 150)
        {
            if ((cost + 2 * D) > (cost + C + D))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
