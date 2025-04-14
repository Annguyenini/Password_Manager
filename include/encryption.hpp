#pragma once
#include <string>
#include <vector>

std::string sha256(const std::string& str);  // Function to hash with SHA-256
std::string salted_hash(const std::string& str, const std::string& salt);  // Function for salted hashing
std::string generate_salt();  // Function to generate a random salt
void save_salt(const std::string& salt, const std::string& path);  // Function to save the salt to a file
std::string load_salt(const std::string& path);
std::string aes_encrypt(const std::string& plaintext, const std::string& key);
std::string aes_decrypt(const std::string& ciphertext, const std::string& key);

