/*
Group members:
	 1.ABUBAKAR YAGOUB IBRAHIM OMER, 1625897
 	2.AYHAM KHADER ALI, 1637927
 	3.GEHAD ABBAS SEIDAHMED,1621469
 	4.ABDUL-RAHMAN FAYYADAH, 1628735
 	5.ALI MOHAMMED ALATTAS, 1536481
 	6.MOHAMMED GAAFAR MUSOUD, 1624491
*/
// some parts don't have comments because they are self explanatory.
// Sleep pauses the program for a specific amount of milliseconds
#include <stdio.h> //standard library
#include <stdlib.h> // standard library
#include <unistd.h> // standard library
#include <string.h> // for comparing strings.
#include <time.h> // getting system time and also random number generation everytime.
#include <windows.h> // for the Sleep function
#define DEPOSIT 80 // the deposit amount if you have insurance.
/* global definition for everything so that all functions can access it.
   i have reused some variables in some cases ex:id_num. */
char name[100], choice[20], gender[10], insurance_yn[5], blood_type[5], reschedule[5], week_day[20], re_day[10], sch_meet[10];
char h_name[50] = "Jannah Diabetes Care Center", pay_method[20], diabetes_yn[10], answer_doc[1000], symptoms_array[11][100];
int phone_nm, insurance_nm, age, bmr_male, bmr_female, total_doc_in, passport_nm, cash_deposit, id_num, meet_day, day, deposit, symp_count;
int phy_check_price = 35, total_doc = 50, diabetes_type, symptoms_user[11] = {0};
float bmi, weight, height, height_m, total_phar;
// functions declaration and their purpose ( all of them don't  return anything, just to divide the program ).
void Checkup(); // the whole checkup part in a separate function.
void Reschedule(); // for rescheduling.
void Pharmacy(); // for the pharmacy.
void Sch_meet(); // for scheduled meetings.
void Symptoms(); // for symptoms entries and comparison.
void Line(); // decoration.
void Equal(); // decoration.
int main()
{
	//didn't use the Line() function for this one because its centered.
	printf("                                              ----------------------------------------------\n");
	printf("\n                                                  Welcome To %s\n\n", h_name);
	printf("                                              ----------------------------------------------\n\n");
	printf("Please enter your first name: "); // first name so i wont call your whole name everytime i use the name variable
	scanf("%s", &name);
	Line();// function call.
	Sleep(2 * 1000);
	printf("How can i help you today? (checkup or meet): ");
	scanf("%s", &choice);
	if (strcmp(choice, "checkup") == 0)
	{
		Checkup(); // function call.
	}
	else if (strcmp(choice, "meet") == 0)
	{
		printf("Do you have insurance? (yes or no): ");
		scanf("%s", &insurance_yn);
		//checking for insurance
		Sleep(2 * 1000);
		if (strcmp(insurance_yn, "yes") == 0)
		{
			printf("you have to make RM%d deposit \n", DEPOSIT);
			printf("in case your insurance didn't cover all the expenses\n");
			Sleep(1 * 1000);
			Sch_meet(); //function call.
			printf("Please fill up the doctor's form.\n");
			Sleep(1 * 1000);
			Line(); // function call.
			//doctor's form
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Enter you phone number: ");
			scanf("%d", &phone_nm);
			printf("Please enter your passport/I-CAD number (without the first character): ");
			scanf("%d", &passport_nm);
			printf("Please enter your insurance number: ");
			scanf("%d", &insurance_nm);
			Sleep(2 * 1000);
			total_doc_in = total_doc - (total_doc / 4); //25% off if you have insurance
			printf("Your total payment is: RM%d\n", total_doc_in);
			printf("Please wait until we call your number.\n");
			Line(); // function call.
			Sleep(5 * 1000);
			printf("number %d Please go to the doctor's room\nThank You!\n", id_num);
		}
		else if (strcmp(insurance_yn, "no") == 0)
		{
			Sch_meet(); // function call.
			printf("Please fill up the doctor's form.\n");
			Line(); // function call.
			//doctor's form
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Enter you phone number: ");
			scanf("%d", &phone_nm);
			printf("Please enter your passport/I-CAD number (without the first character): ");
			scanf("%d", &passport_nm);
			Sleep(1 * 1000);
			printf("Your total payment is: RM%d\n", total_doc);
			Sleep(1 * 1000);
			printf("How would you like to pay? ");
			scanf("%s", &pay_method); // whatever payment method you want (credit cash or anything )
			printf("Okay please wait until we call your number.\n");
			Line(); // function call.
			Sleep(5 * 1000);
			printf("number %d Please go to the doctor's room\nThank You!\n", id_num);
		}
		printf("Hello %s my name is Dr. Mohammed...\n", name);
		Equal(); // function call.
		printf("Hope you doing well...\n");
		Sleep(3 * 1000);
		printf("do you have diabetes? (yes or no): ");
		scanf("%s", &diabetes_yn);
		if (strcmp(diabetes_yn, "yes") == 0)
		{
			Line(); // function call.
			printf("Okay we will do some regular tests to see whats wrong. \n");
			Sleep(1 * 1000);
			printf("which type of diabetes do you have? (1 or 2): ");
			scanf("%d", &diabetes_type);
			/* used a while loops instead of an if-else statement for diversity, both get the job done perfectly */
			while (diabetes_type == 1)
			{
				/* type one is lack of insulin
				so you give the patient a drug that will help his body produce insulin or just give him insulin */
				Sleep(2 * 1000);
				printf("Okay So, Your body is lacking insulin\n");
				Line(); // function call.
				Sleep(1 * 1000);
				printf("I will give you Lantus subcutaneous, which will help your body produce more insulin\n");
				Sleep(1 * 1000);
				printf("Here is your prescription please go to the pharmacy to  get your medicine \nThank you have a nice day!!\n");
				Pharmacy(); // function call.
				break;

			}
			while (diabetes_type == 2)
			{

				/* type 2 is a bit more complicated because the body can produce insulin it just
				can't observe it effectively so by exercising and maintaining
				your health your body will be able to observe insulin better
				also there are drugs that help with that */
				printf("Your body can't use insulin effectively \n");
				Sleep(1 * 1000);
				printf("You have to maintain a healthy life style by exercising regularly");
				Sleep(1 * 1000);
				printf("And eating healthy food like vegetables and whole grains\n");
				Sleep(1 * 1000);
				printf("I also have to give you Metformin\n");
				Sleep(1 * 1000);
				printf("It will improve your body's tissue sensitivity to insulin so it can use \n");
				Sleep(1 * 1000);
				printf("Please go to the Pharmacy to get your medicine \nThank you have a nice day!!");
				Pharmacy(); // function call.
				break;
			}
		}
		else
		{
			Symptoms(); // function call.
		}
	}
	else
		// if you enter anything else other that checkup or meet.
		printf("Invalid option please restart the program and enter a valid option\nThank You!!\n");
	system("pause");
}
// moved the whole checkup to a separate function so it would be easier to understand and maintain
void Checkup()
{
	printf("Please enter your gender: ");
	scanf("%s", &gender);
	//asked for gender first because its the main difference in the calculations and which prefix to use.
	Line(); // function call.
	Sleep(2 * 1000);
	if (strcmp(gender, "male") == 0)
	{
		printf("Welcome Mr. %s\n", name);
		printf("Please enter your age: ");
		scanf("%d", &age);
		printf("Please enter your height in cm: ");
		scanf("%f", &height);
		printf("Please enter your weight in kg: ");
		scanf("%f", &weight);
		printf("Please enter your blood type: ");
		scanf("%s", &blood_type);
		Line(); // function call.
		Sleep(3 * 1000);
		bmr_male = (float) 10 * weight + 6.25 * height - 5 * age + 5;//bmr formula
		printf("Your amount of needed calories per day according to (BMR) is: %d\n", bmr_male); //basal metabolic rate (BMR)
		height_m = height / 100; //convert height from cm to meter because its what bmi uses.
		bmi = weight / (height_m * height_m);//bmi formula.
		printf("Your blood type is %s\n", blood_type);// don't have anything much to do with it so just gonna give it back
		Line(); // function call.
		Sleep( 2 * 1000);
		printf("Your current body mass index is : %.3f\n", bmi);
		/*yeah i know i should've used an if else statement
		  but this easier and better because you can just pass conditions on the fly also for diversity . */
		bmi < 18.5 ? printf("Your weight status is : Underweight, you need to start eating more in order to become healthy\n") :
		bmi < 25 ? printf("Your weight status is : Normal weight, everything seems normal keep it up \n") :
		bmi < 30 ? printf("Your weight status is : Overweight, you need to slow down and maintain your health\n") :
		bmi < 35 ? printf("Your weight status is : Obesity, you have weight issues and unless you act soon it will cause health issues for you\n") :
		bmi < 18.5, bmi < 25, bmi < 30, bmi < 35; printf("\aYour total payment is: RM%d\n", phy_check_price); // print this line in all cases.
		Equal(); // function call.
		Sleep(2 * 1000);
		printf("Would you like to schedule another checkup next month? (yes or no) "); //check for reschedule.
		scanf("%s", &reschedule);
		if (strcmp(reschedule, "yes") == 0)
		{
			Reschedule();//function call
		}
		else if (strcmp(reschedule, "no") == 0)
		{
			Sleep(1 * 1000);
			printf("Okay, Thank You!!\n");
			printf("Have a nice day!!\n");
		}

	}
	else if (strcmp(gender, "female") == 0)
	{
		printf("Welcome Ms. %s\n", name);
		printf("Please enter your age: ");
		scanf("%d", &age);
		printf("Please enter your height in cm: ");
		scanf("%f", &height);
		printf("Please enter your weight in kg: ");
		scanf("%f", &weight);
		printf("Please enter your blood type: ");
		scanf("%s", &blood_type);
		Line(); // function call.
		Sleep(3 * 1000);
		bmr_female = (float) 10 * weight + 6.25 * height - 5 * age - 161;//bmr formula
		printf("Your amount of needed calories per day according to (MBR) is: %d\n", bmr_female);
		height_m = height / 100; //covert height from cm to meter for bmi.
		bmi = weight / (height_m * height_m);//bmi formula
		Line(); // function call.
		printf("Your blood type is %s\n", blood_type);// don't have anything much to do with it so just gonna give it back
		Line(); // function call.
		Sleep(2 * 1000);
		printf("Your current body mass index is : %.3f\n", bmi);
		/*yeah i know i should've used an if else statement
		  but this easier and better because you can just pass conditions on the fly also for diversity . */
		bmi < 18.5 ? printf("Your weight status is : Underweight, you need to start eating more in order to become healthy\n") :
		bmi < 25 ? printf("Your weight status is : Normal weight, everything seems normal keep it up \n") :
		bmi < 30 ? printf("Your weight status is : Overweight, you need to slow down and maintain your health\n") :
		bmi < 35 ? printf("Your weight status is : Obesity, you have weight issues and unless you act soon it will cause health issues for you\n") :
		bmi < 18.5, bmi < 25, bmi < 30, bmi < 35; printf("\aYour total payment is: RM%d\n", phy_check_price); // print this line in all cases.
		Line(); // function call.
		Sleep(2 * 1000);
		printf("Would you like to schedule another checkup next month? (yes or no) ");
		scanf("%s", &reschedule);
		if (strcmp(reschedule, "yes") == 0)
		{

			Reschedule();//function call
		}
		else if (strcmp(reschedule, "no") == 0)
		{
			Sleep(1 * 1000);
			printf("Okay, Thank You!!\n");
			printf("Have a nice day!!\n");
		}
	}
	else {
		printf("not recognized gender please restart the program and enter your birth gender (male/female) \n");
	}
	Equal(); // function call.
	Line(); // function call.
	system(pause);
	return 0;
}
/* moved the rescheduling part to a separate function
   because its long and complicated and its just easier to maintain. */
