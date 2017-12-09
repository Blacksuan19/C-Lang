/*                        BISMILLAH ALRRAHMAAN ARRAHEEM
Assalamu Alaikum...
Semester group project --sem 2 2014/2015,,, Project members:-
1-Basem Hour          "1420077"   Sec 1
2-Ahmed Alattas       "1322349"   Sec 2
3-Abdulrehman Bassam  "1325423"   Sec 2
4-Amjad Diyab         "1421855"   Sec 1
5-Abdulrehman Maqsood "1424019"   Sec 2  */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h>
int adven ( void);     //choice==1 Function (ADVENTURE)
int advMetr ( void );  //choice==2 Function  (ADVANCED METROPOLIS)
int home ( void );     //choice==3 Function  (HOMESTAY)
void loading (void);   //Loading/Welcoming screen
int main ()
{
	int choice , type;
	char name[50];
	loading ();        //Function call for 'Loading/Welcoming screen
	system("color 08");
	printf("\t\t\t\t\t\t Welcome\n");
	printf("\nPlease Enter Your Name : ");
	scanf("%s", &name);

	printf("\nWhere do you like to go in Vacation ? \n");  //Vacation location choice, main dividing point.
	printf("1- Go for an Adventure.\n");   //1
	printf("2- Go to an Advanced Metropolis.\n");   //2
	printf("3- Stay in Home.\n");   //3
	do
	{
		scanf("%d", &choice);
		fflush(stdin);
		if (choice == 1)
		{
			type = adven ();  //Fuction call for 'choice==1 Function (ADVENTURE)'
			if (type == 1)
			{
				printf("\nYou are a person with a strong will and character and, you prefer to stick with your decision what ever it is.\nSometimes you see yourself smarter and stronger than others\n");
				printf("Overall, you are a great person, but need you to be more considerate and kind.\n");   //Strong, confident and self-dependant.
			}
			else if (type == 2)
			{
				printf("\nYou are an outgoing person, who loves socializing and having fun. You tend to \nbe a good listener and wise decision-maker.\n");
				printf("You are a good-willed person but naive, great person to be around :). \n");   //Social, wise and good-willed.
			}
			else if ( type == 3)
			{
				printf ("\nYou are a laidback person who usually hates change and work, lazy and always \nworried about something or other.");
				printf("You have a pessmistic view of the world. \nOverall, you have to be cheerful and more confident.\n");   //Worrisome, pessimist and lazy.
			}
			else
				printf("You are too complex, try again :)\n");
			break;
		}


		else if (choice == 2)
		{
			type = advMetr ();   //Function call for 'choice==2 Function  (ADVANCED METROPOLIS)'
			if (type == 1)
			{
				printf("\nYou are a person with a strong will and character and, you prefer to stick with your decision what ever it is.\nSometimes you see yourself smarter and stronger than others\n");
				printf("Overall, you are a great person, but need to be more considerate and kind. \n");   //Strong, confident and self-dependant.
			}
			else if (type == 2)
			{
				printf("\nYou are an outgoing person, who loves socializing and having fun. You tend to \nbe a good listener and wise decision-maker.\n");
				printf("You are a good-willed person but naive, great person to be around :). \n");   //Social, wise and good-willed.
			}
			else if (type == 3)
			{
				printf ("\nYou are a laidback person who usually hates change and work, lazy and always \nworried about something or other.");
				printf("You have a pessmistic view of the world. \nOverall, you have to be cheerful and more confident.\n");   //Worrisome, pessimist and lazy.
			}
			else
				printf("You are too complex, try again :)\n");
			break;
		}

		else if (choice == 3)
		{
			type = home ();   //Function call for 'choice==3 Function  (HOMESTAY)'
			if (type == 1)
			{
				printf("\nYou are a person with a strong will and character and, you prefer to stick with your decision what ever it is.\nSometimes you see yourself smarter and stronger than others\n");
				printf("Overall, you are a great person, but need to be more considerate and kind. \n");   //Strong, confident and self-dependant.
			}
			else if (type == 2)
			{
				printf("\nYou are an outgoing person, who loves socializing and having fun. You tend to \nbe a good listener and wise decision-maker.\n");
				printf("You are a good-willed person but naive, great person to be around :)\n");   //Social, wise and good-willed.
			}
			else if (type == 3)
			{
				printf ("\nYou are a laidback person who usually hates change and work, lazy and always \nworried about something or other.");
				printf("You have a pessmistic view of the world. \nOverall, you have to be cheerful and more confident.\n");   //Worrisome, pessimist and lazy.
			}
			else
				printf("You are too complex, try again :)\n");
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert 1 or 2 or 3. \n");
		}
	} while (choice != 1 || 2 || 3 );

	printf("\t\t\nThanks %s for playing our game :) \n", name);  //Use the player's name by the end of the game. With Thank you message.
	system ("pause");
	return 0;
}

