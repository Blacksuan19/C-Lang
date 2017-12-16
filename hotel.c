// some parts don't have comments because they're self explanatory
#include <stdio.h> // standard library.
#include <string.h> // comparing strings.
#include <stdlib.h> // standard library.
#include <unistd.h> // standard library.
#include <time.h>  // generation of random number.
#define DISCOUNT 5; // discount value.
/*global variables definition o they can be used across all function */
char name[50], person[10], customer[20], room_type[20], resident_action[20], extend_room[20], room_full[20], visit_count[10], rest_yn[10], rest_option[10];
char dishes[10][100], drinks[15][100];
int dishes_user[10] = {0}, drinks_user[15] = {0};
int id, passport_nm, phone_nm, password, birth, days, room_price, extend_days, extend_total, extend_single, extend_double, extend_suite, id_number, visit_times, discount;
int staff_pass = 238974, age, single_price = 100, double_price = 200, suite_price = 350;
void Staff(); // function for the staff.
void Line(); // decoration
void Equal(); // decoration
void Visit(); // visit function
void Rest(); // restaurant function
void Dishes(); // restaurant dishes function
void Drinks(); // restaurant drinks function
int main()
{


	printf("Are you staff or a customer? ");
	scanf("%s", &person);
	sleep(2);
	if (strcmp(person, "staff") == 0)
	{
		Staff();// function call.
	}

	else if (strcmp(person, "customer") == 0)
	{
		printf("Are you a new customer or a resident? ");
		scanf("%s", &customer);
		sleep(1);
		if (strcmp(customer, "new") == 0)
		{
			printf("                                               Welcome to Islamic  Malaysian Hotel (IMH)\n\n");
			printf("                                            -----------------------------------------------\n\n\n");
			printf("Is this your first time visiting our hotel? (yes or no) ");
			scanf("%s", &visit_count);
			if (strcmp(visit_count, "yes") == 0)
			{
				sleep(1);
				// registration form.
				printf("Please fill up the registration form\n\n");
				Line(); // // function call.
				printf("Please enter your first name: ");
				scanf("%s", &name);
				printf("Please enter your birth year: ");
				scanf("%d", &birth);
				age = 2017 - birth; // getting the age based on the year entered
				printf("Enter your passport number: ");
				scanf("%d", &passport_nm);
				printf("Enter your phone number: ");
				scanf("%d", &phone_nm);
				printf("For how long are you staying here?  ");
				scanf("%d", &days);
				sleep(1);
				printf("What type of rooms do you want?\nwe have three types of rooms: single, double and suite");
				scanf("%s", &room_type);
				if (strcmp(room_type, "single") == 0)
				{
					room_price = single_price * days; // calculating the prices

				}
				else if (strcmp(room_type, "double") == 0)
				{
					room_price = double_price * days; // calculating the prices
				}
				else if (strcmp(room_type, "suite") == 0)
				{
					room_price = suite_price * days; // calculating the prices

				}
				sleep(2);
				printf("Your total is RM %d\n", room_price);
				sleep(1);
				printf("Okay here is your key and membership card\nThank you!\n");
				sleep(1);
				printf("Would you like to checkout our restaurant? (yes or no) ");
				scanf("%s", &rest_yn);
				if (strcmp(rest_yn, "yes") == 0)
				{
					Rest(); // function call.
				}
				else if (strcmp(rest_yn, "no") == 0)
				{	sleep(2);
					printf("Okay have a nice stay\nThank you!!\n");
				}
			}
			else if (strcmp(visit_count, "no") == 0)
			{
				Visit(); // function call.
			}
		}


	}
	else if (strcmp(customer, "resident") == 0)
	{
		printf("Hello, what would you like to do? (extend or checkout): ");
		scanf("%s", &resident_action);
		if (strcmp(resident_action, "extend") == 0)
		{
			printf("What type of room are you staying in? ");
			scanf("%s", &extend_room);
			if (strcmp(extend_room, "single") == 0)
			{
				printf("Am sorry all single rooms are full, please pick another type of room(double or suite): ");
				scanf("%s", &room_full);
				printf("For how many days would you like to extend you stay? ");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "double") == 0)
				{
					extend_total = extend_days * double_price; // calculating price
				}
				else if (strcmp(room_full, "suite") == 0)
				{
					extend_total = extend_days * suite_price; //calculating price
				}
				sleep(2);
				printf("Your extended total is RM %d\n", extend_total);

			}
			else if (strcmp(extend_room, "double") == 0)
			{
				printf("Am sorry all double rooms are full, please pick another type of room(single or suite): ");
				scanf("%s", &room_full);
				printf("For how many days would you like to extend you stay? ");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "single") == 0)
				{
					extend_total = extend_days * single_price; // calculating price
				}
				else if (strcmp(room_full, "suite") == 0)
				{
					extend_total = extend_days * suite_price; // calculating price
				}
				sleep(2);
				printf("Your extended total is RM %d\n", extend_total);

			}
			else if  (strcmp(extend_room, "suite") == 0)
			{
				printf("Am sorry all suite rooms are full, please pick another type of room(single or double): ");
				scanf("%s", &room_full);
				printf("For how many days would you like to extend you stay? ");
				scanf("%d", &extend_days);
				if (strcmp(room_full, "single") == 0)
				{
					extend_total = extend_days * single_price; // calculating price
				}
				else if (strcmp(room_full, "double") == 0)
				{
					extend_total = extend_days * double_price; // calculating price
				}
				sleep(2);
				printf("Your extended total is RM %d\n", extend_total);

			}
			sleep(1);
			printf("                                        Thank you!!\n");
		}
		else if (strcmp(resident_action, "checkout") == 0)
		{
			sleep(2);
			printf("Here is your invoice\n");
			sleep(1);
			printf("Thank you for staying in our hotel!\n have a nice trip!\n");
		}
	}




	else
	{
		printf("Invalid option please restart the program and type a valid option \nthank you!!\n");
	}
	return 0;
}
void Staff()
{
	printf("Inter your identification number: ");
	scanf("%d", &id_number);
	printf("Enter staff password: ");
	scanf("%d", &password);

	while (password != staff_pass) // while loop so that it will keep asking for the password until the user enters the right password
	{
		printf("Wrong password please re-enter: ");
		scanf("%d", &password);
		sleep(1);
	}
	if (password == staff_pass)
	{
		printf("Welcome staff member!!\n");
	}

}
void Visit()
{
	printf("Please enter your full name: ");
	scanf("%s", &name);
	printf("Please enter your birth year: ");
	scanf("%d", &birth);
	age = 2017 - birth; // calculate age based on entered year
	printf("Enter your passport number: ");
	scanf("%d", &passport_nm);
	printf("Enter your phone number: ");
	scanf("%d", &phone_nm);
	printf("For how long are you staying here? ");
	scanf("%d", &days);
	printf("What type of rooms do you want to stay in?\nwe have three types of rooms: single, double and suite");
	scanf("%s", &room_type);
	if (strcmp(room_type, "single") == 0)
	{
		// calculate price with a 5% discount
		room_price = single_price * days;
		discount = (room_price / 100) * DISCOUNT;

	}
	else if (strcmp(room_type, "double") == 0)
	{
		// calculate price with a 5% discount
		discount = (room_price / 100) * DISCOUNT;
		room_price = double_price * days;

	}
	else if (strcmp(room_type, "suite") == 0)
	{
		// calculate price with a 5% discount
		discount = (room_price / 100) * DISCOUNT;
		room_price = suite_price * days;
	}
	sleep(2);
	printf("Your total is RM%d\n", room_price);
	sleep(1);
	printf("Okay here is your key and membership card\nThank you!");

}
void Rest()
{
	char drink_yn[5]; // temp character for input

	printf("                                                    Welcome to IMH restaurant\n");
	printf("                                                 ----------------------------------\n");
	sleep(1);
	printf("How can i help you today?(dish or drink) ");
	scanf("%s", &rest_option);
	if (strcmp(rest_option, "drink") == 0)
	{
		Drinks(); // function call.
	}
	if (strcmp(rest_option, "dish") == 0)
	{
		Dishes(); // function call.
		sleep(2);
		printf("Would you like a drink? (yes or no) "); // ask the user if he want drinks after ordering food
		scanf("%s", &drink_yn);
		if (strcmp(drink_yn, "yes") == 0)
		{
			Drinks(); // function call.
			// didn't ask if he want food after drinks because it doesn't make any sense
		}
		else if (strcmp(drink_yn, "no") == 0)
		{
			sleep(2);
			printf("Thank You!!\n");
		}
	}
}
void Drinks()
{
	int i = 0, x, drink_count;
	// copy drinks to array space
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
	// print the drinks menu
	printf("List of drinks:\n");
	do
	{
		printf(" Drink number %d is %s\n", i, drinks[i]);
		++i;
	} while (i <= 14);
	printf("How many drinks you want? ");
	scanf("%d", &drink_count);
	sleep(2);
	printf("Please enter the number(s) of the drinks from the menu\n");
	for (x = 1; x <= drink_count; ++x)
	{
		scanf("%s", &drinks_user[x]);
	}
	sleep(4);
	printf("Okay, here is(are) your drink(s)\nwe will charge the price to your room \nThank you!!\n");
}
void Dishes()
{
	int i = 0, x, dishes_count;
	// copy list of dishes to array space.
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
	// print list of dishes
	printf("List of dishes:\n");
	do
	{
		printf("Dish number %d is %s\n", i, dishes[i]);
		++i;
	} while (i <= 9);
	printf("How many dishes you want? ");
	scanf("%d", &dishes_count);
	sleep(2);
	printf("Please enter the number(s) of the dish(es) from the menu\n");
	for (x = 1; x <= dishes_count; ++x)
	{
		scanf("%s", &dishes_user[x]);
	}
	// sleep
	printf("Okay, here is(are) your dish(s).\nwe will charge the price to your room \nThank you!!\n");
}
// functions for decoration
void Line()
{
	printf("-------------------------\n");
}
void Equal()
{
	printf("=========================\n");
}

