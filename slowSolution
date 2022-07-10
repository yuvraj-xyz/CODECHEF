#include <bits/stdc++.h>
using namespace std;

// Slow Sollution - SLOWSOLN
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
         long long maxT,maxN,sumN;
         cin >> maxT >> maxN >> sumN;

         long long res = 0;
         while(maxT-- && sumN>0)
         {
            if(sumN>=maxN)
            {
                res+=pow(maxN,2);
                sumN-=maxN;
            }
            else
            {
                res+=pow(sumN,2);
                break;
            }
         }
         cout << res << endl;
    }
}
