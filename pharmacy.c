
//-----___-----___-----___-----____
//                                 |
//  HealthCare Pharmacy            |
//  Pricing and Monitoring System  |
//                                 |
//_____---_____---_____---_____---_|

#include <stdio.h>
#include <curses.h>
#include <ctype.h>
#include <string.h>
#include "stdlib.h"

#define PIECES 50
#define DISCOUNT 0.03
#define MAXPWD 15

void details();
void add_item();
void search_item();
void search_by_brand();
void reports();
void main_header();
void pressany();
void date2day(int col, int row);
void next_page();
void log_in();
void menu();

char TypePassword[MAXPWD];

struct Drug
{
  char ItemCode[10];
  char BrandName[20];
  char Description[20];
  char Generic[20];
  char Manufacturer[20];
  char Indication[30];
  char ItemLoc[30];

  struct {
    float UnitPrice;
    float Sum;
    float BoxPrice;
    float totDiscount;
  } Prices;
};

struct User
{
  char currentUser[15];
  char currentPass[15];
  char Pharmacist[15];
  char *Pharmacist2;
  char PPassword[10];
  char *PPassword2;
  char Salesman[15];
  char *Salesman2;
  char *SPassword2;
  char SPassword[10];
};

struct Drug DrugRec;

struct User UserRec;

FILE *PharmacyFile, *TempFile;

char PharmacyFileDir[] = "Z:\\PHARMACY.DAT";
char TempFileDir[] = "Z:\\TEMP.DAT";

void main()
{
  log_in();
}

/* This is the main part of the program, the User's Log in */
void log_in()
{
  char UserAns;
  UserRec.Pharmacist2 = "pharmacist";
  UserRec.PPassword2 = "drug";
  UserRec.Salesman2 = "salesperson";
  UserRec.SPassword2 = "cash";
  strcpy(UserRec.Pharmacist, UserRec.Pharmacist2); /* assigning value     */
  strcpy(UserRec.Salesman, UserRec.Salesman2);     /* for the             */
  strcpy(UserRec.PPassword, UserRec.PPassword2);   /* username & password */
  strcpy(UserRec.SPassword, UserRec.SPassword2);   /*                     */
  clrscr();
  main_header();
  gotoxy(25, 8); printf("User's Log-In:");
  gotoxy(28, 10); printf("Username: ");
  gotoxy(28, 11); printf("Password: ");
  fflush(stdin); gotoxy(38, 10); gets(UserRec.currentUser); /* inputs the user name */
  fflush(stdin); gotoxy(38, 11); Password(38, 11);       /* then the password    */

  if (strcmp(UserRec.currentUser, UserRec.Pharmacist) == 0 && strcmp(TypePassword, UserRec.PPassword) == 0)
  {
    menu();
  }
  else if (strcmp(UserRec.currentUser, UserRec.Salesman) == 0 && strcmp(TypePassword, UserRec.SPassword) == 0)
  {
    menu();
  }
  else {
    gotoxy(20, 14); printf("Unknown Username & Password! ");
    gotoxy(20, 15); printf("Do you want to Log-in again? [Y]es/[N]o");
    UserAns = toupper(getche());
    switch (UserAns)
    {
    case 'Y':
      main();
      break;
    default:
      exit(1);
      break;
    }
  }
}
/***End**/


void pressany()
{
  gotoxy(51, 25); cprintf("<<press any key to continue>>");
  getch();
}

void main_header()
{
  int col;
  for (col = 3; col <= 78; col++) {
    gotoxy(col, 1); cprintf("Ä"); /* displays a horizontal line  */
    gotoxy(col, 3); cprintf("Ä"); /* at the top of the screen    */
    gotoxy(col, 25); cprintf("Ä");
  }
  gotoxy(30, 2); cprintf("HealthCare Pharmacy");
  date2day(60, 1);

}

//****Function to display the current date
void  date2day(int col, int row)
{
  struct Date d;
  getdate(&d);
  gotoxy(col, row); cprintf("[ Date: %d-%d-%d ]", d.da_day, d.da_mon, d.da_year);
}

void details()
{
  //These function displays the label for each input
  gotoxy(6, 8);  printf("Item Code                  :   ");
  gotoxy(6, 9);  printf("Generic Name               :   ");
  gotoxy(6, 10); printf("Brand Name                 :   ");
  gotoxy(6, 11); printf("Drug Indication            :   ");
  gotoxy(6, 12); printf("Description                :   ");
  gotoxy(6, 13); printf("Manufacturer's Name        :   ");
  gotoxy(6, 15); printf("Individual Price           : P ");
  gotoxy(6, 16); printf("Price per Box (50 Pieces)  : P ");
  gotoxy(6, 18); printf("Item Location              :   ");
}

