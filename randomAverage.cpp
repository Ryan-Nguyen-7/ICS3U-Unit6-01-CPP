// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program generates 10 random numbers and calculates their average


#include <iostream>
#include <random>

int main() {
    // This program generates 10 random numbers and calculates their average

    int loopCounter = 0;
    int myNumbers[10];
    int randomNumber;
    float total;
    float average;

    for (loopCounter = 0; loopCounter < 10; loopCounter++) {
        // generate + print random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        randomNumber = idist(rgen);

        std::cout << "Random number: " << randomNumber << std::endl;

        // stores random number in array
        myNumbers[loopCounter] = randomNumber;
    }

    for (loopCounter = 0; loopCounter < 10; loopCounter++) {
        total = total + myNumbers[loopCounter];
    }
    average = total / 10;

    std::cout << "Average: " << average << std::endl;
}
