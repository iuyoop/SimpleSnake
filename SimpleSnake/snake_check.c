#include "header_snake.h"

extern char** field;
extern int snake_y, snake_x;
extern int flag;
extern char lose;
extern int score;

extern int position_snake[snake_body][position];

int out_fieled(void) {

	int i;

	if (flag == 5) { return -1; }

	for (i = 2; i <= score; ++i ) {
		if (position_snake[0][0] == position_snake[i][0] &&
			position_snake[0][1] == position_snake[i][1]) { 

			field[position_snake[0][0]][position_snake[0][1]] = lose;
			return -1;
		}
	}

	if (snake_y == 0 || snake_y == (size - 1) || snake_x == 0 || snake_x == (size - 1)) {

		field[snake_y][snake_x] = lose;
		return -1;
	}
	else { return 0; }

}