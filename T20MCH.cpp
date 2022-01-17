// Output in a single line, the answer, which should be "YES" if it's possible for Chef's Team B to win the match and "NO" if not.
// Problem link: https://www.codechef.com/problems/T20MCH
// Solution link: https://www.codechef.com/viewsolution/56523660
#include <iostream>
using namespace std;

int main()
{
    int R, O, C;
    cin >> R >> O >> C;
    int diff = R - C;
    if (diff < (20 - O) * 36)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}