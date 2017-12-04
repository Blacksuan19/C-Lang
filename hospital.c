//some parts don't have comments because they are self explanatory.
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#define DEPOSIT 80
//#include <windows.h> will just leave it here in case its needed at some point
//global definition for everything so that all functions can access it.
// i have reused some variable in some cases ex:id_num,
char name[100], choice[20], gender[10], insurance_yn[5], symptoms_user[11][1000], blood_type[5], reschedule[5], week_day[20], re_day[10], sch_meet[10];
char h_name[50] = "Jannah Diabetes Care Center", pay_method[20], diabetes_yn[10], answer_doc[1000], symptoms_array[11][100];
int phone_nm, insurance_nm, age, bmr_male, bmr_female, total_doc_in, passport_nm, cash_deposit, id_num, meet_day, day, deposit;
int phy_check_price = 35, total_doc = 50, diabetes_type;
float bmi, weight, height, height_m, total_phar;
//functions declaration.
float Checkup();
char Reschedule();
char Pharmacy();
char Sch_meet();
char symptoms();
int Line();
int main()
{
	//didn't use the Line() function for this one because its centered
	printf("                                              ----------------------------------------------\n");
	printf("\n                                                  Welcome To %s\n\n", h_name);
	printf("                                              ----------------------------------------------\n\n");
	printf("Please enter your first name: ");
	scanf("%s", &name);
	Line();
	printf("How can i help you today? (checkup or meet): ");
	scanf("%s", &choice);
	if (strcmp(choice, "checkup") == 0)
	{
		Checkup();//function call.
	}
	else if (strcmp(choice, "meet") == 0)
	{
		printf("Do you have insurance? (yes or no): ");
		scanf("%s", &insurance_yn);
		//checking for insurance
		if (strcmp(insurance_yn, "yes") == 0)
		{
			//doctor's form
			printf("Please fill up the doctor's form.\n");
			Line();
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Enter you phone number:");
			scanf("%d", &phone_nm);
			printf("Please enter your passport/I-CAD number (without the first character): ");
			scanf("%d", &passport_nm);
			printf("Please enter your insurance number: ");
			scanf("%d", &insurance_nm);
			printf("you have to deposit RM%d ", DEPOSIT);
			printf("in case you insurance didn't cover all the expenses\n");
			// i will just assume that you just made the deposit
			printf("have you already scheduled this meeting or? (yes or no): \n");
			scanf("%s", &sch_meet);
			Sch_meet();
			total_doc_in = total_doc - (total_doc / 4); //25% off if you have insurance
			printf("Your total is: RM%d\n", total_doc_in);
			printf("Please wait until we call your name\n");
			Line();
			//there supposed to be a sleep thing here but since windows doesn't have that i cant use it smh
			printf("Mr.%s Please go to the doctors room\nThank You\n", name);
		}
		else if (strcmp(insurance_yn, "no") == 0)
		{
			//doctor's form
			printf("Please fill up the doctor's form.\n");
			Line();
			printf("Enter your age: ");
			scanf("%d", &age);
			printf("Enter you phone number: ");
			scanf("%d", &phone_nm);
			printf("Please enter your passport/I-CAD number (without the first character): ");
			scanf("%d", &passport_nm);
			printf("have you already scheduled this meeting or? (yes or no): ");
			scanf("%s", &sch_meet);
			Sch_meet();
			printf("Your total is: RM%d\n", total_doc);
			printf("How would you like to pay? ");
			scanf("%s", &pay_method);
			// just gonna assume (again) you just made the payment.
			printf("Okay please wait until we call your name\n");
			Line();
			//not gonna say the sleep thing again but going to leave a place for it
			printf("Mr.%s Please go to the doctors room\nThank You\n", name);
		}
		printf("Hello %s my name is Dr.mohammed\n", name);
		Line();
		printf("Hope you doing well\n");
		printf("you have diabetes or you think you might? (yes or no): ");
		scanf("%s", &diabetes_yn);
		if (strcmp(diabetes_yn, "yes") == 0)
		{
			Line();
			printf("Okay we will do some regular tests to see whats wrong\n");
			printf("which type of diabetes do you have? (1 or 2): ");
			scanf("%d", &diabetes_type);
			if (diabetes_type == 1)
			{
				/* type one is lack of insulin
				so you give the patient a drug that will help his body produce insulin or just give him insulin */
				printf("Your body is lacking in insulin\n");
				Line();
				printf("I will give you Lantus subcutaneous, which will help your body produce more insulin\n");
				// i did research on this for real!!.
				printf("Here is your prescription please go to the pharmacy to  get your medicine \nThank you have a nice day!!\n");
				Pharmacy();

			}
			else if (diabetes_type == 2)
			{

				/* type 2 is a bit more complicated because the body can produce insulin it just
				cant observe it effectively so by exercising and maintaining
				your health your body will be able to observe insulin better
				also there are drugs that help with that */
				printf("Your body can't use insulin effectively \n");
				printf("You have to maintain a healthy life style by exercising regularly");
				printf("And eating healthy food like vegetables and whole grains\n");
				printf("I also have to give you Metformin\n");
				printf("It will improve your body's tissue sensitivity to insulin so it can use \n");
				printf("Please go to the Pharmacy to get your medicine \nThank you have a nice day!!");
				Pharmacy();
			}
		}
		else
		{
			printf("Tell me how are you feeling today?(say anything other than your symptoms):\n");
			scanf("%s", &answer_doc);
			// list of symptoms.

		}
	}
	else
		printf("Invalid option please restart the program and enter a valid option\nThank You!!\n");
	return 0;
}
//moved the whole checkup to a separate function so it would be easier to understand and maintain
float Checkup()
{
	printf("Please enter your gender: ");
	scanf("%s", &gender);
	//asked for gender first because its the main difference in the calculations.
	Line();
	if (strcmp(gender, "male") == 0)
	{
		printf("Welcome Mr.%s\n", name);
		printf("Please enter your age: ");
		scanf("%d", &age);
		printf("Please enter your height in cm: ");
		scanf("%f", &height);
		printf("Please enter your weight in kg: ");
		scanf("%f", &weight);
		printf("Please enter your blood type: ");
		scanf("%s", &blood_type);
		Line();
		bmr_male = (float) 10 * weight + 6.25 * height - 5 * age + 5;//bmr formula
		printf("Your amount of needed calories per day according to (BMR) is: %d\n", bmr_male); //basal metabolic rate (BMR)
		height_m = height / 100; //convert height from cm to meter because its what bmi uses.
		bmi = weight / (height_m * height_m);//bmi formula.
		Line();
		printf("Your blood type is %s\n", blood_type);// don't have anything much to do with it so just gonna give it back
		Line();
		printf("Your current body mass index is : %.3f\n", bmi);
		// yeah i know i should've used an if else statement but this easier and better because you can just pass conditions on the fly.
		bmi < 18.5 ? printf("Your weight status is : Underweight, you need to start eating more in order to become healthy\n") :
		bmi < 25 ? printf("Your weight status is : Normal weight, everything seems normal keep it up \n") :
		bmi < 30 ? printf("Your weight status is : Overweight, you need to slow down and maintain your health\n") :
		bmi < 35 ? printf("Your weight status is : Obesity, you have weight issues and unless you act soon it will cause health issues for you\n") :
		bmi < 18.5, bmi < 25, bmi < 30, bmi < 35; printf("\aYour total is: RM%d\n", phy_check_price);//print this line in all cases
		Line();
		printf("Would you like to schedule another checkup next month? "); //check for reschedule.
		scanf("%s", &reschedule);
		if (strcmp(reschedule, "yes") == 0)
		{
			Reschedule();//function call
		}
		else if (strcmp(reschedule, "no") == 0)
		{
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
		Line();
		bmr_female = (float) 10 * weight + 6.25 * height - 5 * age - 161;//bmr formula
		printf("Your amount of needed calories per day according to (MBR) is: %d\n", bmr_female);
		height_m = height / 100; //covert height from cm to meter for bmi.
		bmi = weight / (height_m * height_m);//bmi formula
		Line();
		printf("Your blood type is %s\n", blood_type);// don't have anything much to do with it so just gonna give it back
		Line();
		printf("Your current body mass index is : %.3f\n", bmi);
		// yeah i know i should've used an if else statement but this easier and better because you can just pass conditions on the fly
		bmi < 18.5 ? printf("Your weight status is : Underweight, you need to start eating more in order to become healthy\n") :
		bmi < 25 ? printf("Your weight status is : Normal weight, everything seems normal keep it up \n") :
		bmi < 30 ? printf("Your weight status is : Overweight, you need to slow down and maintain your health\n") :
		bmi < 35 ? printf("Your weight status is : Obesity, you have weight issues and unless you act soon it will cause health issues for you\n") :
		bmi < 18.5, bmi < 25, bmi < 30, bmi < 35; printf("\aYour total is: RM%d\n", phy_check_price);//print this line in all cases
		Line();
		printf("Would you like to schedule another checkup next month? ");
		scanf("%s", &reschedule);
		if (strcmp(reschedule, "yes") == 0)
		{

			Reschedule();//function call
		}
		else if (strcmp(reschedule, "no") == 0)
		{
			printf("Okay, Thank You!!\n");
			printf("Have a nice day!!\n");
		}
	}
	else {
		printf("not recognized gender please restart the program and enter your birth gender (male/female)");
	}
	Line();
	Line();
}
/* moved the rescheduling part to a separate function
   because its long and complicated and its just easier to maintain. */
char Reschedule()
{
	//an array for months
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char week[7][10] ; //week array and character length
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
	struct tm tm = *localtime(&t); // a constructor to get the local date.
	day = tm.tm_mday - 1;
	year = tm.tm_year + 1900;
	mon = tm.tm_mon + 1;
	meet_day = day;
	month[1] = 29 ;
	/* the for loop is to convert the day to a number between 0 and 6
	so that it can be passed to the week array and get the week day. */
	for (i = 0 ; i < mon - 1 ; i++)
		s = s + month[i] ;
	s = s + (day + year + (year / 4) - 2) ;
	s = s % 7 ;
	//on Sunday the doctor is not available.
	Line();
	if (week[s] != "Sunday")
	{
		printf("Your next checkup will be next weeks from now on:\n%s %d %d %d\n", week[s], meet_day, mon + 1, year);
		/* the + 1 after the month is because the next schedule
		 will be after 4 weeks which is definitely next month. */
	}
	// this else statement will only run on a Sunday.
	// or if your system clock is broken?!.
	else
	{
		printf("On %s the doctor is not available\n");
		printf("would you like to reschedule it to the day after or before? ");
		scanf("%s", &re_day);
		if (strcmp(re_day, "before") == 0)
		{
			printf("Your next checkup will be on Saturday %d %d %d\n", meet_day - 1, mon + 1, year);
		}
		if (strcmp(re_day, "after") == 0)
		{
			printf("Your next checkup will be on Monday %d %d %d\n", meet_day + 1, mon + 1, year);
		}
	}
	printf("Your special identification number is %d\n", id_num);
	printf("Thank you!!\n");
}

char Sch_meet()
{
	if (strcmp(sch_meet, "yes") == 0)
	{
		printf("enter the identification number: \n");
		scanf("%d", & id_num);
	}
	else
	{
		srand(time(NULL)); // set run time to null so you get a different number each time you run the program.
		id_num = 1 + rand() % (1 - 100 + 1); // generate a number between 1 and 100.
		printf("i will give you an identification number right now \n");
		Line();
		printf("Okay here is you new identification number :%d\n", id_num);
	}
}
char symptoms()
{
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
	Line();
	//print out the symptoms so user can choose
	printf("list of symptoms: \n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", symptoms_array[0], symptoms_array[1], symptoms_array[2], symptoms_array[3], symptoms_array[4], symptoms_array[5], symptoms_array[6], symptoms_array[7], symptoms_array[8], symptoms_array[9], symptoms_array[10]);
	printf("Now please tell me your symptoms: (in order and if you don't have that symptom enter anything):\n");
	//
	//there are 10 slots so if you have less symptoms you just keep pressing enter until you fill them all.
	scanf("%s", &symptoms_user[0]);
	scanf("%s", &symptoms_user[1]);
	scanf("%s", &symptoms_user[2]);
	scanf("%s", &symptoms_user[3]);
	scanf("%s", &symptoms_user[4]);
	scanf("%s", &symptoms_user[5]);
	scanf("%s", &symptoms_user[6]);
	scanf("%s", &symptoms_user[7]);
	scanf("%s", &symptoms_user[8]);
	scanf("%s", &symptoms_user[9]);
	scanf("%s", &symptoms_user[10]);
	if (strcmp(symptoms_user[6], symptoms_array[6]) == 0 || strcmp(symptoms_user[7], symptoms_array[7]) == 0)
	{
		printf("from to your symptoms i can see that ");
		printf("You have diabetes type 2\n");
		Line();
		printf("it is caused by the body not able to observe insulin effectively\n");
		Line();
		printf("from now on you need to sat healthy and exercises regularly \n");
		printf("so far there is not definite cure for this but \n");
		Line();
		printf("i will give you some medications that will help you \n");
		printf("please go to the pharmacy to get these medications \n i hope you get well soon  \n have a nice day\n");
		Line();
		printf("Also please come back here every month so i can do some regular tests\n");
		diabetes_type = 2;
	}
	if (strcmp(symptoms_user[8], symptoms_array[8]) == 0 || strcmp(symptoms_user[9], symptoms_array[9]) == 0)
	{
		printf("from to your symptoms i can see that ");
		printf("You have diabetes type 1\n");
		Line();
		printf("it can be inherited across the family\n");
		printf("but also can be caused by your immune system destroying beta cells in your pancreas\n");
		Line();
		printf("so far there is no definite cure for it \n");
		printf("just try to keep your blood sugar levels within the healthy range \n");
		Line();
		printf("i will describe some insulin injections for you \n");
		printf("please go to the pharmacy to get them \n i hope you get well soon \n have a nice day \n");
		Line();
		printf("Also please come back here every month so i can do some regular tests\n");
		diabetes_type = 1;
	}
	else
	{
		printf("okay so seems like you don't have diabetes \n");
		printf("so i will redirect you to a normal hospital\n");
		printf("thank you, hope you get well soon\n");
	}
}

// pharmacy functions because i have to call it few times
char Pharmacy()
{
	/*literally most of the insulin injections and medications have a very similar way
	  of usage and storage there are some medications which can be used by people with both types of diabetes*/
	printf("Welcome %s to %s pharmacy how can i help you?\n", name, h_name);
	Line();
	printf("Can i have the prescription please?\n");
	Line();
	printf("Okay here is your medicine\n");
	printf("you'll find all the instructions on how to use it inside \n");
	Line();
	printf("Please try to keep it in a cold, dry place\n");
	printf("Also please don't mix it with other insulin types \n");
	Line();
	//these if statements are for the prices.
	if (diabetes_type = 1 && strcmp(insurance_yn, "no") == 0)
	{
		total_phar = 14.03 * 4.09; // transforming the price from USD to MYR
		printf("your total is %.2f\n", total_phar);
	}
	else if (diabetes_type = 2 && strcmp(insurance_yn, "no") == 0)
	{
		total_phar = 6.81 * 4.09;
		printf("Your total is %.2f\n", total_phar);
		printf("You can bay by cash or credit\n");
	}
	//seeing these prices am 100% sure that any insurance company can cover them so i will give back the 80 deposit
	if (strcmp(insurance_yn, "yes") == 0)
	{
		printf("Your insurance company covered the expenses\n");
		printf("so here is your RM%d deposit\n", DEPOSIT);
	}
}
// these function is for decoration.
int Line()
{
	printf("-------------------------\n");
}
