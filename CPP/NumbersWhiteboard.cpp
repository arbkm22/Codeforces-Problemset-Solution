#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> arr;
        for (int i=0; i<n; i++) 
            arr.insert(i+1);
        vector<pair<int, int>> ans;
        for (int i=0; i<n-1; i++) {
            auto it = arr.end();
            it--;
            int a = *it;
            arr.erase(it);
            it = arr.end();
            it--;
            int b = *it;
            arr.erase(it);
            arr.insert((a+b+1)/2);
            ans.push_back(make_pair(a, b));
        }
        cout << *arr.begin() << endl;
        for (int i=0; i<ans.size(); i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}
