#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

ABCDE
ABCD
ABC
AB
A

*/

int main(){
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ ){

        for(int j = 0; j < n - i; j++){
            cout << char('A' + j); 
        }
        cout << endl;
    }
}