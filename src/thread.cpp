#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

static int value = 0;
static std::mutex mutex;

int main() {
  std::vector<std::thread> threads;

  for (int i = 0; i < 1000; i++) {
    threads.push_back(std::thread([]() {
      // Uncomment to fix code:
      // std::lock_guard<std::mutex> lock(mutex);
      value++;
    }));
  }

  for (auto &thread : threads) {
    thread.join();
  }

  std::cout << "Value: " << value << '\n';
}
