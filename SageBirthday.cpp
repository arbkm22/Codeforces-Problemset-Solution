#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i=0; i<n-1; i++) {
        if (a[i] < a[i+1]) {
            swap(a[i], a[i+1]);
            i++;
        }
    }
    long long ans = 0;
    for (int i=1; i<n-1; i++) {
        if (a[i] < a[i+1] && a[i] < a[i-1])
            ans++;
    }
    cout << ans << endl;
    for (auto &x:a)
        cout << x << " ";
    cout << endl;

    return 0;
}
