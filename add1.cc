//
// Created by feng_c on 2021/3/2.
//
#include <ncurses.h>

int main() {
    char ch;
    initscr();
    addstr("Type a few lines of text\n");
    addstr("Press ~ to quit\n");
    refresh();

    while ((ch = getch()) != '~') {
    }
    endwin();
    return 0;
}