void Reschedule()
{
	// an array for months.
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // number of days each month has.
	char week[7][10] ; // week array and character length.
	int day, mon, year, i, r, s = 0 ;
	// week array definitions.
	strcpy(week[0], "Sunday") ;
	strcpy(week[1], "Monday") ;
	strcpy(week[2], "Tuesday") ;
	strcpy(week[3], "Wednesday") ;
	strcpy(week[4], "Thursday") ;
	strcpy(week[5], "Friday") ;
	strcpy(week[6], "Saturday") ;
	srand(time(NULL)); // set run time to null so you get a different number each time you run the program.
	id_num = 1 + rand() % (1 - 1000 + 1); // generate a number between 1 and 1000.
	time_t t = time(NULL); // set the time to null so it will read the right system data everytime you run the program.
	struct tm tm = *localtime(&t); // a constructor to get the local date (credit: StackOverFlow).
	day = tm.tm_mday - 1; // get real day.
	year = tm.tm_year + 1900; // get real year.
	mon = tm.tm_mon + 1; // get real month.
	meet_day = day; // since the next meeting will be in 4 weeks so it will be on the same week day.
	/* the for loop is to convert the day to a number between 0 and 6
	so that it can be passed to the week array and get the week day. */
	for (i = 0 ; i < mon - 1 ; i++)
		s = s + month[i] ;
	s = s + (day + year + (year / 4) - 2) ;
	s = s % 7 ;
	// on Sunday the doctor is not available.
	Line(); // function call.
	// this if statement will only run on December or if your system date is broken.
	if (mon = 12)
	{
		/* if its December add one to the year so that the meeting will be next year
		   and also subtract 12 from the month so it will be zero and when we add 1 in the next printf the month will be  1 (January). */
		year = year + 1;
		mon = mon - 12;
	}
	Sleep(2 * 1000);
	if (week[s] != "Sunday") // comparing an array to a string.
	{
		printf("Your next checkup will be a month from now on:\n%s %d %d %d\n", week[s], meet_day, mon + 1, year);
		/* the + 1 after the month is because the next schedule
		   will be after 4 weeks which is definitely next month. */
	}
	/* this else statement will only run on a Sunday.
	   or if your system date is broken?!. */
	else
	{
		printf("On %s the doctor is not available\n", week[s]);
		Sleep(1 * 1000);
		printf("would you like to reschedule it to the day after or before? ");
		scanf("%s", &re_day);
		Sleep(1 * 1000);
		if (strcmp(re_day, "before") == 0)
		{
			printf("Your next checkup will be on Saturday %d %d %d\n", meet_day - 1, mon + 1, year);
		}
		else if (strcmp(re_day, "after") == 0)
		{
			printf("Your next checkup will be on Monday %d %d %d\n", meet_day + 1, mon + 1, year);
		}
		Sleep(2 * 1000);
	}
	printf("Your identification number is %d\n", id_num);
	printf("Thank you!!\n");
}

