#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(n);
    for (int i=0; i<n; i++) 
        cin >> a[i] >> b[i];
    long long sum = 0;
    for (int i=0; i<n; i++) 
        sum += a[i];
    vector<long long> d(n);
    for (int i=0; i<n; i++) 
        d[i] = a[i] - b[i];
    sort(d.rbegin(), d.rend());
    for (int i=0; i<n; i++) {
        if (sum <= m) {
            cout << i << endl;
            return 0;
        }
        sum -= d[i];
    }
    if (sum <= m)
        cout << n << endl;
    else 
        cout << -1 << endl;

    return 0;
}
