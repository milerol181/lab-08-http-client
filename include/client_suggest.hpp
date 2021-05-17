// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_CLIENT_SUGGEST_HPP_
#define INCLUDE_CLIENT_SUGGEST_HPP_
#include "nlohmann/json.hpp"
#include <iostream>
#include <thread>
#include <fstream>
#include <shared_mutex>
#include <sstream>
#include <ostream>
#include <iomanip>
#include <memory>
#include <string>

class client_suggest {
 public:
  std::string request();
  void parse_suggest(const std::string& response_json,
                     std::ostream& out);
};
#endif // INCLUDE_CLIENT_SUGGEST_HPP_
