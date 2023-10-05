#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double jarak;
    int s;
    int v;
    double srad;

    cout<<"Menghitung Jarak Horizontal Burung Boro /n";
    cout<<"Masukkan Sudut : ";
    cin >> s;
    cout<<"Masukkan Kecepatan : ";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout<<"Jarak terjauh yang bisa ditempuh boro adalah : ";
    cout << jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

