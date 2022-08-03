#include <bits/stdc++.h>
using namespace std;

// Nearest Court - NEARESTCOURT
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        int diff = abs(x-y);
        if(diff%2!=0)
        {
            cout << (diff+1)/2 << endl;
        }
        else
        {
            cout << diff/2 << endl;
        }
    }
}
