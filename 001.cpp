#include<iostream>

int main() {
    long int sum;
    int i = 1;
    while (i < 1000) {
        if (i % 3 == 0 or i % 5 == 0) {
            sum += i;
        };

        i++;
    }

    std::cout << sum;

    return 0;
}