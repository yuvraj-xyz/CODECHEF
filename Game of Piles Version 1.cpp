#include <bits/stdc++.h>
using namespace std;

// Game of Piles Version 1 - GAMEOFPILES1
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,a;
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            vec.push_back(a);
        }

        string res;
        int max = 0;
        int x = 0;
        for(int i=0; i<n; i++)
        {
            if(vec[i]==1)
            {
                x++;
                break;
            }
            max+=(vec[i]-2);
        }
        if(x>0)
        {
            res = "CHEF";
        }
        else if(max%2!=0)
        {
            res = "CHEF";
        }
        else
        {
            res = "CHEFINA";
        }

        cout << res << endl;
    }
}
