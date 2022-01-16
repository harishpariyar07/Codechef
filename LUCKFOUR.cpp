// Impressed by the power of this number, Kostya has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.
// Problem link: https://www.codechef.com/problems/LUCKFOUR
// Solution link: https://www.codechef.com/viewsolution/56490800
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int nums[t];
    for (int i = 0; i < t; i++)
    {
        cin >> nums[i];
        int num = nums[i];
        int count = 0;
        while (num > 0)
        {
            if (num % 10 == 4)
                count++;
            num = num / 10;
        }
        cout << count << endl;
    }
    return 0;
}
