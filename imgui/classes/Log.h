//Log.h

#pragma once
#include <string>


class Log {

    public:
        enum logLevel{
            INFO,
            WARNING,
            ERROR
        };

        void writeToFile(const std::string& message);
};