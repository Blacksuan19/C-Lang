#include <stdio.h>
int main()
{	//initialization
	int rock, paper, scissors;
	int player1, player2;
	rock = 1;
	paper = 2;
	scissors = 3;
	// 1 is rock, 2 is paper, 3 is scissors
	printf("Choose <1>Rock, <2>paper or <3> scissors:\n");
	printf("Player 1:\n");
	scanf("%d", &player1);
	printf("player 2:\n");
	scanf("%d", &player2);
	if (player1 == 1 && player2 == 2)
	{
		printf("player 2 wins!\n");
	}
	if (player1 == 2 && player2 == 1)
	{
		printf("player 1 wins!\n");
	}
	if (player1 == 1 && player2 == 3)
	{
		printf("player 1 wins!\n");
	}
	if (player1 == 3 && player2 == 1)
	{
		printf("player 2 wins!\n");
	}
	if (player1 == 2 && player2 == 3)
	{
		printf("player 2 wins!\n");
	}
	if (player1 == 3 && player2 == 2)
	{
		printf("player 1 wins!\n");
	}
	if (player1 == 1 && player2 == 1)
	{
		printf("Its a tie!\n");
	} if (player1 == 2 && player2 == 2)
	{
		printf("Its a tie!\n");
	} if (player1 == 3 && player2 == 3)
	{
		printf("Its a tie!\n");
	}
	return 0;
}