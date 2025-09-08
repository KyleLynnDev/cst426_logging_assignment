//Log.cpp

#include "Log.h"
#include <iostream>
#include <fstream>

void Log::writeToFile(const std::string& message){

    std::ofstream debugFile("debug_log.txt", std::ios::app); //https://www.dummies.com/article/technology/programming-web-design/cplusplus/flagging-the-ios-flags-in-c-147699/#:~:text=ios%3A%3Aapp%3A%20This%20flag,file%20before%20writing%20to%20it. 
        // Write to the file

    if (!debugFile){
        std::cerr << "Failed to open the debug log file!" << std::endl;
        return;
    }

    debugFile << message << std::endl;

    // Close the file
    debugFile.close();
    std::cout << "writeToFile() called";
        
}; 

