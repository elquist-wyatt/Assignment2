//
//  main.cpp
//  assignment2
//
//  Created by Wyatt Elquist on 2/21/22.
//

#include "StatsCalculator.hpp"
#include "FileGenerator.hpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main() {
    
    FileGenerator afile;
    
    afile.generateRandomNumberFile("output.txt", 1000);
    
    StatsCalculator calc;
    
    calc.createArray("output.txt");
    
    calc.printStatistics();
    
    return 0;
}
