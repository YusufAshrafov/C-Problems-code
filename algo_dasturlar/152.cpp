// Misol 152
#include <iostream>
#include <string>
int main ()
{
    std::string str;
  std::getline(std::cin,str);
  for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    std::cout << *rit;
  return 0;}
