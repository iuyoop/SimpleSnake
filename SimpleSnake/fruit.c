#include "header_snake.h"

extern char** field;
extern int flag_fruit;
extern int snake_y, snake_x;
extern int score;
extern int direction;
extern char fruit, body;

int fruit_x, fruit_y;

void fruit_snake(void) {
	 
	if (flag_fruit == 0) { 

		fruit_x = rand() % (size - 3);
		fruit_y = rand() % (size - 3);

		field[fruit_x + 1][fruit_y + 1] = fruit;
		flag_fruit = 1;
	}
	if (snake_y == (fruit_x + 1) && snake_x == (fruit_y + 1)) { score++; flag_fruit = 0; }
}