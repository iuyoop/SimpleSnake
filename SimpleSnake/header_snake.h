#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#pragma warning(disable : 4996)

#define size 20
#define snake_body 40
#define position 2

void create_field(void); /* */ void print_field(void); /* */ void create_wall(void); /* */

void start_position_snake(void); /* */ void move_snake(void); /* */ void logic_snake(void); /* */ void logic_deirection(void); /* */ //void body_snake(void); /* */

int out_fieled(void); /* */ void move(int difference);

void fruit_snake(void); /* */

void game_snake(void); /* */
