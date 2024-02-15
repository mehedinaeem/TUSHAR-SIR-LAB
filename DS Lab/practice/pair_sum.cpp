#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, p;
    cin >> t;
    int n;
    cin >> n;
    int ar[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max = INT_MIN;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (ar[i] + ar[j] > max)
            {
                max = ar[i] + ar[j];
                m = ar[i];
                p = ar[j];
                v.push_back(max);
            }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    cout << "The maximum pair sum: " << max << endl;
    cout << "The maximum sum pair is: " << m << " " << p << endl;
    cout<<"two maximum pair sum:"<<v[0]+v[1]<<endl;
    return 0;
}