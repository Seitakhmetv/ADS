#include <bits/stdc++.h>

using namespace std;

int n, a[1000];

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int l, r, mid;
    mid = n/2;
    l = 0;
    r = n;
    while(r > l)
    {
        mid = (l+r)/2;
        cout << "looking at a[" << mid << "] = " << a[mid] << endl; 
        if(a[mid] < x)
        {
            l = mid + 1;
        }
        else if(a[mid] > x)
        {
            r = mid-1;
        }
        else
        {
            cout << mid+1;
            break;
        }

    }
}