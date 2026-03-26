#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream ofile("demo.txt");
    if(ofile.is_open()) {
        ofile << "Writing text to C++ created file." << endl;
        ofile.close();
        cout << "Created and wrote to file." << endl;
        
        ifstream ifile("demo.txt");
        string line;
        while(getline(ifile, line)) cout << "Read: " << line << endl;
        ifile.close();
    } else { cout << "Error creating file." << endl; }
    return 0;
}
