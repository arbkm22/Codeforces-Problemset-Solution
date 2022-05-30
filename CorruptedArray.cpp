/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  '9XXXXXXXXXXXXXXXXXXXXX'~   ~'OOO8b   d8OOO'~   ~'XXXXXXXXXXXXXXXXXXXXXP'
    '9XXXXXXXXXXXP' '9XX'   DIE    '98v8P'  HUMAN   'XXP' '9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP''v''9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   '9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   'XXXXXb.dX|Xb.dXXXXX'   'dXXP
                     ''      9XXXXXX(   )XXXXXXP      ''
                              XXXX X.'v'.X XXXX
                              XP^X''b   d''X^XX
                              X. 9  '   '  P )X
                              'b  '       '  d'
                               '             '
 
Author      : hellking
File        : CorruptedArray
Created on  : Tue May  3 11:25:29 AM IST 2022
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    map<ll, ll> mp;
    while (t--) {
        mp.clear();
        int n;
        cin >> n;
        vector<ll> arr(n+2);
        for (int i=0; i<n+2; i++) {
            ll x;
            cin >> x;
            arr.push_back(x);
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        ll sum = 0;
        for (int i=0; i<n+1; i++) {
            sum += arr[i];
        }   
        ll c = sum - arr[n+1];
        mp[arr[n+1]]--;
        if (mp[c]) {
            mp[c]--;
            for (auto i: mp) {
                for (int j=0; j<i.second; j++)
                    cout << i.first << " ";
            }
        }
        else if (arr[n] == sum - arr[n]) {
            for (int i=0; i<n; i++) {
                cout << arr[i] << " ";
            }
        }
        else 
            cout << -1;
        cout << endl;
    }

    return 0;
}
