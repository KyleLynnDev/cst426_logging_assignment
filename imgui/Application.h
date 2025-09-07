#pragma once
#include <string>


namespace ClassGame {
    void GameStartUp();
    void RenderGame();
    void EndOfTurn();
}

class Log {

    public:
        void writeToFile(const std::string& message);
};