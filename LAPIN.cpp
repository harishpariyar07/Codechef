// Your task is simple. Given a string, you need to tell if it is a lapindrome.
// Problem link: https://www.codechef.com/LRNDSA01/problems/LAPIN
// Solution link: https://www.codechef.com/viewsolution/57092291
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while(T--)
    {
        string S;
        cin >> S;
        int len = S.length();
        vector<int> S1(26, 0);
        vector<int> S2(26, 0);
        bool checkOdd = len % 2;
        
        for (int i = 0; i < len; i++)
        {
           if (checkOdd & i == len/2) continue;
           if (i < len/2) S1[S[i]-'a']++;
           else S2[S[i]-'a']++;
        }
        
        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (S1[i] == S2[i])
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        
        if (flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

