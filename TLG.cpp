// Your task is to help the Manager find the winner and the winning lead. You may assume that the scores will be such that there will always be a single winner. That is, there are no ties.
// Problem link: https://www.codechef.com/problems/TLG
// Solution link: https://www.codechef.com/viewsolution/56530205
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int S[N][2];
    int S1 = 0, S2 = 0, L1 = 0, L2 = 0, maxLead = 0;
    int winner = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i][0] >> S[i][1];
        // cumulative scores
        S1 += S[i][0];
        S2 += S[i][1];
        if (S1 > S2)
        {
            L1 = S1 - S2;
            // find the maxLead till now
            if (L1 > maxLead)
            {
                maxLead = L1;
                winner = 1;
            }
        }
        else
        {
            L2 = S2 - S1;
            // find the maxLead till now
            if (L2 > maxLead)
            {
                maxLead = L2;
                winner = 2;
            }
        }
    }
    cout << winner << " " << maxLead << endl;
    return 0;
}
