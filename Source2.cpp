#include <iostream>
#define SIZE 10

using namespace std;

class queue {
private:
    int elements[SIZE];
    int start, end;

public:
    queue() {
        start = -1;
        end = -1;
    }

    bool Full() {
        if (start == 0 && end == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool Empty() {
        if (start == -1)
            return true;
        else
            return false;
    }

    void enQueue(int x) { //добавление элемента
        if (Full()) {
            cout << "Queue is full" << endl;
        }
        else {
            if (start == -1)
                start = 0;
            end++;
            elements[end] = x;
            cout << x << endl;
        }
    }

    int deQueue() { //удаление элемента
        int x;
        if (Empty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else {
            x = elements[start];
            if (start >= end) {
                start = -1;
                end = -1;
            }
            else {
                start++;
            }
            return (x);
        }
    }

    void out() {
        int i;
        if (Empty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            for (i = start; i <= end; i++)
                cout << elements[i] << "  ";
        }
    }
};

int main() {
    queue qu;
    //инициализируем очередь
    for (int i = 1; i < 12; i++)
        qu.enQueue(i);
    //выводим очередь
    qu.out();

    return 0;
}
