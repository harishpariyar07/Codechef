// For each test case, display the smallest number of notes that will combine to give N, in a new line.
// Problem link: https://www.codechef.com/problems/FLOW005
// Solution link: https://www.codechef.com/viewsolution/56528303
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
        int count = 0;
        while (N > 0)
        {
            if (N - 100 >= 0)
            {
                N -= 100;
                count++;
            }
            else if (N - 50 >= 0)
            {
                N -= 50;
                count++;
            }
            else if (N - 10 >= 0)
            {
                N -= 10;
                count++;
            }
            else if (N - 5 >= 0)
            {
                N -= 5;
                count++;
            }
            else if (N - 2 >= 0)
            {
                N -= 2;
                count++;
            }
            else
            {
                N -= 1;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
