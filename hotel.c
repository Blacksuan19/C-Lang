#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define DISCOUNT 5;
char name[50], person[10], customer[20], room_type[20], resident_action[20], extend_room[20], room_full[20], visit_count[10], rest_yn[10], rest_option[10];
char dishes[10][100], drinks[15][100];
int dishes_user[10] = {0}, drinks_user[15] = {0};
int id, passport_nm, phone_nm, password, birth, days, room_price, extend_days, extend_total, extend_single, extend_double, extend_suite, id_number, visit_times, discount;
int staff_pass = 238974, age, single_price = 100, double_price = 200, suite_price = 350;
void Staff();
void Line();
void Equal();
void Visit();
void Rest();
void Dishes();
void Drinks();
int main()
{


	printf("are you staff or a customer?\n");
	scanf("%s", &person);
	if (strcmp(person, "staff") == 0)
	{
		Staff();
	}

	else if (strcmp(person, "customer") == 0)
	{
		printf("are you a new customer or a resident?\n");
		scanf("%s", &customer);
		if (strcmp(customer, "new") == 0)
		{
			printf("                                               welcome to Islamic  Malaysian Hotel (IMH)\n\n");
			printf("                                            -----------------------------------------------\n\n\n");
			printf("is this your first time visiting our hotel? (yes or no) ");
			scanf("%s", &visit_count);
			if (strcmp(visit_count, "yes") == 0)
			{

				printf("please fill up the registration form\n\n");
				Line();
				printf("please enter your first name:\n");
				scanf("%s", &name);
				printf("please enter your birth year:\n");
				scanf("%d", &birth);
				age = 2017 - birth;
				printf("enter your passport number:\n");
				scanf("%d", &passport_nm);
				printf("enter your phone number:\n");
				scanf("%d", &phone_nm);
				printf("for how long are you staying here?\n");
				scanf("%d", &days);
				printf("what type of rooms do you want?\nwe have three types of rooms: single, double and suite\n");
				scanf("%s", &room_type);
				if (strcmp(room_type, "single") == 0)
				{
					room_price = single_price * days;

				}
				else if (strcmp(room_type, "double") == 0)
				{
					room_price = double_price * days;
				}
				else if (strcmp(room_type, "suite") == 0)
				{
					room_price = suite_price * days;

				}
				printf("your total is RM %d\n", room_price);
				printf("okay here is your key and membership card\nThank you!\n");
				printf("would you like to checkout our restaurant? (yes or no) ");
				scanf("%s", &rest_yn);
				if (strcmp(rest_yn, "yes") == 0)
				{
					Rest();
				}
				else if (strcmp(rest_yn, "no") == 0)
				{
					printf("okay have a nice stay\nThank you!!\n");
				}
			}
			else if (strcmp(visit_count, "no") == 0)
			{
				Visit();
			}
		}


	}
	else if (strcmp(customer, "resident") == 0)
	{
		printf("Hello, what would you like to do? extend your stay or check out?\n");
		scanf("%s", &resident_action);
		if (strcmp(resident_action, "extend") == 0)
		{
			printf("what type of room are you staying in?\n");
			scanf("%s", &extend_room);
			if (strcmp(extend_room, "single") == 0)
			{
				printf("am sorry all single rooms are full, please pick another type of room(double or suite):\n");
				scanf("%s", &room_full);
				printf("for how many days would you like to extend you stay?\n");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "double") == 0)
				{
					extend_total = extend_days * double_price;
				}
				else if (strcmp(room_full, "suite") == 0)
				{
					extend_total = extend_days * suite_price;
				}
				printf("your extended total is RM %d\n", extend_total);

			}
			else if (strcmp(extend_room, "double") == 0)
			{
				printf("am sorry all double rooms are full, please pick another type of room(single or suite):\n");
				scanf("%s", &room_full);
				printf("for how many days would you like to extend you stay?\n");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "single") == 0)
				{
					extend_total = extend_days * single_price;
				}
				else if (strcmp(room_full, "suite") == 0)
				{
					extend_total = extend_days * suite_price;
				}
				printf("your extended total is RM %d\n", extend_total);

			}
			else if  (strcmp(extend_room, "suite") == 0)
			{
				printf("am sorry all suite rooms are full, please pick another type of room(single or double):\n");
				scanf("%s", &room_full);
				printf("for how many days would you like to extend you stay?\n");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "single") == 0)
				{
					extend_total = extend_days * single_price;
				}
				else if (strcmp(room_full, "double") == 0)
				{
					extend_total = extend_days * double_price;
				}
				printf("your extended total is RM %d\n", extend_total);

			}
			printf("                                        Thank you!!\n");
		}
		else if (strcmp(resident_action, "checkout") == 0)
			printf("thank you for staying in our hotel!\n have a nice trip!\n");
	}




	else
	{
		printf("invalid option please restart the program and type a valid option \nthank you!!\n");
	}
	return 0;
}
void Staff()
{
	printf("enter your identification number: ");
	scanf("%d", &id_number);
	printf("enter staff password:\n");
	scanf("%d", &password);

	while (password != staff_pass)
	{
		printf("wrong password please re-enter: ");
		scanf("%d", &password);
	}
	if (password == staff_pass)
	{
		printf("welcome staff member!!\n");

	}

}
void Visit()
{
	printf("please enter your full name: ");
	scanf("%s", &name);
	printf("please enter your birth year: ");
	scanf("%d", &birth);
	age = 2017 - birth;
	printf("enter your passport number: ");
	scanf("%d", &passport_nm);
	printf("enter your phone number: ");
	scanf("%d", &phone_nm);
	printf("for how long are you staying here? ");
	scanf("%d", &days);
	printf("what type of rooms do you want to stay in?\nwe have three types of rooms: single, double and suite, ");
	scanf("%s", &room_type);
	if (strcmp(room_type, "single") == 0)
	{
		room_price = single_price * days;
		discount = (room_price / 100) * DISCOUNT;

	}
	else if (strcmp(room_type, "double") == 0)
	{
		discount = (room_price / 100) * DISCOUNT;
		room_price = double_price * days;

	}
	else if (strcmp(room_type, "suite") == 0)
	{
		discount = (room_price / 100) * DISCOUNT;
		room_price = suite_price * days;
	}
	printf("your total is RM%d\n", room_price);
	printf("okay here is your key and membership card\nThank you!");

}
void Rest()
{
	char drink_yn[5];

	printf("                                                    Welcome to IMH restaurant\n");
	printf("                                                 ----------------------------------\n");
	printf("how can i help you today?(dish or drink) ");
	scanf("%s", &rest_option);
	if (strcmp(rest_option, "drink") == 0)
	{
		Drinks();
	}
	if (strcmp(rest_option, "dish") == 0)
	{
		Dishes();
		printf("would you like a drink? (yes or no) ");
		scanf("%s", &drink_yn);
		if (strcmp(drink_yn, "yes") == 0)
		{
			Drinks();
		}
		else if (strcmp(drink_yn, "no") == 0)
		{
			printf("thank You!!\n");
		}
	}
}
void Drinks()
{
	int i = 0, x, drink_count;
	strcpy(drinks[0], "Banana");
	strcpy(drinks[1], "Apple");
	strcpy(drinks[2], "Orange");
	strcpy(drinks[3], "Mango");
	strcpy(drinks[4], "Lemon");
	strcpy(drinks[5], "Watermelon");
	strcpy(drinks[6], "Water");
	strcpy(drinks[7], "Pepsi");
	strcpy(drinks[8], "Cola");
	strcpy(drinks[9], "Mountain Dew");
	strcpy(drinks[10], "100 Plus");
	strcpy(drinks[11], "Fanta");
	strcpy(drinks[12], "Tea");
	strcpy(drinks[13], "Coffee");
	strcpy(drinks[14], "Ice Tea");
	printf("List of drinks:\n");
	do
	{
		printf("[%d] is %s\n", i, drinks[i]);
		++i;
	} while (i <= 14);
	printf("how many drinks you want? ");
	scanf("%d", &drink_count);
	printf("please enter the number(s) of the drinks from the menu\n");
	for (x = 1; x <= drink_count; ++x)
	{
		scanf("%s", &drinks_user[x]);
	}
	// sleep(4 * 1000);
	printf("Okay, here is(are) your drink(s)\nwe will charge the price to your room \nThank you!!\n");
}
void Dishes()
{
	int i = 0, x, dishes_count;
	strcpy(dishes[0], "Shawarma");
	strcpy(dishes[1], "Nasi Lemak");
	strcpy(dishes[2], "Rendang");
	strcpy(dishes[3], "Mie Goreng");
	strcpy(dishes[4], "Nasi Kandar");
	strcpy(dishes[5], "Nasi Paprik");
	strcpy(dishes[6], "Pizza");
	strcpy(dishes[7], "Lazania");
	strcpy(dishes[8], "Beef");
	strcpy(dishes[9], "Fish");
	printf("List of dishes:\n");
	do
	{
		printf("[%d] is %s\n", i, dishes[i]);
		++i;
	} while (i <= 9);
	printf("how many dishes you want? ");
	scanf("%d", &dishes_count);
	printf("please enter the number(s) of the drinks from the menu\n");
	for (x = 1; x <= dishes_count; ++x)
	{
		scanf("%s", &dishes_user[x]);
	}
	// sleep
	printf("Okay, here is(are) your dish(s).\nwe will charge the price to your room \nThank you!!\n");
}
void Line()
{
	printf("-------------------------\n");
}
void Equal()
{
	printf("=========================\n");
}

