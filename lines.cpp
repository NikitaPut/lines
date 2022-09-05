#include <iostream>

int main()
{
    std::string line = "Hello World";
    std::cout << line << "\n" << line.length() << "\n" << line[0] << "\n" << line[line.size()-1] << "\n";

    return 0;
}
