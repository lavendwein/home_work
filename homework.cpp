#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
//#include <algorithm>

using namespace std;

int main()
{
    list<double>numbers;
    ifstream file("file.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return -1;
    }
    while (!file.eof()) {
        double num;
        file >> num;
        numbers.push_back(num);
    }
    numbers.sort();
    double sum = 0;
    for (double i : numbers) {
        cout << i << endl;
        sum += i;
    }
    cout << sum / numbers.size() << endl;
}
