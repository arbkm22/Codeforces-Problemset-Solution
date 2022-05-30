#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        int cnt = 0;
        int low = INT_MAX;
        for (int i=n-1; i>=0; i--) {
            if (arr[i]>low)
                cnt++;
            low = min(low, arr[i]);
        }
        cout << cnt << endl;
    }

    return 0;
}
