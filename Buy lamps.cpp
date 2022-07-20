#include <bits/stdc++.h>
using namespace std;

// Buy Lamps - BUYLAMP
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k,x,y;
        cin >> n >> k >> x >> y;

        int red_lamps = k*x;
        int blue_lamps = (n-k)*y;

        if(x>=y)
        {
            cout << red_lamps+blue_lamps << endl;
        }
        else
        {
            cout << n*x << endl;
        }
    }
}
