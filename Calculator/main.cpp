//
//  main.cpp
//  Calculator
//
//  Created by Yaroslav Berezin on 20.02.2022.
//

#include <iostream>

using namespace std;


double calculateNumbers(double number1, double number2, char operation) {
    switch (operation) {
        case '+':
            return number1 + number2;
        case '-':
            return number1 - number2;
        case '*':
            return number1 * number2;
        case '/':
            return number1 / number2;
        default:
            return 0;
    }
}

double readDouble(int serial) {
    cout << "Input the " << serial << " number (double): ";
    double number;
    cin >> number;
    return number;
}

char readChar() {
    cout << "Input a character (+, -, *, /): ";
    char operation;
    cin >> operation;
    return operation;
}


int main() {
    double number1 = readDouble(1);
    double number2 = readDouble(2);
    char operation = readChar();
    
    cout << "Answer: " << calculateNumbers(number1, number2, operation) << endl;
    
    return 0;
}
