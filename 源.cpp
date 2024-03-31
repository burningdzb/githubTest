#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>
#include<functional>
#include<windows.h>
#include<time.h>
#include<string>
#include<map>
#include<ctime>
#include<cassert>
#include <ranges>

#pragma warning(disable:4996)

using namespace std;



int main() {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    string ans;
    for (const auto& c : s)
    {
        while (!ans.empty() && ans.back() > c && m)
        {
            ans.pop_back();
            m--;
        }
        ans.push_back(c);
    }
    while (m > 0)
    {
        ans.pop_back();
        m--;
    }

    cout << ans;

    return 0;
}