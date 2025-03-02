#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

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
}

int main(){
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ ){
        int stars = 2 * (n - i) - 1;
        int spaces = i;

        printStarsAndSpaces(stars, spaces);
    }
}