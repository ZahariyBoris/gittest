#include <iostream>
#include <conio.h>
#include <math.h>

#define h 0.1
#define b 2

float Min();
float Max();

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "UKRAINIAN");

    if (argc < 2) {
        std::cout << "Недостатньо аргументів \n";
        std::cout << "Введіть параметр min або max";
        exit(1);
    }

    float minVal, maxVal;
    minVal = Min();
    maxVal = Max();

    if (*argv[1] == 'm' && *(argv[1] + 1) == 'i' && *(argv[1] + 2) == 'n') {
        std::cout << "Min= " << minVal;
    } else if (*argv[1] == 'm' && *(argv[1] + 1) == 'a' && *(argv[1] + 2) == 'x') {
        std::cout << "Max= " << maxVal;
    } else {
        std::cout << "Параметр не визначено";
    }

    getch();
    return 0;
}

float Min() {
    float x = 1, m, y;
    m = x * x * sin(x);

    for (; x <= b; x += h) {
        y = x * x * sin(x);
        if (m > y) {
            m = y;
        }
    }

    return m;
}

float Max() {
    float x = 1, m, y;
    m = x * x * sin(x);

    for (; x <= b; x += h) {
        y = x * x * sin(x);
        if (m < y) {
            m = y;
        }
    }

    return m;
}
