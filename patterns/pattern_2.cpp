#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

*    
**   
***  
**** 
*****

*/

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++ ){
        int stars = i;

        for(int j = 0; j < stars; j++){
            cout << "*"; 
        }
        cout << endl;
    }
}