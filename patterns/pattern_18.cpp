#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

E 
D E 
C D E 
B C D E 
A B C D E 

*/

int main(){
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ ){

        char initValue = 'A' + (n - i - 1);
        for(int j = 0; j <= i; j++){
            cout << initValue++ << " "; 
        }
        cout << endl;
    }
}