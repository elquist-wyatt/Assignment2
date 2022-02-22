//
//  FileGenerator.cpp
//  assignment2
//
//  Created by Wyatt Elquist on 2/21/22.
//

#include "FileGenerator.hpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void FileGenerator::generateRandomNumberFile (string filename, int length) {
     uint32_t random_number = 0;
     ofstream file (filename);
     if (file.is_open()){
         for (int i = 1; i <= length; i++){
             random_number = arc4random();
             file << random_number << "\n";
         }
     }else {
         cout << "unable to open file\n";
     }
     
   
     file.close();
 }
