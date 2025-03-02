#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *

*/

void printStarsAndSpaces(int stars, int spaces){

    for(int i = 0; i < spaces; i++){
        cout << " ";
    }

    for(int i = 0; i < stars; i++){
        cout << "*";
    }

    cout << endl;

    /*
     
    Alternative:

    Use string constructor

    cout << string(spaces, ' ') << string(stars, '*') << endl;
    
    */
}

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= 2 * n; i++ ){

        if(i <= n){
            printStarsAndSpaces((2 * i) - 1 , n - i);
        } else {
            printStarsAndSpaces(2 * (2 * n - i) + 1, i - n - 1);
        }
    }
}