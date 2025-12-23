//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    ifstream source;
    string txt;
    double sum = 0;
    double othersum = 0;
    double n = 0;

    source.open("score.txt");
    while (getline(source, txt)) {
        sum = sum + stod(txt);
        othersum = othersum + pow(stod(txt),2);
        n++;
    }
    source.close();

    double miu = sum / n;
    double sigma = sqrt((othersum / n) - pow(miu,2));

    cout << "Number of data = " << n << "\n";
    cout << setprecision(3);
    cout << "Mean = " << miu << "\n";
    cout << "Standard deviation = " << sigma << "\n";
}