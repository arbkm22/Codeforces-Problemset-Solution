#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (auto &x:arr)
        cin >> x;
    while (q--) {
        int x;
        cin >> x;
        int p = find(arr.begin(), arr.end(), x) - arr.begin();
        cout << p+1 << " ";
        rotate(arr.begin(), arr.begin()+p, arr.begin()+p+1);
    }
    cout << endl;

    return 0;
}
