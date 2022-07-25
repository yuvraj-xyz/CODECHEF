#include <bits/stdc++.h>
using namespace std;

// Maximize Difference - DIF_GCD
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        int res=0;
        int A,B;
        if((2*n)>m)
        {
            for(int i=n; i<=m; i++)
            {
                int a = i;
                int b = m-(m%i);

                int maxi = max(abs(a-b), res);
                if(maxi>res)
                {
                    res = maxi;
                    A = a;
                    B = b;
                }
                else if(maxi==0)
                {
                    res = maxi;
                    A = a;
                    B = b;
                }
            }
        }
        else
        {
            for(int i=n; i<=2*n; i++)
            {
                int a = i;
                int b = m-(m%i);

                int maxi = max(abs(a-b), res);
                if(maxi>res)
                {
                    res = maxi;
                    A = a;
                    B = b;
                }
                else if(maxi==0)
                {
                    res = maxi;
                    A = a;
                    B = b;
                }
            }
        
        }
        cout << A << " " << B << endl;
    }
}
