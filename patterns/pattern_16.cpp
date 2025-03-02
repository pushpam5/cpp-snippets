#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

A
BB
CCC
DDDD
EEEEE

*/

int main(){
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ ){

        for(int j = 0; j <= i; j++){
            cout << char('A' + i ); 
        }
        cout << endl;
    }
}