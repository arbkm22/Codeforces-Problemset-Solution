#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a;
        cin >> a;
        int parity = a % 2;
        bool ok = true;
        for (int i=1; i<n; i++) {
            cin >> a;
            if (a%2 != parity)
                ok = false;
        }
        if (ok)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}
