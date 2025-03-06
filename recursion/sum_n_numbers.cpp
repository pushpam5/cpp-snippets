#include <iostream>
#include <ctime>
using namespace std;

// Parameterized way
int sumNNumbersP(int i, int n, int sum)
{
    if (i > n)
    {
        return sum;
    }
    return sumNNumbersP(i + 1, n, sum + i);
}

// Functional way
int sumNNumbersF(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumNNumbersF(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int start = clock();
    cout << sumNNumbersP(1, n, 0) << endl;
    int end = clock();
    cout << "Execution Time for parameterized: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    start = clock();
    cout << sumNNumbersF(n) << endl;
    end = clock();
    cout << "Execution Time for functional: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
}
