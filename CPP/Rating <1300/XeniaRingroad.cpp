#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, m;
    long long ans = 0;
    cin >> n >> m;
    long long a[m];
    for (int i=0; i<m; i++) {
	cin >> a[i];
	a[i]--;
    }
    long long last = 0;
    for (int i=0; i<m; i++) {
	if (a[i]>=last) 
	    ans += (a[i]-last);
	else
	    ans += (n-(last-a[i]));
	last = a[i];
    }
    cout << ans << endl;
    return 0;
}
