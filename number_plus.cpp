// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program calculates numbers plus

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates numbers plus

    int first_number;
    int second_number;
    int answer;

    // input
    std::cout << "Enter the first_number: ";
    std::cin >> first_number;
    std::cout << "Enter the second_number: ";
    std::cin >> second_number;

    // process
    answer = first_number + second_number;

    // output
    std::cout << "" << std::endl;
    std::cout << "The answer is: "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << first_number << " + "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << second_number << " = "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << answer << std::endl;
}
