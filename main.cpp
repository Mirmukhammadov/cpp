#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    int n = a.size();
    sort(a.begin(), a.end());

    int sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        sum += a[i];
    }

    return sum;

}

//do not modify the below code
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i ++)
        cin >> a[i];

    cout << solve(a);
}




using namespace std;

int solve(string s)
{
    int n = s.size();
    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    int maxLength = 0;
    bool oddFound = false;

    for (auto it : freq)
    {
        if (it.second % 2 == 0)
        {
            maxLength += it.second;
        }
        else
        {
            maxLength += it.second - 1;
            oddFound = true;
        }
    }

    if (oddFound)
    {
        maxLength += 1;
    }

    return maxLength;

}

//do not modify the below code
int main()
{
    string s;
    cin >> s;

    cout << solve(s);
}