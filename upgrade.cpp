#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {

  // Run apt update
  int result = system("apt update");
  if (result != 0) {
    std::cerr << "Error running apt update" << std::endl;
    return 1;
  }

  // Run apt upgrade -y
  result = system("apt upgrade -y");
  if (result != 0) {
    std::cerr << "Error running apt upgrade" << std::endl;
    return 1; 
  }
  // Run snap refresh
  result = system("snap refresh");
  if (result != 0) {
    std::cerr << "Error running snap refresh" << std::endl;
    return 1; 
  }
  return 0;
}
