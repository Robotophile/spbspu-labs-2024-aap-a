#include <iostream>
#include "shrSym_uniTwo.hpp"

int main()
{
  const char str2[] = "def ";
  char * str1 = nullptr;
  char* res = nullptr;
  constexpr size_t new_size = 255;
  try
  {
    res = new char[new_size];
  }
  catch (const std::bad_alloc& e)
  {
    delete[] str1;
    std::cerr << "Out of memory\n";
    return 1;
  }
  try
  {
    str = sharifullina::inputString(std::cin, '\n');
  }
  catch (const std::bad_alloc & e)
  {
    std::cerr << "Out of memory\n";
    return 1;
  }
  if (str[0] == '\0')
  {
    delete[] str;
    std::cerr << "Empty input\n";
    return 1;
  }

  std::cout << sharifullina::shrSym(str1, str2, res) << '\n';
  std::cout << sharifullina::uniTwo(str1, str2, res) << '\n';

  delete[] str1;
  delete[] res;
  return 0;
}
