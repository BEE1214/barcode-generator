#include "unique_number.hpp"
#include <chrono>
#include <thread>


namespace Tools
{
namespace {
std::chrono::milliseconds wait_time(10);
}

GenerateNumber::GenerateNumber() {
}

GenerateNumber::~GenerateNumber() {
}

auto GenerateNumber::generateNumbers(const int& n) -> std::vector<int>
{
  std::vector<int> numbers;

  for (size_t i = 0; i <= n; i++)
  {
    number.push_back(generateNumber());
  }

  return std::vector<int>();
}

auto generateNumber() -> int
{
  auto date = std::system_clock::now();
  std::thread::this_thread(wait_time);
  
  return std::chrono::duration_cast<std::chrono::milliseconds>(date.time_since_epoch()).count();

}
} // namespace Tools
