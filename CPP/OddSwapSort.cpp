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
File        : OddSwapSort
Created on  : Sat Apr 23 10:52:01 AM IST 2022
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else 
                odd.push_back(x);
        }
        bool oddSorted = true, evenSorted = true;
        if (odd.size() > 0) {
            for (int i=0; i<odd.size()-1; i++) {
                if (odd[i] > odd[i+1]) {
                    oddSorted = false;
                    break;
                }
            }
        }
        if (even.size() > 0) {
            for (int i=0; i<even.size()-1; i++) {
                if (even[i] > even[i+1]) {
                    evenSorted = false;
                    break;
                }
            }
        }
        if (oddSorted && evenSorted) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}
