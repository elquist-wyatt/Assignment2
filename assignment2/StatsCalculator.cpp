//
//  StatsCalculator.cpp
//  assignment2
//
//  Created by Wyatt Elquist on 2/21/22.
//
#include "StatsCalculator.hpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void StatsCalculator:: printStatistics (){
    // find min value
    int imin = 0;
    uint32_t min = numbers[0];
    
    for(int i = 0; i < 1000; i++){
        if (numbers[i] < min){
            min = numbers[i];
            imin = i;
        }else {}
    }
    
    // find max value
    int imax = 0;
    uint32_t max = numbers[0];
    for(int i = 0; i < 1000; i++){
        if (numbers[i] > max){
            max = numbers[i];
            imax = i;
        }else {}
    }
    cout << "Statistics for output.txt\n";
    cout << "Statistic    Value      Index\n";
    cout << "=============================\n";
    cout << "Minimum      " << min << "      " << imin << "\n";
    cout << "Maximum      " << max << "   " << imax << "\n";
    
}


void StatsCalculator::createArray(string f){
    int k = 0;
ifstream file (f);
if (file.is_open()){
    while (file >> n){
        numbers.push_back(1);
        numbers[k] = n;
        k++;
        }
    }
else {cout << "unable to access file\n";}
file.close();
}
