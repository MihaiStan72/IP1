#include "t1.h"
#include <iostream>
using namespace std;

int main() {

    return 0;
}

bool isPalindrom(unsigned long long number) {
    unsigned long long numberCopy = number, palindrome = 0;
    while (number) {
        palindrome *= 10;
        palindrome += number % 10;
        number /= 10;
    }
    return palindrome == numberCopy;
}

unsigned char sumBinaryFigure(unsigned long long number) {
    unsigned char sum = 0;
    while (number) {
        sum += number % 2;
        number /=2;
    }
    return sum;
}

bool isLeapYear(unsigned short year) {
    if (year % 4) {
        return false;
    }
    if (year % 100) {
        return true;
    }
    if (year % 400) {
        return false;
    }
    return true;
}


