//Log.cpp

#include "Log.h"
#include <iostream>
#include <fstream>


std::string Log::fileName = "debug_log.txt";
Log::logLevel Log::currentLevel = Log::INFO;



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



void Log::setLevel(logLevel Level){
   currentLevel = Level;
};



void Log::initialize(logLevel level, const std::string& file){
    
    //Could set more custom initial conditions here 
    std::cout << "Logging Initialized" << std::endl;
}



void Log::log(logLevel lvl, const std::string& message){

    fileName = "debug_log.txt"; //make sure we're working with the correct file
    //currentLevel = level;
    std::ofstream output(fileName, std::ios::app); //append mode for the output

    if (std::ofstream output{fileName, std::ios::app}; output) {
        const char* whichLevel = "INFO";
        // switch on the message level 
        switch (lvl) {             
            case INFO:    whichLevel = "INFO";    break;   
            case WARNING: whichLevel = "WARNING"; break;
            case ERROR:   whichLevel = "ERROR";   break;
        }
        output << "[" << whichLevel << "] " << message << '\n';
    }
    
    if (passesFilter(lvl)) {
        std::cout << message << std::endl;
    }

};




bool Log::passesFilter(logLevel messageLevel){
    switch(currentLevel){
        case INFO: return messageLevel == INFO;
        case ERROR: return messageLevel == INFO || messageLevel == ERROR;
        case WARNING: return true;
        default: return false;
    }
};

