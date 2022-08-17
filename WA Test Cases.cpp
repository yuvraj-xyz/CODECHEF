#include <bits/stdc++.h>
using namespace std;

// WA Test Cases - WATESTCASES
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        string v;
        cin >> v;

        int res = 101;  
        for(int i=0; i<n; i++)
        {
            if(v[i]=='0' && a[i]<res)
            {
                res = a[i];   
            }
        }
        cout << res << endl;
    }
}
