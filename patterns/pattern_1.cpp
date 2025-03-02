#include<iostream>
#include<string>

using namespace std;

/*
Print pattern like below

n = 5

*****
*****
*****
*****
*****

*/

int main(){
    int n;
    cin >> n;
    string row(n, '*');
    for(int i = 0; i < n ;i++){
        cout << row << endl;
    }
}