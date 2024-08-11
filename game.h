#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define Mine 10

#define ROWS ROW+2
#define COLS COL+2

void menu();

void init(char board[ROWS][COLS], int rows, int cols,char ch);

void setmine(char board[ROWS][COLS], int row, int col);

void display(char board[ROWS][COLS], int row, int col);

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

int count(char board[ROWS][COLS], int x, int y);