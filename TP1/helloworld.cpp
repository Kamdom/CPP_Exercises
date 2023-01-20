#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string string;
    std::cout << "What is your name?" << std::endl;


    std::cin >> string; 

    std::cout << "Hello! " << string << " !" << std::endl;
    return 0;
}