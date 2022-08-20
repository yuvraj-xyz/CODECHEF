#include <bits/stdc++.h>
using namespace std;

// End Sorted - ENDSORTED
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,temp;
        cin >> n;
        vector<int> p;
        for(int i=0; i<n; i++)
        {
            cin >> temp;
            p.push_back(temp);
        }

        int first = 1;
        int last = n;

        auto it = find(p.begin(), p.end(), first);
        int index = (it - p.begin())+1;
        auto it2 = find(p.begin(), p.end(), last);
        int index2 = (it2 - p.begin())+1;

        auto it3 = find(p.rbegin(), p.rend(), last); 
        int x = (it3 - p.rbegin())+1;

        int res;
        if(index==1 && index2==n)
        {
            res = 0;
        }
        else if(index2>index)
        {
            res = (index-1)+(x-1);
        }
        else if(index>index2)
        {
            res = ((index-1)+(x-1))-1;
        }
        cout << res << endl;
    }
}