void Sch_meet()
{
	printf("have you already scheduled this meeting? (yes or no): ");
	scanf("%s", &sch_meet);
	if (strcmp(sch_meet, "yes") == 0)
	{
		printf("enter your identification number: \n");
		scanf("%d", & id_num);
	}
	else
	{
		Sleep(3 * 1000);
		srand(time(NULL)); // set run time to null so you get a different number each time you run the program.
		id_num = 1 + rand() % (1 - 1000 + 1); // generate a number between 1 and 1000.
		printf("Okay, your new identification number is : %d\n", id_num);
	}
}
void Symptoms()
{
	int a = 0, s; // for the loops.
	printf("Tell me how are you feeling today? (say anything): ");
	scanf("%s", &answer_doc); // wont use this in anything but usually doctors talk to you normally out if your symptoms.
	// copying symptoms as strings to an array space using strcpy.
	strcpy(symptoms_array[0], "hunger");
	strcpy(symptoms_array[1], "dry mouth ");
	strcpy(symptoms_array[2], "blurred vision");
	strcpy(symptoms_array[3], "peeing more often");
	strcpy(symptoms_array[4], "itchy skin");
	strcpy(symptoms_array[5], "fatigue");
	strcpy(symptoms_array[6], "slow-healing cuts");
	strcpy(symptoms_array[7], "pain or numbness in feet or legs");
	strcpy(symptoms_array[8], "weight loss");
	strcpy(symptoms_array[9], "nausea");
	strcpy(symptoms_array[10], "vomiting");
	Line(); // function call.
	Sleep(3 * 1000);
	//print out the symptoms so user can choose
	printf("List of Symptoms: \n");
	// do while instead of for loop for diversity.
	do {
		printf("[%d] %s\n", a, symptoms_array[a]);
		++a;
	} while (a <= 10);

	printf("how many of these symptoms do you have?\n");
	scanf("%d", &symp_count);
	Sleep(2 * 1000);
	printf("please enter the number(s) corresponding to the symptom(s) you have \n");
	for (s = 1; s <= symp_count; ++s) // store the user inputed number in a space on the array depending on how many of these symptoms he has.
	{
		scanf("%d", &symptoms_user[s]);

	}
	/* symptoms 6 and 7 indicate that its type 1 while symptoms 8 9 and 10 indicate that its type 2 this for loop will check the whole
	   sypmtoms_array array according to how many symptoms he inputed to see if the user has chosen any of these numbers together,
	   other symptoms are common on both types and other sicknesses as well. */
	Sleep(3 * 1000);
	for (s = 1; s <= symp_count; ++s)
	{
		if (symptoms_user[s] == 6 || symptoms_user[s] == 7)
		{
			// divided the printf's for easier code readability
			printf("from your symptoms i can see that you might ");
			printf("You have diabetes type 2\n");
			Sleep(2 * 1000);
			Line(); // function call.
			printf("it is caused by the body not able to observe insulin effectively\n");
			Equal(); // function call.
			Sleep(2 * 1000);
			printf("from now on you need to eat healthy and exercises regularly \n");
			Sleep(2 * 1000);
			printf("i will give you some medications that will help you feel better \n");
			Sleep(1 * 1000);
			printf("please go to the pharmacy to get these medications \n i hope you get well soon  \n have a nice day\n");
			Equal(); // function call.
			Sleep(2 * 1000);
			printf("Also please come back here every month so i can do some regular tests\n");
			diabetes_type = 2; // this is for the medicine price on the pharmacy function.
			Pharmacy(); // function call.
			break;
		}
		if (symptoms_user[s] == 8 || symptoms_user[s] == 9 || symptoms_user[s] == 10)
		{
			// divided the printf's for easier code readability
			printf("from your symptoms i can see that you might ");
			printf("You have diabetes type 1\n");
			Sleep(2 * 1000);
			Line(); // function call.
			printf("it can be inherited across the family\n");
			Sleep(1 * 1000);
			printf("but also can be caused by your immune system destroying beta cells in your pancreas\n");
			Equal(); // function call.
			Sleep(1 * 1000);
			printf("just try to keep your blood sugar levels within the healthy range \n");
			Line(); // function call.
			Sleep(1 * 1000);
			printf("i will describe some insulin injections for you \n");
			Sleep(1 * 1000);
			printf("please go to the pharmacy to get them \n i hope you get well soon \n have a nice day \n");
			Equal(); // function call.
			Sleep(2 * 1000);
			printf("Also please come back here every month so i can do some regular tests\n");
			diabetes_type = 1; // this is for the medicine price on the pharmacy function.
			Pharmacy(); // function call.
			break;
		}
		else
		{
			// divided the printf's for easier code readability
			printf("okay from your symptoms i can see that it's not diabetes \n");
			Sleep(2);
			printf("so i will redirect you to a normal hospital\n");
			printf("thank you, hope you get well soon\n");
			break;
		}
	}



}

