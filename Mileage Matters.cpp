#include <bits/stdc++.h>
using namespace std;

// Mileage matters - MILEAGE***
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;

        double p = (n/a)*x;
        double d = (n/b)*y;

        if(p<d)
        {
            cout << "PETROL" << endl;
        }
        else if(d<p)
        {
            cout << "DIESEL" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
}
