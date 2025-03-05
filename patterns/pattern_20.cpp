#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < 2 * n ; i++){
        int stars = i > n ? (2 * n - (i)) : i;
        int spaces = n - stars;
        cout << string(stars, '*') << string(2 * spaces, ' ') << string(stars, '*') << endl;
    }
}