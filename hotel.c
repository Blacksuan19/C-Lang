#include <stdio.h>
#include <string.h>
/* Islamic  Malaysian Hotel (IMH)*/
/*this is a comment and there are others cuz i cant just set here typing all this without commenting about shit*/
int main()
{
	char name[100], person[10], customer[20], room_type[20], resident_action[20], extend_room[20], room_full[20];
	int id, passport_nm, phone_nm, staff_pass, password, birth, age, days, room_price, single_price, double_price, suite_price;
	int extend_days, extend_total, extend_single, extend_double, extend_suite ;
	staff_pass = 238974;
	age = 2017 - birth;
	single_price = 100;
	double_price = 200;
	suite_price = 350;
	printf("are you staff or a customer?\n");
	scanf("%s", &person);
	if (strcmp(person, "staff") == 0)
	{
		printf("enter staff password:\n");
		scanf("%d", &password);
	
		while (password != staff_pass)
		{
			printf("wrong password please re-enter:\n");
			scanf("%d", &password);
		}
		if (password == staff_pass)
		{
			printf("welcome staff member!!\n");
			
		}

	}

	if (strcmp(person, "customer") == 0)
	{
		printf("are you a new customer or a resident?\n");
		scanf("%s", &customer);
		if (strcmp(customer, "new") == 0)
		{
			printf("                                               welcome to Islamic  Malaysian Hotel (IMH)\n\n");
			printf("                                            -----------------------------------------------\n\n\n");
			printf("                                                  please fill up the registration form\n\n");
			printf("please enter your full name:\n");
			scanf("%s", &name);
			printf("please enter your birth year:\n");
			scanf("%d", &birth);
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
				printf("your total is RM %d\n", room_price);
				printf("okay here is your key and memebership card\nThank you");
			}
			else if (strcmp(room_type, "double") == 0)
			{
				room_price = double_price * days;
				printf("your total is RM %d\n", room_price);
				printf("okay here is your key and memebership card\nThank you");
			}
			else if (strcmp(room_type, "suite") == 0)
			{
				room_price = suite_price * days;
				printf("your total is RM %d\n", room_price);
				printf("okay here is your key and memebership card\nThank you!");
			}
		}
		if (strcmp(customer, "resident") == 0)
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



	}
	return 0;
}

