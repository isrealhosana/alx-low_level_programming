#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int money, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	coins = 0;
	if (money > 25)
	{
		while (money >= 25)
			money -= 25, coins++;
	}
	if (money > 10 && money < 25)
	{
		while (money >= 10)
			money -= 10, coins++;
	}
	if (money > 5 && money < 10)
	{
		while (money >= 5)
			money -= 5, coins++;
	}
	if (money > 2 && money < 5)
	{
		while (money >= 2)
			money -= 2, coins++;
	}
	if (money == 1 || money == 2 || money == 5 || money == 10 || money == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
