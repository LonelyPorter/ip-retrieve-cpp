#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <vector>

namespace {
const std::string IP_PATTERN = "\\d+\\.\\d+\\.\\d+\\.\\d+";
}

int main(int argc, char *argv[]) {
  std::regex pattern(IP_PATTERN);

  if (argc < 2) {
    std::cout << "Please pass in a file path to the executable!" << std::endl;
    exit(1);
  }

  std::string path(argv[1]);
  std::cout << "Reading file: " << path << std::endl;

  std::ifstream file(path);
  std::stringstream buffer;
  buffer << file.rdbuf();
  std::string target(buffer.str());
  std::smatch match;

  std::vector<std::string> ips;

  while (std::regex_search(target, match, pattern)) {
    for (auto s : match) {
      ips.push_back(s);
    }
    target = match.suffix().str();
  }

  for (auto ip : ips) {
    std::cout << ip << std::endl;
  }

  return 0;
}