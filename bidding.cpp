#include <bits/stdc++.h>
using namespace std;

// Bidding - AUCTION
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a>b && a>c)
        {
            cout << "Alice" << endl;
        }
        else if(b>a && b>c)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
}
