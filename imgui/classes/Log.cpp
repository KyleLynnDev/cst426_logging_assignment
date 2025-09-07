#include "Application.h"
#include <fstream>
#include <string>


class Log{

    public: 
        enum warningLevel{
            WARNING,
            ERROR,
            INFO
        };

        void writeToFile(const std::string& message){

            std::ofstream debugFile("debug_log.txt", std::ios::app); //https://www.dummies.com/article/technology/programming-web-design/cplusplus/flagging-the-ios-flags-in-c-147699/#:~:text=ios%3A%3Aapp%3A%20This%20flag,file%20before%20writing%20to%20it. 
             // Write to the file

            debugFile << message << '\n' ;

             // Close the file
             //debugFile.close();
             
        }; 
        

};