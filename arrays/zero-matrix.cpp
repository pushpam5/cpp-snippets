#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

void setZeroes(vector<vi>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                if(i == 0 && j != 0){
                    matrix[0][0] = 0;
                } else if(j == 0){
                    col0 = 0;
                } else{
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int i = 0; i < m; i++){
            matrix[0][i] = 0;
        }
    }
    if(col0 == 0){
        for(int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vi> matrix(n, vi(m));
    
    // Input the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call function to modify the matrix
    setZeroes(matrix);

    // Print the modified matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
