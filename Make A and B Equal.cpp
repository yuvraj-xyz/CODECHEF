#include <bits/stdc++.h>
using namespace std;

// Make A and B Equal
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b;
        cin >> a >> b;

        if(a<b)
        {
            int i=2;
            while(a<b)
            {
                a*=i;
            }
            if(a==b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if(b<a)
        {
            int i=2;
            while(b<a)
            {
                b*=i;
            }
            if(a==b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
