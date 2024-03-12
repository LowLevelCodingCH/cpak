#include "include/includes.hpp"

int main(int argc, char* argv[]){
    if(argc < 3){
        std::cout << "USAGE: cpak <package>";
        return 1;
    }
    else{
        std::string pak = argv[1];
        std::string package = APIKEY + pak;
        std::string command = "git clone " + package + " C:\\cpak\\libs\\pkgs\\";
        std::system(command.c_str());
        return 0;
    }
}