// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 15, 2026
// This program checks if the user guessed the right answer
#include <iostream>
#include <random>

int main() {
    // generate a random number between 0 and 9
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]

    someRandomNumber = idist(rgen);

    // get the number from the user
    int userGuess;
    std::cout << "Enter a number between 0 and 9:";
    std::cin >> userGuess;

    // check if the number is within the valid range
    if (userGuess == someRandomNumber) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong." << std::endl;
        std::cout << "The correct answer was: "
                  << someRandomNumber << std::endl;
    }
