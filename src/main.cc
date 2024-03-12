#include "include/includes.hpp"

int main(int argv, char* argc[]){
    std::string pak = argc[1];
    std::string package = APIKEY + pak;
    std::string command = "git clone " + package + " C:\\cpak\\libs\\pkgs\\";
    std::system(command.c_str());
    return 0;
}