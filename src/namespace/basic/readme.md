```cpp
#include <iostream>

namespace foo 
{

  int five = 5;

  float sixpointseven = 6.7f;

  namespace bar 
  {

    int five = 5;

    float sixpointseven = 6.7f;

  }

  void show() 
  {

    std::cout << "This is a function";

  }
}

namespace 
{

  int yes = 70;

}

int main() 
{

  std::cout << ::yes << std::endl;

  std::cout << foo::five << std::endl;

  std::cout << foo::bar::five << std::endl;
  
  std::cout << foo::sixpointseven << std::endl;
  
  std::cout << foo::bar::sixpointseven << std::endl;

  namespace foobar = foo::bar;
  
  std::cout << foobar::five << std::endl;
  
  std::cout << foobar::sixpointseven << std::endl;
  
  foo::show();

}
```