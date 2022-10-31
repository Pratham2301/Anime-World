#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> total;
    int a = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            a += x;
            if (i == 3)
            {
                total.push_back(make_pair(a, j + 1));
                a = 0;
            }
        }
    }

    sort(total.begin(), total.end(), cmp);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << total[i].first << " " << total[i].second << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        // cout<<total[i].first<<" "<<total[i].second<<endl;
        if (total[i].second == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
