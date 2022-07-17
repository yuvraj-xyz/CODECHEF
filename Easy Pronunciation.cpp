#include <bits/stdc++.h>
using namespace std;

// Easy Pronunciation - EZSPEAK
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        string res = "YES";
        for(int i=0; i<n-3; i++)
        {
            int count=0;
            for(int j=i; j<i+4; j++)
            {
                if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u')
                {
                    count++;
                }
                if(count>=4)
                {
                    res = "NO";
                    break;
                }
            }
        }
        if(n<4)
        {
            res = "YES";
        }
        cout << res << endl;
    }
}