int adven ( void)   //Function for choice==1 (ADVENTURE)
{
	char ch ;
	int ans;
	int A = 0;  //The program uses A, B and C to measure the player's Major Personalty type in the background ,
	int B = 0; // Then returns the most dominant choice of the player through ans,, which shows the player their personality type.
	int C = 0;
	system("color 03");
	system ("cls");
	printf("Which one of these location would you like to go to ?\n");   //Q1.1
	printf("a- Amazon Forests.\n");
	printf("b- African Sahara. \n");
	printf("c- North Antartica. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");
	printf("Are you going alone or with someone ?\n");   //Q1.2
	printf("a- I am going alone. \n");
	printf("b- I am going with friends. \n");
	printf("c- I am going with my family. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	system ("cls");
	printf("Who is paying for the trip ?\n");   //Q1.3
	printf("a- Me. \n");
	printf("b- Each person thst is going will have a share. \n");
	printf("c- My parents. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	system ("cls");
	printf("Before you go, are you sure that your studies will not be affected ?\n");   //Q1.4
	printf("a- Yes, My studies are fine. \n");
	printf("b- I will manage it when I come back. \n");
	printf("c- I am failing anyway. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		} else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	system ("cls");
	printf("Instead of an adventure, We want you to stay at home, Ok ?\n");   //Q1.5
	printf("a- No,I am going. \n");
	printf("b- You could come with me :). \n");
	printf("c- Ok :( \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	printf("HaHaHa, Just Kidding , you can proceed with your Adventure\n but before that you need to answer some Questions : \n");   //Joke prompt

	printf("A horriblle series of events occur,, Only one can live, Choose : \n\n");   //Q1.6
	printf("a- My best friend\n");
	printf("b- My spouse\n");
	printf("c- Me\n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid.\n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");
	printf("2- In a team, Who are you ? \n");   //Q1.7
	printf("a- The Leader. \n");
	printf("b-'That Guy'. \n");
	printf("c- Follower. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");
	printf("3- Do you consider your self healthy ? \n");   //Q1.8
	printf("a- I am TARZAN! ! \n");
	printf("b- I think im good enough. \n");
	printf("c- I am barely alive. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	printf("Ok you have done good so far, but now is the real test for your capability : \n");   //Real challege.,,

	printf("4- You got into a fight with a Bear/Lion. What happens ? \n");   //Q1.9
	sleep(3);
	printf("a- I will Die (Fighting with bear/Lion)\n");
	sleep(3);
	printf("b- I will Die (Hiding--In starvation)\n");
	sleep(3);
	printf("c- I will Die (Running away)\n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );

	system ("cls");
	printf("Congratulations for completing the game, Based on your answers (If you answerd \ntruthfully)\n\nThis is your Major personality type :\n ");
	//Congratulations message
	if (A > B && A > C)
		ans = 1;
	else if (B > A && B > C)
		ans = 2;
	else if (C > A && C > B) //Calculating the dominant personality trait
		ans = 3;
	else if (A == B || A == C || B == C)
		ans = 4 ;
	else
		ans = 5 ;
	return ans;
}
int advMetr ( void )   //Funtion for choice ==2 (ADVANCED METROPOLIS)
{
	char ch ;
	int ans;
	int A = 0;  //The program uses A, B and C to measure the player's Major Personalty type in the background ,
	int B = 0;   // Then returns the most dominant choice of the player through ans,, which shows the player their personality type.
	int C = 0;
	system("color 07");
	system ("cls");
	printf("Choose a location where you would like to go :\n");   //Q2.1
	printf("a- Silicon Valley/USA. \n");
	printf("b- Stockholm/Sweden. \n");
	printf("c- Tokyo/Japan. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{
			++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");


	printf("Why do you want to go there ?\n");   //Q2.2
	printf("a- For shopping \n");
	printf("b- Attend innovative talks. \n");
	printf("c- Find work. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Would you like to live in one of these cities ?\n");   //Q2.3
	printf("a- No, Too noisy. \n");
	printf("b- Yes, Great oppurtunities are in these cities. \n");
	printf("c- Maybe in my dreams. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Are you planning to take someone with you ?\n");   //Q2.4
	printf("a- No, I want to go alone. \n");
	printf("b- Yes, My tech savvy friends. \n");
	printf("c- Yes, Someone experienced to show me around. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Ok, You got on a flight to one of these cities,\n");
	printf("But the plane had to do an emergency landing, and now you are in\n");   //Accident
	printf("a village in the middle of -literally- nowhere with nothing at all..\n\n");


	printf("What is your recaction?\n");   //Q2.5
	printf("a- I want my money back >:(\n");
	printf("b- This would be fun. \n");
	printf("c- NOOOOOOOOO <:(\n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("HaHaHaHa, That was a bad joke. \n");   //Joke
	printf("Your flight landed safely and soundly without any problem :) \n");
	system("pause");
	system("cls");

	printf("So, what did you dress when you get off the plane ?\n");   //Q2.6
	printf("a- My National dress. \n");
	printf("b- The country's national dress. \n");
	printf("c- Suited-Up. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Based on your trip plan, Immidiately after landing you are going to...\n");   //Q2.7
	printf("a- The nearest resturant. \n");
	printf("b- The Electronics exibition. \n");
	printf("c- The hotel room--to sleep\n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("It is a Jam-Packed foreign city, how do you move around ?\n");   //Q2.8
	printf("a- Rent a car. \n");
	printf("b- Pre-book a taxi plan. \n");
	printf("c- Take the public transportation. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("You are now in your hotel room, amd you seem to have free time in your schedule, what are you going to do ?\n");   //Q2.9
	printf("a- Make connections/Work. \n");
	printf("b- Visit the landmarks. \n");
	printf("c- Sleep. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Before you do that, you start feel hungry,\n");
	printf("so you go from your hotel room to the nearest coffee shop\n");   //Road-crossing Event
	printf("which is across the street....\n\n");
	printf("But when you are crossing, you got a hit by a speeding car\n");
	printf("What do you do ?\n");   //Q2.10
	sleep(3);
	printf("a- Die (Quietlly)\n");
	sleep(3);
	printf("b- Die (Quickly)\n");
	sleep(3);
	printf("c- Die (Slowly)\n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Congratulations for completing the game, Based on your answers (If you answerd truthfully)\n\nThis is your Major personality type :\n ");
	//Congratulations message
	if (A > B && A > C)
		ans = 1;
	else if (B > A && B > C)
		ans = 2;
	else if (C > A && C > B) //Calculating the major personalty trait
		ans = 3;
	else if (A == B || A == C || B == C)
		ans = 4 ;
	else
		ans = 5 ;
	return ans;
}
int home ( void )    //Function for choice==3   (HOMESTAY)
{
	char ch ;
	int ans;
	int A = 0;  //The program uses A, B and C to measure the player's Major Personalty type in the background ,
	int B = 0;    // Then returns the most dominant choice of the player through ans,, which shows the player their personality type.
	int C = 0;
	system("color 0B");
	system ("cls");
	printf("Staying at home ha? Why is that ?\n");   //Q3.1
	printf("a- I didn't like the other options. \n");
	printf("b- I prefer Working/Studing. \n");
	printf("c- I am lazy. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Are you planning to visit someone or to be visited ?\n");   //Q3.2
	printf("a- Yes, My friends are coming over. \n");
	printf("b- Yes, I am planning both. \n");
	printf("c- No, I don't like people >:{   \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("So, how is your home like ?\n");   //Q3.3
	printf("a- It's okay. \n");
	printf("b- It's perfect. \n");
	printf("c- I hate it. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("What is the atmosphere of your home like ?\n");   //Q3.4
	printf("a- Loud and crazy. \n");
	printf("b- It gets a bit 'Loud' sometimes. \n");
	printf("c- Dead Quiet. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Do you keep your room clean ?\n");   //Q3.5
	printf("a- No, I hate cleaning. \n");
	printf("b- Ehh,,, sometimes <:D \n");
	printf("c- Yes, I do :) \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("In which part of the house do you most commonly spend your time ?\n");   //Q3.6
	printf("a- My Room. \n");
	printf("b- Living Room. \n");
	printf("c- Toilet. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("What do you do while you are in the home ?\n");   //Q3.7
	printf("a- Work/Study. \n");
	printf("b- Spend time with family. \n");
	printf("c- Sleep/Internet. \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Now imagine that while you are in the home,\n");
	printf("your dad comes and tells you that he is going to Germany,\n");   //Father event
	printf("for a business trip and you have to accompany him there,,  Right Now!!\n\n");
	system ("pause");
	printf("What is your reaction ?\n");   //Q3.8
	printf("a- I don't want go, Father. \n");
	printf("b- Sounds fun :) \n");
	printf("c- NOOOOO :( \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Whatever you say, your father takes you with him.\n");
	printf("You got on the plane and leave.\n");   //Flight event
	printf("During the flight, a rocket hits the plane....*BOOM*\n\n");
	system ("pause");
	printf("What are you going to do?\n");   //Q3.9
	sleep(3);
	printf("a- Die :( \n");
	sleep(3);
	printf("b- Die <:[ \n");
	sleep(3);
	printf("c- Die <:{ \n");
	do
	{

		scanf(" %c", &ch);
		if (ch == 'a')
		{
			++A;
			break;
		}
		else if (ch == 'b')
		{
			++B;
			break;
		}
		else if ( ch == 'c')
		{	++C;
			break;
		}
		else
		{
			printf("\aInvalid. \n");
			printf("Please insert a or b or c. \n");
		}
	} while (ch != 'a' || 'b' || 'c' );
	system ("cls");

	printf("Congratulations , You have completed the game\nNow based on your choices\n\n");
	printf("Your Major personality trait is : \n");
	//Congratulations message
	if (A > B && A > C)
		ans = 1;
	else if (B > A && B > C)
		ans = 2;
	else if (C > A && C > B) //Calculating the major personality Trait
		ans = 3 ;
	else if (A == B || A == C || B == C)
		ans = 4 ;
	else
		ans = 5 ;
	return ans;
}
void loading (void)    //Function for Loading\Welcoming screen
{
	int loader = 0;
	system("COLOR 80");
	printf("\n\n\n\n");
	printf("\t ||      || |||||||||| ||         ||           |||||||  \n");
	printf("\t ||      || ||         ||         ||          |||   ||| \n");
	printf("\t ||      || ||         ||         ||         ||||   ||||\n");
	printf("\t |||||||||| |||||||||| ||         ||         ||||   ||||\n");     //Strategically putting vertical bars into positsion to show "HELLO"
	printf("\t ||      || ||         ||         ||         ||||   ||||\n");
	printf("\t ||      || ||         ||         ||          |||   ||| \n");
	printf("\t ||      || |||||||||| |||||||||| ||||||||||   ||||||| \n");
	printf("\n\n");
	printf("\t\t\t\t LOADING ...\n\n");
	printf(" [\t\t\t\t\t\t\t\t\t]");
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");     //Going back to the brackett on the left
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	for (loader = 0 ; loader < 68 ; loader++) //filling the loading bar..
	{
		printf("*");
	}
	printf("\n\n\n");
	system("CLS");
}

