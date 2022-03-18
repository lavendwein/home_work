#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> numbers;

    int sum = 0;
    for (int i = 0; i < 10000; i++) {
        int number = rand() % 201 - 100;
        sum += number;
        numbers.push_back(number);
    }
    cout << sum / 10000.0 << endl;
    return 0;
}
