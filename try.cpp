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
int fans = -1;
void findAns(vector<int> &v, int k, int i, int c)
{
    if (i >= v.size())
    {
        i = 0;
    }
    if (v.size() == 1)
    {
        fans = v[0];
        return;
    }
    if (c == k)
    {
        v.erase(remove(v.begin(), v.end(), v[i]));
        for (auto i : v)
            cout << i << " ";
        cout << " : ";
        cout << i << " ";
        if (i >= v.size())
        {
            i = 0;
        }
        cout << endl;
        c = 1;
    }
    findAns(v, k, i + 1, c + 1);
}
int findTheWinner(int n, int k)
{
    if (k == 1)
        return n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }
    findAns(v, k, 0, 1);
    return fans;
}
int main()
{
    int n = 3;
    int k = 1;

    findTheWinner(n, k);
    cout << endl;
    cout << fans << endl;
    return 0;
}




/*
class Solution
{
public:
    int fans = -1;
    void findAns(vector<int> &v, int k, int i, int c)
    {
        if (i >= v.size())
            i = 0;
        if (v.size() == 1)
        {
            fans = v[0];
            return;
        }
        if (c == k)
        {
            v.erase(remove(v.begin(), v.end(), v[i]));
            if (i >= v.size())
                i = 0;
            c = 1;
        }
        findAns(v, k, i + 1, c + 1);
    }
    int findTheWinner(int n, int k)
    {
        if (k == 1)
            return n;
        vector<int> v;
        for (int i = 0; i < n; i++)
            v.push_back(i + 1);
        findAns(v, k, 0, 1);
        return fans;
    }
};
*/