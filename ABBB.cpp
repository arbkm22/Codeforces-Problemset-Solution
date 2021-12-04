#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = 0;
        for (int i=0; i<s.size(); i++) {
            if (ans && s[i]=='B')
                ans--;
            else 
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
