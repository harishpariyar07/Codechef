// Chef and Lockout Draws
// Problem link: https://www.codechef.com/problems/LOCKDRAW
// Solution link: https://www.codechef.com/viewsolution/57401675
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while(T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y == z || x + z == y || y + z == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

