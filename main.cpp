#include "main.h"
#include <iostream>
#include <ncurses.h>

using namespace std;

int main(){
    initscr();
    noecho();
    curs_set(false);
    cout << "test\n";

    return 0;
}