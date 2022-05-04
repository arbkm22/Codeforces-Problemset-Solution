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
File        : ThreePartsArray
Created on  : Wed May  4 10:16:18 PM IST 2022
*/

#include <bits/stdc++.h>
#include <ios>
#include <vector>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x: arr)
        cin >> x;
    set<ll> sum;
    ll left = 0, right = 0, ans = 0;
    for (int i=0; i<n; i++) {
        left += arr[i];
        sum.insert(left);
    }
    for (int i=n-1; i>=0; i--) {
        sum.erase(left);
        left -= arr[i];
        right += arr[i];
        if (sum.count(right))
                ans =  max(ans, right);
    }
    cout << ans << endl;

    return 0;
}
