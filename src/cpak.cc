#include "include/includes.hpp"

int main(int argc, char* argv[]){
    if(argc < 2){
        std::cout << "USAGE: cpak <package>";
        return 1;
    }
    else{
        std::string pak = argv[1];
        std::string package = "https://github.com/cpakmanager/" + pak;
        std::string command = "git clone " + package + " C:\\Program Files\\LLVM\\lib\\clang\\12.0.0\\include" + pak + "\\"; // for later stuff with it, clang install dir: C:\Program Files\LLVM\lib\clang\12.0.0\include, and C:\Program Files (x86)\mingw64\lib\gcc\x86_64-w64-mingw32\13.1.0\include for gcc
        std::system(command.c_str());
        return 0;
    }
}