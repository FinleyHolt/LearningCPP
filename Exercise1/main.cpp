#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    int c = a + b;

    a = c - a;
    b = c - b;

    std::cout << b;
}