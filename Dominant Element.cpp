#include <bits/stdc++.h>
using namespace std;

// Dominant Element - DOMINANT2
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
            int z;
            cin >> z;
            a.push_back(z);
        }

        sort(a.begin(), a.end());
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int cnt = count(a.begin(), a.end(), a[i]);
            vec.push_back(cnt);
            i+=cnt-1;
        }
        if(vec.size()==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int mx = *max_element(vec.begin(), vec.end());
            int cnt2 = count(vec.begin(), vec.end(), mx);
            if(cnt2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        
    }
}
