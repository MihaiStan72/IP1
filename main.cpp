#include "t1.h"
#include <iostream>
using namespace std;

int main() {
    cout << (int)fibonnaci(1);
    return 0;
}

bool isPalindrom (unsigned long long number) {
    unsigned long long numberCopy = number, palindrome = 0;
    while (number) {
        palindrome *= 10;
        palindrome += number % 10;
        number /= 10;
    }
    return palindrome == numberCopy;
}

unsigned char sumBinaryFigure (unsigned long long number) {
    unsigned char sum = 0;
    while (number) {
        sum += number % 2;
        number /= 2;
    }
    return sum;
}

bool isLeapYear (unsigned short year) {
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

unsigned char dayOfTheWeek (unsigned short year, unsigned char month, unsigned char day) {
    int q, m, k ,j, h;
    if (month == 1) {
        month = 13;
        year--;
    }
    if (month == 2) {
        month = 14;
        year--;
    }
    q = day;
    m = month;
    k = year % 100;
    j = year / 100;
    h = q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
    h = h % 7;
    h += 5;
    return h % 7 + 1;
}

unsigned int fibonnaci(int index) {
    unsigned int fibOne = 0, fibTwo = 1, fibThree, counter;
    switch (index) {
        case 0:
        return fibOne;
        case 1:
        return fibTwo;
        default:
        for (counter = 2; counter <= index; counter++) {
            fibThree = fibOne + fibTwo;
            fibOne = fibTwo;
            fibTwo = fibThree;
        }
    }
    return fibThree;
}


