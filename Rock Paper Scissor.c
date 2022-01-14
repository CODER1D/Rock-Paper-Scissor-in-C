#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include<Windows.h>

int cpuscore = 0, userscore = 0;


int gameupto()
{
	int uptotimes = 0;
	printf("Game up to (points): \n");
	scanf("%d", &uptotimes);
	system("cls");
	printf("1: Rock\n2: Paper\n3: Scissor\n\n");
	printf("Game points up to: %d\n", uptotimes);
	while (1) {
		int lower = 1, upper = 4;
		int rock = 1, paper = 2, scissor = 3;
		int input_user;
		srand(time(NULL));
		int num = (rand() % (upper - lower)) + lower;
		char choice[10];
		switch (num)
		{
		case 1:  strcpy(choice, "rock");
			break;
		case 2: strcpy(choice, "paper");
			break;
		case 3:  strcpy(choice, "scissor");
			break;
		default: printf("Invalid choice");
			break;
		}

		printf("Enter your choice :");
		scanf("%d", &input_user);
		if (input_user == num) {
			printf("Both players chose: %s It's a Tie\n", choice);
			printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			if (cpuscore == uptotimes) {
				system("cls");
				printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				return 0;
			}
			else if (userscore == uptotimes)
			{
				system("cls");
				printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				return 0;
			}
		}

		else if (input_user == 1)
		{
			if (num == 2) {
				printf("You lost! CPU chose: %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}
			else if (num == 3) {
				printf("You won! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}

		}
		else if (input_user == 2)
		{
			if (num == 1) {
				printf("You win! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}
			else if (num == 3) {
				printf("You lost! CPU chose %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}

		}
		else if (input_user == 3)
		{
			if (num == 1) {
				printf("You lost! CPU chose: %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}
			else if (num == 2) {
				printf("You win! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
				if (cpuscore == uptotimes) {
					system("cls");
					printf("\n\nYou lost, sorry \n\n CPU won \n\n here are the scores\n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
				else if (userscore == uptotimes)
				{
					system("cls");
					printf("\n\nYou won!!!, Congratulation!!!\n\n here are the scores: \n");
					printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
					return 0;
				}
			}

		}

	}
}


int gamenolimit()
{
	printf("1: Rock\n2: Paper\n3: Scissor\n\n");
	while (1) {
		int lower = 1, upper = 4;
		int rock = 1, paper = 2, scissor = 3;
		int input_user;
		srand(time(NULL));
		int num = (rand() % (upper - lower)) + lower;
		char choice[10];
		switch (num)
		{
		case 1:  strcpy(choice, "rock");
			break;
		case 2: strcpy(choice, "paper");
			break;
		case 3:  strcpy(choice, "scissor");
			break;
		default: printf("Invalid choice");
			break;
		}
		
		printf("Enter your choice :");
		scanf("%d", &input_user);
		if (input_user == num) {
			printf("Both players chose: %s It's a Tie\n", choice);
			printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
		}

		else if (input_user == 1)
		{
			if (num == 2) {
				printf("You lost! CPU chose: %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
			else if (num == 3) {
				printf("You won! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
		}
		else if (input_user == 2)
		{
			if (num == 1) {
				printf("You win! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
			else if (num == 3) {
				printf("You lost! CPU chose %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
		}
		else if (input_user == 3)
		{
			if (num == 1) {
				printf("You lost! CPU chose: %s\n", choice);
				cpuscore += 1;
				printf("CPU won 1 point\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
			else if (num == 2) {
				printf("You win! CPU chose: %s\n", choice);
				userscore += 1;
				printf("You won 1 point\n\n");
				printf("\nScores:\n You:%d\n CPU:%d\n\n ", userscore, cpuscore);
			}
		}
	}
}
int main()
{
	int gametype =0;
	printf("Enter Game Mode:\n 1: Forever\n 2: up-to \n");
	scanf("%d", &gametype);
	system("cls");
	if (gametype == 1)
		gamenolimit();
	else if (gametype == 2)
		gameupto();
	printf("I hope you had fun!");
	printf("Bye!");
	Sleep(10000);
	return 0;
}

