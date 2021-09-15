//================================================
//===	Created By: Luc Gaupin					==
//===	Date......: 8th Nov. 2018				==
//===	Reason....: arrayIntro Assignment		==
//================================================


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define PAUSE system("pause")
#define CLS system("cls")
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 1000


// ================ PROTOTYPE FUNCTIONS ================
void displayMenu();
int getChoice();
int getNumberFromUser();

// =================== MAIN() HERE =====================
main()
{
	int myArray[SIZE];
	int eSize = 0;		//Since no elements are filled.
	int choice;
	int currentNumber;
	int totalSum = 0;
	int totalAverage = 0;
	do
	{
		choice = getChoice();
		switch (choice)
		{
			case 1:
				currentNumber = getNumberFromUser();
				myArray[eSize] = currentNumber;
				eSize++;
				CLS;
				break;
			case 2:
				CLS;
				for (int i = 0; i < eSize; i++)
				{
					totalSum += myArray[i];
				}
				printf("The Sum Is: %i", totalSum);
				printf("\n\n");
				break;
			case 3:
				CLS;
				for (int i = 0; i < eSize; i++)
				{
					totalSum = totalSum + myArray[i];
				}
				totalAverage = totalSum / eSize;
				printf("The Average Of The Numbers Is: %i\n\n", totalAverage);
				break;
			case 4:
				CLS;
				for (int i = 0; i < eSize; i++)
				{
					printf("%i\n", myArray[i]);
				}
				printf("\n\n");
				break;
			case 5:
				break;
			default:
				break; 
		}
	} while (choice != 5);
}

// ================== FUNCTION HERE ===================
void displayMenu()
{
	printf("1. Enter A Number\n");
	printf("2. Display Sum of All Numbers\n");
	printf("3. Display Average of Numbers\n");
	printf("4. Display All Numbers Entered\n");
	printf("5. Exit\n\n");
	printf("Enter Choice: ");
}

int getChoice()
{
	int result;
	displayMenu();
	scanf_s("%i", &result);
	return result;
	PAUSE;
}

int getNumberFromUser()
{
	int userChoice;

	printf("Enter Your Number: ");
	scanf_s("%i", &userChoice);
	return userChoice;
}
