#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i=0; i<n-2; i++) {
        int x = a[i], y = a[i+1], z = a[i+2];
        if (x+y>z && x+z>y && y+z>x) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
