// Generate one line output saying "READY FOR BATTLE", if the army satisfies the conditions that Kattapa requires or "NOT READY" otherwise (quotes for clarity).
// Problem link: https://www.codechef.com/problems/AMR15A
// Solution link: https://www.codechef.com/viewsolution/56510785
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int N;
    cin >> N;
    vector<int> A(N);
    int even = 0, odd = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > odd)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
    return 0;
}
