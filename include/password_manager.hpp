#ifndef PASSWORDMANAGER_H
#define PASSWORDMANAGER_H
#include <string>
#include <vector>
using namespace std;
void create_master_password(const string& password);
void master_password_checker(const string& password);
void add_password();
void retrievePassword();
void deleteAPassword();
void updateAPassword();
void vaultCheck();
#endif