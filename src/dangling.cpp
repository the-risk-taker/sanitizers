#include <functional>

int main() {
  std::function<const int &()> function([]() { return 42; });

  return function();
}
