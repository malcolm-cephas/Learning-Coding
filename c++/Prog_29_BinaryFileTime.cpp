#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);


    ofstream out("time.bin", ios::binary);
    out.write((char*)&now, sizeof(now));
    out.close();


    time_t readTime;
    ifstream in("time.bin", ios::binary);
    in.read((char*)&readTime, sizeof(readTime));
    in.close();

    char* dt = ctime(&readTime);
    cout << "Time read from binary file: " << dt << endl;
    return 0;
}
