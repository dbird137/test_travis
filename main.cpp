#include <iostream>

int main(int argc, char * argv[])
{
    std::cout << "cout: hello travis...\n" << std::endl;
    std::clog << "cout: hello travis...\n" << std::endl;
    std::cerr << "cout: hello travis...\n" << std::endl;
    
    return 0;
}