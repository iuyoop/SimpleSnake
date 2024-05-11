#include "header_snake.h"

extern int flag, direction;
extern char** field;
extern int snake_y, snake_x;
extern char grass, snake, body;
extern int score;

extern int position_snake[snake_body][position];

int error_fix = 0;
int flag_for_in = 0;
int counter_turn = 0;

void logic_snake(void) {

    switch (flag) {

    case 1:

        if (direction == 2) { break; }
        else {

            move(1);

            direction = 1;
            ++error_fix;
            break;
        }

    case 2:

        if (direction == 1) { break; }
        else {

            move(2);

            direction = 2;
            ++error_fix;
            break;
        }

    case 3:

        if (direction == 4) { break; }
        else {

            move(3);

            direction = 3;
            ++error_fix;
            break;
        }

    case 4:

        if (direction == 3) { break; }
        else {

            move(4);

            direction = 4;
            ++error_fix;
            break;
        }

    default:
        break;
    }

}

void logic_deirection(void) {

    int i;
    switch (direction) {

        case 1:

            move(1);
            ++error_fix;
            break;

        case 2:

            move(2);
            ++error_fix;
            break;

        case 3:

            move(3);
            ++error_fix;
            break;

        case 4:

            move(4);
            ++error_fix;
            break;

        default:
            break;
    }
}

void move(int difference) {

    int i;
    field[position_snake[0][0]][position_snake[0][1]] = body;

    switch (difference)
    {
    case 1:
        position_snake[0][0] = --snake_y;
        position_snake[0][1] = snake_x;
        break;

    case 2:
        position_snake[0][0] = ++snake_y;
        position_snake[0][1] = snake_x;
        break;

    case 3:
        position_snake[0][0] = snake_y;
        position_snake[0][1] = --snake_x;
        break;

    case 4:
        position_snake[0][0] = snake_y;
        position_snake[0][1] = ++snake_x;
        break;

    default:
        break;
    }

    field[position_snake[0][0]][position_snake[0][1]] = snake;

    field[position_snake[score][0]][position_snake[score][1]] = grass;

    for (i = score; i > 0; --i) {

        position_snake[i][0] = position_snake[i - 1][0];
        position_snake[i][1] = position_snake[i - 1][1];
    }

    for (i = score; i > 0; --i) {

        field[position_snake[i][0]][position_snake[i][1]];
    }
}