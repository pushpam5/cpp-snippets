#include <iostream>
using namespace std;

/*
Print pattern like below

n = 5

*         
**        
***       
****      
*****     
****      
***       
**        
*

*/

void print(int spaces, int stars){

    for(int j = 0; j < stars;j++){
        cout << "*";
    }

    for(int j = 0; j < spaces;j++){
        cout << " ";
    }
    cout << endl;
}

int main() {
    int n, stars, spaces;
    cin >> n;

    for(int i = 1; i <= 2 * n - 1; i++) {

        stars = i;
        if(i > n){
            stars = 2 * n - i;
        }
        spaces = 2 * n - stars;
        print(spaces, stars);

    }
    return 0;
}