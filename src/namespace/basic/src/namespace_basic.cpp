#include <iostream>

namespace foo 
{
  int five = 5;
  float sixpointseven = 6.7f;

  void show() {
    std::cout << "This is a function";
  }
}

int main() {

  std::cout << foo::five << std::endl;
  
  std::cout << foo::sixpointseven << std::endl;
  
  foo::show();

}