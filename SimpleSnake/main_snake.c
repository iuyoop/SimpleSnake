#include "header_snake.h"

char** field;
int snake_y, snake_x, direction = 4;
int flag, flag_fruit;
char grass = ' ', snake = '#', fruit = '@', body = 'o', lose = 'X', wall = '0';
int gameover, score = 4;

void game_snake() {

	system("color 02");

	create_field(/* void */);
	create_wall(/* void */);
	start_position_snake(/* void */);
	print_field(/* void */);

	while (1) {
	
		printf("\t\t\t\t\t\t | S C O R E : %d |", score - 4);

		logic_deirection(/* void */);
		Sleep(400);

		fruit_snake(/* void */);

		print_field(/* void */);
		printf("\t\t\t\t\t\t | S C O R E : %d |", score - 4);
		move_snake(/* void */);
		logic_snake(/* void */);

		print_field(/* void */);
		gameover = out_fieled(/* void */);
		if (gameover == -1) { print_field(/* void */); break; }
		print_field(/* void */);
	}
	printf("\n\t\t\t\t\t      | G A M E   O V E R |\n\n");
}