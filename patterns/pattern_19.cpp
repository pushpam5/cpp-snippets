#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < 2 * n ; i++){
        int spaces = i >= n ? 2 * n - i - 1 : i;
        int stars = n - spaces;
        cout << string(stars, '*') << string(2 * spaces, ' ') << string(stars, '*') << endl;
    }
}