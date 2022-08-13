#include <bits/stdc++.h>
using namespace std;

// Sale Season - SALESEASON
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        if(x<=100)
        {
            cout << x << endl;
        }
        else if(x<=1000)
        {
            cout << x-25 << endl;
        }
        else if(x<=5000)
        {
            cout << x-100 << endl;
        }
        else
        {
            cout << x-500 << endl;
        }
    }
}
