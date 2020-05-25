#include <fstream>
#include <iostream>
int main() {
  std::ifstream in;
  int a, count = 0;
  in.open("input.txt");
  in >> a;
  while(in) {
    count++;
    in >> a;
  }
  in.close();
  std::cout << count << "\n";
  return 0;
}