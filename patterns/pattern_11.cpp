#include<iostream>
using namespace std;

/*

Print pattern like below

n = 5

1
01
101
0101
10101

*/

int main(){
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++ ){
        int numbers = i;
        int currentValue = i % 2 != 0 ? 1 : 0;
        for(int j = 0; j < numbers; j++){
            cout << currentValue;
            currentValue = 1 - currentValue;
        }
        cout << endl;
    }
}