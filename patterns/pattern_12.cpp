#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

1        1
12      21
123    321
1234  4321
1234554321

*/


void print(int number, int spaces){

    for(int i = 1; i <= number; i++){
        cout << i;
    }

    for(int i = 0; i < spaces; i++){
        cout << " ";
    }

    for(int i = number; i > 0; i--){
        cout << i;
    }

    cout << endl;
}

int main(){
    int n;
    cin >> n;

    for(int i = 1 ; i <= n ; i++ ){
        print(i, 2 * (n - i));
    }
}