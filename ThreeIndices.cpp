#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        vector<int> ans(n);
        bool state = false;
        for (int i=1; i<n-1; i++) {
            if (a[i]>a[i-1] && a[i]>a[i+1]) {
                cout << "YES\n";
                cout << i << " " << i+1 << " " << i+2 << endl;
                state = true;
                break;
            }         
        }
        if (!state)
            cout << "NO\n";
    }

    return 0;
}
