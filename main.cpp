#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int seed = atoi(argv[2]);
	srand(seed);
	int n = atoi(argv[1]);
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square = new char*[n];

	for (int i = 0; i < n; i++)
	{
		square[i] = new char[n];
	}

	for(int i = 0, j = 0; i < n; j == n - 1 ? (i++, j = 0):j++)
	{
		square[i][j] = 'a' + rand()%('z' - 'a');
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i = 0, j = 0; i < n; j == n - 1 ? (i++, j = 0):j++)
	{
		printf("%c%c", square[i][j], j == n - 1 ? '\n':' ');
	}
}