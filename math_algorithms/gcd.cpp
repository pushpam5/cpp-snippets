#include <iostream>
#include <ctime>  // Use <ctime> instead of <time>
using namespace std;


/*

With modulus (use % operator repeatedly)    
9999999999999 999999999999
GCD: 1
Execution Time: 6e-06 seconds

With subtraction (use - operator repeatedly)
9999999999999 999999999999
GCD: 1
Execution Time: 3.26457 seconds

*/
int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        } else {
            b = b % a;
        }
    }

    return (a > 0) ? a : b;
}

int main(){
    int a, b;
    cin >> a >> b;

    clock_t start = clock();  // Start time measurement
    int result = gcd(a, b);
    clock_t end = clock();    // End time measurement

    cout << "GCD: " << result << endl;
    cout << "Execution Time: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}
