#include "header_snake.h"

extern char** field;
extern int snake_y, snake_x;
extern int flag, direction;
extern char snake, body;
extern int score;

int position_snake[snake_body][position] = { 0 };

void start_position_snake() {

	int i;
	snake_y = size / 2;  snake_x = size / 2;
	position_snake[0][0] = snake_y;
	position_snake[0][1] = snake_x;
	field[ position_snake[0][0] ][position_snake[0][1] ] = snake;

	for (i = 0; i < score; ++i) { 

		position_snake[i + 1][0] = snake_y;
		position_snake[i + 1][1] = snake_x - (i + 1);

		field[ position_snake[i + 1][0] ][ position_snake[i + 1][1] ] = body;
	}
}

void move_snake(void) {
	
	 if (kbhit() == 1) {

			switch (getch()) {

				case 'w':
					flag = 1;
					break;

				case 's':
					flag = 2;
					break;

				case 'a':
					flag = 3;
					break;

				case 'd':
					flag = 4;
					break;

				case 'x':
					flag = 5;
					break;

				default:
					break;
			}
	}
}