void choices()
{
  gotoxy(3, 6); cprintf("[N]ew/Add Item ³ Search [I]temCode/[B]randName ³ [V]iew All  ³ [E]xit Program");
  gotoxy(3, 4); cprintf("Welcome, %s", UserRec.currentUser);
  gotoxy(3, 24); cprintf("[R]e-Log In");
  gotoxy(4, 6); cprintf("N"); gotoxy(28, 6); cprintf("I"); gotoxy(39, 6); cprintf("B");
  gotoxy(53, 6); cprintf("V"); gotoxy(67, 6); cprintf("E");
  gotoxy(4, 24); cprintf("R"); 
  gotoxy(3, 10); cprintf("Select your Choice: ");
}

void menu()
{
  //***** Enter choices from the main menu  *****/
  char UserChoice;
  do {
    clrscr();
    main_header();
    choices();
    gotoxy(23, 10);
    UserChoice = toupper(getche());
    if (isalpha(UserChoice))
    {
      switch (UserChoice)
      {
      case 'R':
        log_in();
        break;
      case 'N':
        if (strcmp(UserRec.currentUser, UserRec.Pharmacist) != 0)
        {
          gotoxy(23, 14); printf("Error:");
          gotoxy(26, 15); printf("You are not Allowed to Add!!");
          gotoxy(26, 16); printf("Please Log-in as Pharmacist..");
          pressany();
          getch();
        }
        else {
          add_item();
        }
        break;
      case 'I':
        if (strcmp(UserRec.currentUser, UserRec.Pharmacist) != 0)
        {
          gotoxy(23, 14); printf("Error:");
          gotoxy(26, 15); printf("You are not Allowed to Search by Item!!");
          gotoxy(26, 16); printf("Please Log-in as Pharmacist..");
          pressany();
          getch();
        }
        else {
          search_item();
        }
        break;
      case 'V':
        reports();
        break;
      case 'B':
        search_by_brand();
        break;
      case 'E':
        exit(1);
        break;
      default:
        gotoxy(16, 16); printf("Error:");
        gotoxy(19, 17);
        printf("Please select the letters enclosed with [brackets] only!");
        pressany();
      }
    }
    else {
      gotoxy(20, 16); printf("Error: Please select letters only!.");
      pressany();
    }
  } while (UserChoice != 'E');
}

/** Function to hide the characters of the password */
/** being typed, and replace it with asterisk(*)    */
int Password(int col, int row)
{
  char letter;
  int index = 0, lcontinue = 1;
  do {
    letter = getch();
    if (letter != 13 && letter != '\b' && index < MAXPWD) {
      gotoxy(col, row); printf("*");
      TypePassword[index] = letter;
      index++;
      col++;
    }
    if (letter == '\b' && index != 0) {
      col--;
      gotoxy(col, row); printf(" ");
      gotoxy(col, row);
      TypePassword[index] = '\b';
      index--;
    }
    if (letter == 13)
      lcontinue = 0;
  } while (lcontinue);
  return 0;
}
/**** End of Function ***/


