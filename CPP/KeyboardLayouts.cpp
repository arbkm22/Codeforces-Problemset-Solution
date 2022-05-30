/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'
    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP'`v'`9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP
                     `'      9XXXXXX(   )XXXXXXP      `'
                              XXXX X.`v'.X XXXX
                              XP^X'`b   d'`X^XX
                              X. 9  `   '  P )X
                              `b  `       '  d'
                               `             '
 
Author      : hellking
File        : KeyboardLayouts
Created on  : Tue, 27 April, 2021
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

char layout(const string a, const string b, char x) {
    bool state = isupper(x);
    if (isdigit(x)) 
        return x;
    else {
        char t = tolower(x);
        int pos = 0;
        for (int i=0; i<26; i++) {
            if (t == a[i]){
                pos = i;
                break;
            }
        }
        if (state)
            return toupper(b[pos]);
        else 
            return b[pos];
    }

}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string l1, l2, s;
    cin >> l1 >> l2 >> s;
    string ans;
    for (int i=0; i<s.size(); i++) {
        ans += layout(l1, l2, s[i]);
    }
    cout << ans << endl;

    return 0;
}