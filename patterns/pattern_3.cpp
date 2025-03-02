#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

1    
12   
123  
1234 
12345

*/

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++ ){

        for(int j = 0; j < i; j++){
            cout << j + 1; 
        }
        cout << endl;
    }
}