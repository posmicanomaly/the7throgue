
#include <ncurses.h>
#include "rogue.h"

struct crap {
	char map[HEIGHT][WIDTH];
};

int main(int argc, char *argv[]) {
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	for(int y = 0; y < HEIGHT; y++) {
                for(int x = 0; x < WIDTH; x++) {
                        mvprintw(y + yOffset, x + xOffset, ".");
                }
        }
	mvprintw(0, 0, "The 7th Rogue!");
	mvprintw(24,0, "--STATE--");
	mvprintw(12, 40, "@");

	mvchgat(12, 40, 1, A_BLINK, 1, NULL);	

	refresh();
	getch();
	endwin();
	return 0;
}
