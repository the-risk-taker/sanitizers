#include <iostream>

void setValue(bool &b, const int value) {
  if (value > 1) { b = true; }
}

int main(const int argc, const char *[]) {
  bool b;
  setValue(b, argc);
  if (b) { std::cout << "Value set\n"; }
}
