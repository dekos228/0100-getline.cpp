// getline.cpp
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  using namespace std; // Искать имена в std.

  string user_name = "user"; // Определить переменную.
  cout << "Login: ";
  getline(cin, user_name); // Считать строку из потока ввода.
  cout << "Hello, " << user_name << "!" << endl;
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}
