#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"

void print_hello_world()
{
    std::cout << "Project 8 checkout git renamed!\n";

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";
}
