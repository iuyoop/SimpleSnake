#include "header_snake.h"

extern char** field;
extern char grass, wall;
extern error_fix;

void create_field(void){

	int i, j;
	field  = (char**)malloc(size * sizeof(char*));
	if (field == NULL) { return -1; }
	for (i = 0; i < size; i++) { field[i] = (char*)malloc(size * sizeof(char)); if (field[i] == NULL) { return -1; } }
	for (int i = 0; i < size; ++i) { for (int j = 0; j < size; ++j) { field[i][j] = grass; } }
}

void print_field(void) {

	system("cls");
	int i, j;
	printf("\n");
	field[0][0] = wall;
	if (error_fix == 4) { field[10][10] = grass; }
	for (i = 0; i < size; ++i) {

		printf("\n");
		printf("\t\t\t    ");
		for (j = 0; j < size; ++j) {

			printf("%c  ", field[i][j]);
		}
	}
	printf("\n\n");
}

void create_wall(void) {

	int i;
	for (i = 0; i < size; ++i) { field[0][i] = wall; }
	for (i = 0; i < size; ++i) { field[i][0] = wall; }
	for (i = 0; i < size; ++i) { field[size - 1][i] = wall; }
	for (i = 0; i < size; ++i) { field[i][size - 1] = wall; }
}