// Learning C++
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño

#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "what is your name: ";
  std::cin >> name;
  std::cout << "Hello, " << name << std::endl;

  std::cout << std::endl << std::endl;
  return (0);
}
