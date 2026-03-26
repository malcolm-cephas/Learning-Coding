#include <iostream>
using namespace std;

class Matrix {
    int mat[5][5], r, c;
public:
    void read(int rows, int cols) {
        r = rows; c = cols;
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> mat[i][j];
    }
    void display() {
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    Matrix add(Matrix other) {
        Matrix res; res.r = r; res.c = c;
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) res.mat[i][j] = mat[i][j] + other.mat[i][j];
        return res;
    }
};

int main() {
    Matrix m1, m2; 
    cout << "Enter 2x2 elements for M1:\n"; m1.read(2, 2);
    cout << "Enter 2x2 elements for M2:\n"; m2.read(2, 2);
    Matrix m3 = m1.add(m2);
    cout << "Result Addition:\n"; m3.display();
    return 0;
}
