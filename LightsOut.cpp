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
File        : LightsOut
Created on  : Sun May 29 02:21:06 PM IST 2022
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    int a11 = x11 + x12 + x21;
    int a12 = x11 + x12 + x13 + x22;
    int a13 = x12 + x13 + x23;
    int a21 = x11 + x21 + x22 + x31;
    int a22 = x12 + x21 + x22 + x23 + x32;
    int a23 = x13 + x22 + x23 + x33;
    int a31 = x21 + x31 + x32;
    int a32 = x22 + x31 + x32 + x33;
    int a33 = x23 + x32 + x33;
    cout << ((a11 % 2 == 0) ? "1" : "0") << ((a12 % 2 == 0) ? "1" : "0") << ((a13 % 2 == 0) ? "1" : "0") << endl;
    cout << ((a21 % 2 == 0) ? "1" : "0") << ((a22 % 2 == 0) ? "1" : "0") << ((a23 % 2 == 0) ? "1" : "0") << endl;
    cout << ((a31 % 2 == 0) ? "1" : "0") << ((a32 % 2 == 0) ? "1" : "0") << ((a33 % 2 == 0) ? "1" : "0") << endl;

    return 0;
}