/** Function for adding a new item in the pharmacy**/
void add_item()
{
  char UserAns;
  int Result;
  clrscr();
  gotoxy(3, 6); printf("ADD NEW ITEM");
  main_header();
  details();
  PharmacyFile = fopen(PharmacyFileDir, "r");
  fclose(PharmacyFile);
  gotoxy(3, 4); printf("Welcome, %s", UserRec.currentUser);
  fflush(stdin); gotoxy(35, 8); gets(DrugRec.ItemCode);
  fflush(stdin); gotoxy(35, 9); gets(DrugRec.Generic);
  fflush(stdin); gotoxy(35, 10); gets(DrugRec.BrandName);
  fflush(stdin); gotoxy(35, 11); gets(DrugRec.Indication);
  fflush(stdin); gotoxy(35, 12); gets(DrugRec.Description);
  fflush(stdin); gotoxy(35, 13); gets(DrugRec.Manufacturer);
  fflush(stdin); gotoxy(37, 15); scanf("%f", &DrugRec.Prices.UnitPrice);

  if (DrugRec.Prices.UnitPrice == 0)
  {
    gotoxy(23, 20); printf("Some of the data that you have entered");
    gotoxy(23, 21); printf("are INVALID or some fields are EMPTY");
    gotoxy(23, 22); printf("Try again? [Y]es/[N]o or press any key to Exit");
    UserAns = toupper(getche());
    switch (UserAns)
    {
    case 'Y':
      add_item();
      break;
    default:
      menu();
      break;
    }
  }
  else {
    //******* Calculates the discount ***************************************//

    DrugRec.Prices.Sum = DrugRec.Prices.UnitPrice * PIECES;
    DrugRec.Prices.totDiscount = DrugRec.Prices.Sum * DISCOUNT;
    DrugRec.Prices.BoxPrice = DrugRec.Prices.Sum - DrugRec.Prices.totDiscount;

    //******* End of Calculation *******************************************//

    fflush(stdin); gotoxy(37, 16); printf("%0.2f", DrugRec.Prices.BoxPrice);
    fflush(stdin); gotoxy(35, 18); gets(DrugRec.ItemLoc);
    gotoxy(23, 21); printf("Save Current Item? [Y]es/[N]o");
    gotoxy(23, 22); printf("Or Press [C] to Clear All Fields");
    UserAns = toupper(getche());

    if (UserAns == 'Y')
    {
      PharmacyFile = fopen(PharmacyFileDir, "a+");
      if (PharmacyFile != NULL)
      {
        if (!FindItemCode(DrugRec.ItemCode, 0))
        {
          if (fwrite(&DrugRec, sizeof(DrugRec), 1, PharmacyFile)) {
            gotoxy(23, 22); clreol(); gotoxy(23, 21); clreol();
            gotoxy(25, 21); cprintf("|| Item has been Saved!.||");
          }
          else
          {
            gotoxy(23, 22); clreol(); gotoxy(23, 21); clreol();
            gotoxy(27, 20); cprintf("Error: Item Cannot be Saved!.");
          }
        }
        else
        {
          gotoxy(23, 22); clreol(); gotoxy(23, 21); clreol();
          gotoxy(27, 21); cprintf("Error: Item Code is already in use.");
        }
      }
      else
      {
        gotoxy(23, 22); clreol(); gotoxy(23, 21); clreol();
        gotoxy(27, 21); cprintf("Error: Cannot Open the File.");
      }
    }
    else if (UserAns == 'C')
      add_item();

    else  {
      gotoxy(23, 22); clreol(); gotoxy(23, 21); clreol();
      gotoxy(27, 21); cprintf("|| Saving Canceled! ||");
    }
  }
  pressany();
  fclose(PharmacyFile);
}
/*End of Function*/


/** Function that searches a specific */
/** item by entering the brand name     */
void search_by_brand()
{
  char UserAns, FindCode[10];
  char UserChoice;
  struct Drug UpdateDrugRec;
  int EndOfFile, Found = 0;
  clrscr();
  main_header();
  gotoxy(3, 6); printf("SEARCH BY BRAND NAME (CaSe SenSiTivE)");
  details();
  gotoxy(3, 4); printf("Welcome, %s", UserRec.currentUser);
  fflush(stdin); gotoxy(35, 10); gets(FindCode);
  PharmacyFile = fopen(PharmacyFileDir, "r");
  if (PharmacyFile != NULL)
  {
    fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
    while (!feof(PharmacyFile) && Found == 0 )
    {
      if (strcmp(FindCode, DrugRec.BrandName) == 0 )
      {
        gotoxy(35, 8); printf(DrugRec.ItemCode);
        gotoxy(35, 9); printf(DrugRec.Generic);
        gotoxy(35, 11); printf(DrugRec.Indication);
        gotoxy(35, 12); printf(DrugRec.Description);
        gotoxy(35, 13); printf(DrugRec.Manufacturer);
        gotoxy(37, 15); printf("%0.2f", DrugRec.Prices.UnitPrice);
        gotoxy(37, 16); printf("%0.2f", DrugRec.Prices.BoxPrice);
        gotoxy(35, 18); printf(DrugRec.ItemLoc);
        Found = 1;
      }
      fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
    }
  }
  fclose(PharmacyFile);
  if (!Found)
  {
    gotoxy(27, 21); printf("Item Cannot be Found!!!");
    gotoxy(27, 22); cprintf("Search Again? [Y]es/[N]o");
    UserAns = toupper(getche());
    if (UserAns == 'Y')  {
      search_by_brand();
    }
    else {
      menu();
    }
  }
  if (Found)
  {
    gotoxy(27, 22); cprintf("Search Again? [Y]es/[N]o");
    UserAns = toupper(getche());
    if (UserAns == 'Y')  {
      search_by_brand();
    }
    else {
      menu();
    }

  }
}
/* End */

