#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

12345     
1234    
123   
12  
1

*/

int main(){
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ ){

        for(int j = 0; j < n - i; j++){
            cout << j + 1; 
        }
        cout << endl;
    }
}