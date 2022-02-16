// Hostel Room
// Problem Link: https://www.codechef.com/problems/HOSTELROOM
// Solution Link: https://www.codechef.com/viewsolution/58557650
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while(T--)
    {
        int N, X;
        cin >> N >> X;
        vector<int> arr(N, 0);
        int sum = 0, maxSum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            maxSum = (maxSum < sum) ? sum : maxSum;
        }
        cout << maxSum+X << endl;
    }
    return 0;
}

