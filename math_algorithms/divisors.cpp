#include <iostream>
#include <ctime>  // Use <ctime> instead of <time>
using namespace std;

typedef vector<int> vi;

int main(){
    int n;
    vi divisors;
    cin >> n;
    int sqrtN = sqrt(n);

    for(int i = 1; i <= sqrtN; i++){
        if(n % i == 0){
            divisors.push_back(i);

            if(n / i != i){
                divisors.push_back(n / i);
            }
        }
    }

    for(int div: divisors){ 
        cout << div << " ";
    }
    cout << endl;

    return 0;
}
