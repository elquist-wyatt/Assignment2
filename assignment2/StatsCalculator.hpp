//
//  StatsCalculator.hpp
//  assignment2
//
//  Created by Wyatt Elquist on 2/21/22.
//

#ifndef StatsCalculator_hpp
#define StatsCalculator_hpp

#include <iostream>
#include <vector>

using namespace std;

class StatsCalculator{
public:
    vector <uint32_t> numbers;
    uint32_t n;
    void createArray(string f);
    void printStatistics ();
private:
    
};
#endif /* StatsCalculator_hpp */
