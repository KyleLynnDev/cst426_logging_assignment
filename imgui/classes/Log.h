//Log.h

#pragma once
#include <string>


class Log {

    public:

        enum logLevel{
            INFO = 0,
            WARNING = 1,
            ERROR = 2
        };

        static std::string fileName;

        static logLevel currentLevel; 

        static void setLevel(logLevel);

        //set default console level?
        static void initialize(logLevel currentLevel = INFO); //, const std::string& file = "debug_log.txt");
             
        //main driver of system      
        static void log(logLevel lvl, const std::string& message); 

        //just to demonstrate we can write to file 
        void writeToFile(const std::string& message);

        private:
            static bool passesFilter(logLevel messageLevel);


};