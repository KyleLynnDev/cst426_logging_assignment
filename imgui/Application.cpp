#include <string>
#include <iostream>
#include <fstream>

#include "Application.h"
#include "imgui/imgui.h"
#include "classes/Log.h"


//Include these for file writing. Based on tutorial from https://www.w3schools.com/cpp/cpp_files.asp 

using namespace std;

namespace ClassGame {
        //
        // our global variables
        //

        //
        // game starting point
        // this is called by the main render loop in main.cpp
        //
        void GameStartUp() 
        {
                std::cout << "This is the entry point to the game.";

                // Create and open a text file
                //ofstream debugFile("debug_log.txt");

                // Write to the file
                //debugFile << ">Writing to the file...";

                // Close the file
                //debugFile.close();
                Log logFile;
                logFile.writeToFile("\nLogging message to file");

                Log::initialize(Log::WARNING);

                Log::log(Log::INFO, "this is a message from the Gnome");

                std::cout << Log::currentLevel;

                Log::setLevel(Log::WARNING);

                std::cout << Log::currentLevel;

                Log::log(Log::WARNING, "The Gnome is biting and he won't stop ughhhhh");

                Log::log(Log::ERROR, "The Gnome is going to kill you");

                //Log::initialize(Log::WARNING);

                //Log::log(Log::INFO, "hello this is an error");

                //logFile.writeToFile("\n "); //write new message here 

                std::cout << "\nwriting to file"; 
        }

        //
        // game render loop
        // this is called by the main render loop in main.cpp
        //
        void RenderGame() 
        {
            ImGui::DockSpaceOverViewport();
//            ImGui::ShowDemoWindow();

                static float f = 0.0f;
                static int counter = 0;
                bool show_demo_window = true;
                bool show_another_window = false;
                ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

                ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

                ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
                ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
                ImGui::Checkbox("Another Window", &show_another_window);

                ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
                ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

                if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                        counter++;
                ImGui::SameLine();
                ImGui::Text("counter = %d", counter);



                ImGui::End();
        }

        //
        // end turn is called by the game code at the end of each turn
        // this is where we check for a winner
        //
        void EndOfTurn() 
        {
        }
}
