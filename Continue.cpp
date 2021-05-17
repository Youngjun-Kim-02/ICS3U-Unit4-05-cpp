// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program adds positive numbers

#include <iostream>
#include <string>

int main() {
    // this function adds positive numbers
    std::string integerAsString;
    int integerAsNumber;
    int sumOfNumbers;
    int newNumber;
    
    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> integerAsString;

    // process and output
    try {
        integerAsNumber = std::stoi(integerAsString);

        if (integerAsNumber > 0) {
            for (sumOfNumbers = 0, newNumber 
            = integerAsNumber; newNumber++;) {
                std::cout << "Enter a number to add: ";
                std::cin >> newNumber;
                if (newNumber < 0);
                    continue;
                sumOfNumbers = sumOfNumbers + newNumber;
            std::cout << "Sum of the positive numbers is = " << sumOfNumbers
            << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not valid input.";
    }
}
