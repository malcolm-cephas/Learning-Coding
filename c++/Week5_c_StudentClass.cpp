#include <iostream>
#include <string>
using namespace std;

class STUDENT {
    string Sname;
    int Marks[5], Total, Tmax;
public:
    void assign(string name, int m[], int max) {
        Sname = name; Tmax = max; 
        for(int i=0; i<5; i++) Marks[i] = m[i];
    }
    void compute() {
        Total = 0; for(int i=0; i<5; i++) Total += Marks[i];
    }
    void display() {
        cout << "Name: " << Sname << ", Total: " << Total << ", Max: " << Tmax << endl;
    }
};

int main() {
    STUDENT s;
    int m[] = {80, 90, 85, 70, 95};
    s.assign("Naveen", m, 500); s.compute(); s.display();
    return 0;
}
