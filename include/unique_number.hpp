#pragma once

#include <vector>

namespace Tools {
class UniqueNumber {
public:
  UniqueNumber();
  UniqueNumber(UniqueNumber &&) = default;
  UniqueNumber(const UniqueNumber &) = default;
  UniqueNumber &operator=(UniqueNumber &&) = default;
  UniqueNumber &operator=(const UniqueNumber &) = default;
  ~UniqueNumber();

  auto makeNumbers(const int& n) -> std::vector<int>;

private:
  auto generateNumber() -> int;
  
};
} // namespace Tools

