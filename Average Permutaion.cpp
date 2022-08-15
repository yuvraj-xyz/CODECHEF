#include <bits/stdc++.h>
using namespace std;

// Average Permutation - AVGPERM
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> res;
        if(n==3)
        {
            cout << 3 << " " << 2 << " " << 1 << endl;
        }
        else
        {
            cout << n << " " << n-2 << " ";
            for(int i=1; i<n-3; i++)
            {
                cout << i << " ";
            }
            cout << n-3 << " " << n-1 << endl;
        }
    }
}
