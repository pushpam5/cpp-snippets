#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

*****
*   *
*   *
*   *
*****

*/

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i++){
        bool isFirstOrLastRow = (i == 1 || i == n);
        int stars = isFirstOrLastRow ? n : 1;
        int spaces = isFirstOrLastRow ? 0 : n - 2;
        cout << string(stars, '*') << string(spaces, ' ') << string(isFirstOrLastRow ? 0 : stars, '*') << endl;
    }
}