// Stop processing input after reading in the number 42
// Problem link: https://www.codechef.com/LRNDSA01/problems/TEST
// Solution link: https://www.codechef.com/viewsolution/57090822
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int n = 0;
    while (1)
    {
        cin >> n;
        if (n == 42)
            break;
        else
            cout << n << endl;
    }
    return 0;
}

