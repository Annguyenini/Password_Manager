#ifndef SETUP_H
#define SETUP_H
#include <string>

bool setup();  // Function to set up the password manager
std::string get_input();  // Function to get user input
bool is_file_empty(std::ifstream& file);  // Function to check if a file is empty
#endif