/** Function that searches a specific */
/** item by entering the ItemCode     */
void search_item()
{
  char UserAns, FindCode[10];
  char UserChoice;
  struct Drug UpdateDrugRec;
  int EndOfFile, Found = 0;
  clrscr();
  main_header();
  gotoxy(3, 6); printf("SEARCH ITEM");
  details();
  gotoxy(3, 4); printf("Welcome, %s", UserRec.currentUser);
  fflush(stdin); gotoxy(35, 8); gets(FindCode);
  PharmacyFile = fopen(PharmacyFileDir, "r");
  if (PharmacyFile != NULL)
  {
    fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
    while (!feof(PharmacyFile) && Found == 0 )
    {
      if (strcmp(FindCode, DrugRec.ItemCode) == 0 )
      {
        gotoxy(35, 9); printf(DrugRec.Generic);
        gotoxy(35, 10); printf(DrugRec.BrandName);
        gotoxy(35, 11); printf(DrugRec.Indication);
        gotoxy(35, 12); printf(DrugRec.Description);
        gotoxy(35, 13); printf(DrugRec.Manufacturer);
        gotoxy(37, 15); printf("%0.2f", DrugRec.Prices.UnitPrice);
        gotoxy(37, 16); printf("%0.2f", DrugRec.Prices.BoxPrice);
        gotoxy(35, 18); printf(DrugRec.ItemLoc);
        Found = 1;
      }
      fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
    }
  }
  fclose(PharmacyFile);
  if (!Found)
  {
    gotoxy(28, 21); printf("Item Cannnot be Found!!!"); /* displays when a certain*/
    gotoxy(28, 22); cprintf("Search Again? [Y]es/[N]o"); /* item is not found      */
    UserAns = toupper(getche());
    if (UserAns == 'Y')  {
      search_item();
    }
    else {
      menu();
    }
  }
  if (Found)
  {
    gotoxy(21, 21); cprintf("What would you like to do with this record?");
    gotoxy(21, 22); cprintf("[U]pdate, [D]elete or press Any key to return to Main");
    UserChoice = toupper(getche());
    switch (UserChoice)
    {
    case 'U':
      gotoxy(21, 22); clreol(); gotoxy(21, 21); clreol();
      gotoxy(25, 21); cprintf("   Update Item? [Y]es/[N]o:");
      UserAns = toupper(getche());
      if (UserAns == 'Y')
      {
        gotoxy(25, 21); clreol();
        fclose(PharmacyFile);
        fflush(stdin); gotoxy(37, 15); scanf("%f", &UpdateDrugRec.Prices.UnitPrice);
        gotoxy(25, 21); cprintf("Save?  [Y]es/[N]o   ");
        UserAns = toupper(getche());
        if (UserAns == 'Y')
        {
          if (!FindItemCode(UpdateDrugRec.ItemCode))
          {
            PharmacyFile = fopen(PharmacyFileDir, "r");
            TempFile = fopen(TempFileDir, "a+");
            do {
              fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
              if (!feof(PharmacyFile)) {
                if (strcmp(FindCode, DrugRec.ItemCode) != 0) {
                  fwrite(&DrugRec, sizeof(DrugRec), 1, TempFile);
                  EndOfFile = 1;
                } else {
                  DrugRec.Prices.Sum = DrugRec.Prices.UnitPrice * PIECES;
                  DrugRec.Prices.totDiscount = DrugRec.Prices.Sum * DISCOUNT;
                  DrugRec.Prices.BoxPrice = DrugRec.Prices.Sum - DrugRec.Prices.totDiscount;

                  /***Overwrites the Current Record  */
                  UpdateDrugRec.Prices.Sum = UpdateDrugRec.Prices.UnitPrice * PIECES;
                  UpdateDrugRec.Prices.totDiscount = UpdateDrugRec.Prices.Sum * DISCOUNT;
                  UpdateDrugRec.Prices.BoxPrice = UpdateDrugRec.Prices.Sum - DrugRec.Prices.totDiscount;

                  DrugRec.Prices.UnitPrice = UpdateDrugRec.Prices.UnitPrice;
                  DrugRec.Prices.BoxPrice = UpdateDrugRec.Prices.BoxPrice;
                  fwrite(&DrugRec, sizeof(DrugRec), 1, TempFile);
                }
              } else
                EndOfFile = 0;
            } while (EndOfFile);

            fcloseall();
            if (remove(PharmacyFileDir) == 0) {
              rename(TempFileDir, PharmacyFileDir);
              gotoxy(25, 21); clreol(); gotoxy(22, 21); cprintf(" || Item has been Updated! ||");
            }
            else {
              gotoxy(22, 21); printf("Error occurs during update..");
            }
          }
          else
          {  gotoxy(22, 21); printf("ItemCode already in use.");}
        }
        else
        {gotoxy(25, 21); clreol(); gotoxy(22, 21); printf("   || Updating Cancelled. ||");}
      }
      else
      {gotoxy(25, 21); clreol(); gotoxy(20, 21); printf("   || Updating Cancelled ||");}

      pressany();
      break;

    case 'D':
      gotoxy(21, 22); clreol(); gotoxy(21, 21); clreol();
      /*Function to Delete a specific item*/
      gotoxy(21, 21); printf("Delete this Item? [Y]es/[N]o: ");
      UserAns = toupper(getche());
      if (UserAns == 'Y')
      {
        PharmacyFile = fopen(PharmacyFileDir, "r");
        TempFile = fopen(TempFileDir, "w");
        do {
          fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
          if (!feof(PharmacyFile)) {
            if (strcmp(FindCode, DrugRec.ItemCode) != 0)
              fwrite(&DrugRec, sizeof(DrugRec), 1, TempFile);
            EndOfFile = 1;
          }
          else
            EndOfFile = 0;
        } while (EndOfFile);
        fcloseall();
        if (remove(PharmacyFileDir) == 0) {
          rename(TempFileDir, PharmacyFileDir);
          gotoxy(21, 21); clreol();
          gotoxy(23, 21); printf("|| Item has been Deleted! ||");
        }
        else {
          gotoxy(21, 21); clreol();
          gotoxy(23, 21); printf("Error occurs during deletion..");
        }
      }
      else
      {
        gotoxy(21, 21); clreol();
        gotoxy(23, 21); printf("  Deletion Canceled.");
      }
      pressany();
      break;
    default:
      break;
    }
  }
}



