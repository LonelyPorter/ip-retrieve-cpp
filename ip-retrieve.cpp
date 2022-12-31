#include <iostream>
#include <regex>

namespace {
const std::string IP_PATTERN = "\\d+\\.\\d+\\.\\d+\\.\\d+";
}

int main(int argc, char *argv[]) {
  std::regex pattern(IP_PATTERN);
  std::string test = "Hi this is 155.65.48.1s asdw 15.2";
  std::smatch match;

  if (std::regex_search(test, match, pattern)) {
    std::cout << "Match size is: " << match.size() << std::endl;
    for (auto s : match) {
      std::cout << s << std::endl;
    }
  } else {
    std::cout << "No match!" << std::endl;
  }

  return 0;
}