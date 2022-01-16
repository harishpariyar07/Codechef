// Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID.
// Problem link: https://www.codechef.com/problems/FLOW010
// Solution link: https://www.codechef.com/viewsolution/56486368
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] == 'B' || c[i] == 'b')
        {
            cout << "BattleShip" << endl;
        }
        else if (c[i] == 'C' || c[i] == 'c')
        {
            cout << "Cruiser" << endl;
        }
        else if (c[i] == 'D' || c[i] == 'd')
        {
            cout << "Destroyer" << endl;
        }
        else if (c[i] == 'F' || c[i] == 'f')
        {
            cout << "Frigate" << endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
