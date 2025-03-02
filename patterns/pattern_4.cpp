#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

1    
22   
333  
4444 
55555

*/

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++ ){

        for(int j = 0; j < i; j++){
            cout << i; 
        }
        cout << endl;
    }
}