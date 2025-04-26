#include <iostream>
using namespace std;


int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i * i <= number; i = i + 1) {
        if (number % i == 0)
            return 0;
    }

    return 1; 
}

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (first must be less than second): ";
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin) {
    for (int i = begin + 1; ; i = i + 1) {
        if (isPrime(i) == 1)
            return i;
    }
}


int getPrevPrime(int end) {
    for (int i = end - 1; i > 1; i = i - 1) {
        if (isPrime(i) == 1)
            return i;
    }

    return -1;
}

