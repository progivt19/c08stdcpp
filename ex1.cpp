#include <fstream>
using namespace std;
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int n;
  in >> n;
  in.close();
  out << "Hi " << n << " times!\n";
  out.close();
  return 0;
}