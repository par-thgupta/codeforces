#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

int main()
{
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        v.pb(x);
    }
    int minn = *min_element(v.begin(), v.end());
    int countt = count(v.begin(), v.end(), minn);
    if (countt == 1)
    {
        auto ans = find(v.begin(), v.end(), minn);
        cout << ans - v.begin() + 1 << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }
    return 0;
}