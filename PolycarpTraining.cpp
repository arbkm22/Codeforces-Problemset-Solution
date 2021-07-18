#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    int k = 1;
    for (int i=0; i<n; i++) {
        if (a[i]>=k)
            k++;
    }
    cout << k-1 << endl;
    return 0;
}
