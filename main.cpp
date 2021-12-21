#include "main.h"
#include <iostream>
#include <ncurses.h>

using std::string, std::cout, std::cin, std::endl;

int main(){
    initscr();
    noecho();
    curs_set(false);
    cout << "test\n";

    return 0;
}
