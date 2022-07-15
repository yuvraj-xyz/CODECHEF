#include <bits/stdc++.h>
using namespace std;

// Chef and Candies - CHEFCAND
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x;
        cin >> n >> x;

        if(x>=n)
        {
            cout << 0 << endl;
        }
        else if((n-x)%4==0)
        {
            cout << (n-x)/4 << endl;
        }
        else if((n-x)%4!=0)
        {
            cout << ((n-x)/4)+1 << endl;
        }
    }
}
