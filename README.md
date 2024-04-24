/**
 * Runs system commands to update and upgrade the system packages and snap packages.
 *
 * This function first runs `apt update` to update the package lists, then runs `apt upgrade -y` to upgrade the installed packages. Finally, it runs `snap refresh` to update the installed snap packages.
 *
 * If any of the commands fail, the function will print an error message to `std::cerr` and return 1 to indicate failure. Otherwise, it will return 0 to indicate success.
 */





##Compile this 

g++ upgrade.cpp -o upgrade 

run it in a terminal whit

sudo ./upgrade

move the file upgrade to bin if you need it in your system.

