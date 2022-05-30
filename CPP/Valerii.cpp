#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (auto &x:b)
            cin >> x;
        sort(b.begin(), b.end());
        bool ans = false;
        for (int i=0; i<n; i++) {
            if (b[i]==b[i+1]) {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
