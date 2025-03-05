#include<iostream>

using namespace std;

/*

Print pattern like below

n = 5

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 

*/

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){

        int characters = 2 * i - 1;
        int spaces = n - i;

        for(int j = 0; j < spaces; j++){
            cout << " ";
        }

        for(int j = 0 ; j < characters; j++){
            if(j <= characters / 2){
                cout << char('A' + j);
            } else {
                cout << char('A' + (characters - j - 1));
            }
        }
        cout << endl;
    }
}