// pharmacy functions because i have to call it few times.
void Pharmacy()
{
	/* literally most of the insulin injections and medications have a very similar way
	   of usage and storage there are some medications which can be used by people with both types of diabetes. */
	printf("Welcome %s to %s pharmacy how can i help you?\n", name, h_name);
	Line(); // function call.
	Sleep(2 * 1000);
	printf("Can i have the prescription please?\n");
	Sleep(3 * 1000);
	// will assume that he has already gave the prescription and the pharmacist have already found the medicine.
	printf("Okay here is your medicine, ");
	Sleep(1 * 1000);
	printf("You'll find all the instructions on how to use it inside \n"); // wrote them on the medicine's paper.
	Line(); // function call.
	printf("Please try to keep it in a cold, dry place\n");
	Sleep(2 * 1000);
	printf("Also please don't mix it with other insulin types \n"); // research.
	Line(); // function call.
	//these if statements are for the prices.
	Sleep(2 * 1000);
	if (diabetes_type = 1 && strcmp(insurance_yn, "no") == 0)
	{
		total_phar = 14.03 * 4.08; // transforming the price from USD to MYR according to exchange rate of 9-12-17
		printf("Your total payment is %.2f\n", total_phar);
	}
	else if (diabetes_type = 2 && strcmp(insurance_yn, "no") == 0)
	{
		total_phar = 6.81 * 4.09; // transforming the price from USD to MYR according to exchange rate of 9-12-17
		printf("Your total payment is %.2f\n", total_phar);
		printf("You can bay by cash or credit\n");
	}
	// seeing these prices am 100% sure that any insurance company can cover them so i will give back the 80 deposit
	Sleep(2 * 1000);
	if (strcmp(insurance_yn, "yes") == 0)
	{
		printf("Your insurance company covered the expenses\n");
		Sleep(1 * 1000);
		printf("so here is your RM%d deposit\n", DEPOSIT);
	}
}

// these functions are for decoration.
void Line()
{
	printf("-------------------------\n");
}
void Equal()
{
	printf("=========================\n");
}
