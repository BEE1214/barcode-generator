#include "../include/unique_number.hpp"

#include <chrono>
#include <thread>


namespace Tools
{
namespace {
std::chrono::milliseconds wait_time(10);
}

UniqueNumber::UniqueNumber() {
}

UniqueNumber::~UniqueNumber() {
}

auto UniqueNumber::makeNumbers(const int& n) -> std::vector<int>
{
  std::vector<int> numbers;

  for (size_t i = 0; i <= n; i++)
  {
    numbers.push_back(generateNumber());
  }

  return numbers;
  // return std::vector<int>();
}

auto UniqueNumber::generateNumber() -> int
{
  auto date = std::chrono::system_clock::now();
  std::this_thread::sleep_for(wait_time);

  return std::chrono::duration_cast<std::chrono::milliseconds>(date.time_since_epoch()).count();

}
} // namespace Tools
