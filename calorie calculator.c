#include<stdio.h>
int check(void);
float t_single_bill(void);
float t_double_bill(void);
void  registration(void);
float display bill(single_bill, double_bill);
void coustomer_information(single, double);

int main()
 {
	int s_choice, confirm, f_confirm;
	int days, t_single_bill, x;
	int password;
	
	printf("Welcome to UIA Hotel\n");
	printf("****************\n\n");
	pritntf("| The Description |");
	printf("Press <1> for customer and <2> for staff\n");
	scanf("%d", &s_choice);
	
	do {
		if (s_choice == 1){
			printf("Press <1> to continue and <2> to Cancel\n");
			scanf("%d", &f_confirm);
			if( f_confirm == 1) {
				days=check();
				printf("the number of days are %d\n",days);
				t_single_bill=single_room(days);
				t_double_bill=double_room(days);
				registration();
				printf("Press <1> to confirm and <2> to cancel\n");
				scanf("%d",&x);
			}
			else
			continue;
		}
		else 
		{
			printf("Press <1> to continue and <2> to Cancel\n");
			scanf("%d", &f_confirm);
			printf("Enter your password:");
			scanf("%d", &password);
			while ( password == 1234)
			coustomer_information(single, double);
		}
	} 
	while (confirm != 1);
	display bill(single_bill, double_bill);
	system("pause");
	return 0;	
}




