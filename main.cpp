//
// Created by pinchiguillo on 26/11/2024.
//

#include <iostream>

#include "Simulation.h"

int main() {

    int time = Simulate();

    std::cout << "Simulation completed in " << time << " time units." << std::endl;

    return 0;
}