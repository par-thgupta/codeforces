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
    string s;
    cin >> s;
    int i = 0;
    int c = 0;
    while (i < s.size())
    {

        if (s[i] == '7' || s[i] == '4')
        {
            c++;
        }
        i++;
    }
    string x = to_string(c);
    int y = 0;
    int z = 0;
    while (y < x.size())
    {
        if (x[y] != '7' && x[y] != '4')
        {
            cout << "NO";
            return 0;
        }
        y++;
    }
    cout << "YES";

    return 0;
}
