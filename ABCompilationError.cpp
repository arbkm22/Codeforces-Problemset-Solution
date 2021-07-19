#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    vector<int> b(n-1);
    for (auto &x:b)
        cin >> x;
    vector<int> c(n-2);
    for (auto &x:c)
        cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int rsv = 0;
    for (int i=0; i<n; i++) {
        if (a[i] != b[i]) {
            cout << a[i] << endl;
            break;
        }
    }
    for (int i=0; i<n-1; i++) {
        if (b[i]!=c[i]) {
            cout << b[i] << endl;
            break;
        }
    }

    return 0;
}