void reports()
{
  int r, row = 7;
  int page = 1;
  clrscr();
  for (r = 3; r <= 78; r++) {
    gotoxy(r, 4); printf("-");
    gotoxy(r, 6); printf("-");
  }
  gotoxy(3, 5); printf("ItemCode"); gotoxy(15, 5); printf("GenericName");
  gotoxy(40, 5); printf("BrandName"); gotoxy(55, 5); printf("UnitPrice");
  gotoxy(69, 5); printf("Per Box");
  main_header();
  gotoxy(3, 3); printf("³ List of all Items");
  PharmacyFile = fopen(PharmacyFileDir, "r");
  fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
  while (!feof(PharmacyFile))
  {
    gotoxy(3, row); printf(DrugRec.ItemCode);
    gotoxy(15, row); printf(DrugRec.Generic);
    gotoxy(40, row); printf(DrugRec.BrandName);
    gotoxy(55, row); printf("P %0.2f", DrugRec.Prices.UnitPrice);
    gotoxy(69, row); printf("P %0.2f", DrugRec.Prices.BoxPrice);
    gotoxy(3, 25); cprintf("Page %d", page);
    row++;
    if (row == 23)
    {
      pressany();
      getch();
      row = 7;
      page++;
      next_page();
    }
    fread(&DrugRec, sizeof(DrugRec), 1, PharmacyFile);
  }
  pressany(20, 25);

}

void next_page()
{
  int r;
  clrscr();
  for (r = 3; r <= 78; r++) {
    gotoxy(r, 4); printf("-");
    gotoxy(r, 6); printf("-");
  }
  gotoxy(3, 5); printf("ItemCode"); gotoxy(15, 5); printf("GenericName");
  gotoxy(40, 5); printf("BrandName"); gotoxy(55, 5); printf("UnitPrice");
  gotoxy(69, 5); printf("Per Box");
  main_header();
  gotoxy(3, 3); cprintf("³ List of all Items");
}

int FindItemCode(char FindCode[10], int FindOp)
{
  int CodeFound = 0;
  struct Drug FindRec;
  FILE *SearchFile;
  SearchFile = fopen(PharmacyFileDir, "r");
  if (SearchFile != NULL)
  {
    while (!feof(SearchFile) && CodeFound == 0)
    {
      fread(&FindRec, sizeof(FindRec), 1, SearchFile);
      if (!FindOp)
        if (strcmp(FindCode, FindRec.ItemCode) == 0)
          CodeFound = 1;
        else if (FindRec.ItemCode != FindCode)
          if (strcmp(FindCode, FindRec.ItemCode) == 0)
            CodeFound = 1;
    }
  }
  return CodeFound;
}

