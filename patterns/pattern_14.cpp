#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

A
AB
ABC
ABCD
ABCDE

*/

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++ ){

        for(int j = 0; j < i; j++){
            cout << char('A' + j); 
        }
        cout << endl;
    }
}