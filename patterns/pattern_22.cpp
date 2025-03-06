#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/

int main() {
    int n;
    cin >> n;

    int rows = 2 * n - 1;
    for(int i = 1; i <= rows; i++){
        int initValue = n;
        for(int j = 1 ; j <= rows; j++){
           cout << initValue - min( i > n ? (rows - i) : i - 1, j > n ? (rows - j) : j - 1) << " ";
        }
        cout << endl;
    }
}