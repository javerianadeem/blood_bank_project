
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void menu();

void addacceptor();
void displayacceptor();
void searchacceptor();   // FUNCTIONS FOR BLOOD ACCEPTORS //
void editacceptor();
void delacceptor();
void countacceptor();

void adddonor();
void displaydonor();
void editdonor();       
void searchdonor();      // FUNCTIONS FOR BLOOD DONORS //
void deldonor();
void countdonor();

void see1();
void see2();
void see3();
void see4();            //FUNCTIONS FOR BLOOD AVAILIBITY
void see5();
void see6();
void see7();
void see8();


int getVisitorId();
void setVisitorId(int);

struct acceptor
{
	char gender[3];
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	float accepted;
};
typedef struct acceptor y;

struct donor
{
	char gender[3];
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	float donated;
};
typedef struct donor z;

//main function

int main()
{
	char m,n,o,p,q,r,s,t;
	char ch;
	puts("ENTER PASSWORD HERE TO ACCESS(8-digit)\n\n\n");
	puts("OR\n");
	puts("TYPE 'e' TO EXIT\n");
	printf("press enter twice and start typing password\n\n");
	getche();
	system("cls");
	if (getch()=='e')
	{
	exit(0);
}
	else
	{
	m=getch();
	printf("*");
	n=getch();
	printf("*");
	o=getch();
	printf("*");
	p=getch();
	printf("*");
	q=getch();
	printf("*");
	r=getch();
	printf("*");
	s=getch();
	printf("*");
	t=getch();
	printf("*");
	
	}
	if(m=='p' && n=='a' && o=='s' && p=='$' && q=='w' && r=='o' && s=='r' && t=='d')
	{
	puts("\nYOU ARE WELCOME\n\n");
	puts("PLEASE PRESS ENTER");
	getch();
	system("cls");
	}
	else
	{
	puts("\nINCORRECT PASSWORD\n");
	puts("TRY AGAIN\n");
	puts("TYPE 'e' TO EXIT\n");
	main();
	}
	main:
	
	{
			
        menu();
    }
	
}

void menu()

{	
    int choice;
	char ch;
	while(TRUE)
	
	{
		system("cls");
	    printf("\n\n******************************************");
		printf("\n********  WELCOME TO BLOOD BANK  *******");
		printf("\n******************************************");
		printf("\n\n1] Blood Acceptor's Record\n\n");
		printf("2] Blood Donor's Record\n\n");
		printf("3] Blood Avalaibility\n\n");
		printf("4] Exit\n\n");
		printf("Enter your choice \n\n");
		scanf("%d",&choice);
		fflush(stdin);
	
	switch(choice)
	{
		case 1:
			{
				system("cls");
				while(TRUE)
				{
					system("cls");
				
					printf("\n\n\nYou are in blood accepting patients record\n\n ");
					printf("\n'a' to add record\n");
					printf("'b' to display record\n");
					printf("'c' to search record\n");
					printf("'d' to count record\n");
					printf("'e' to edit record\n");
					printf("'f' to delete record\n");
					printf("'g' to exit\n");
					printf("Your choice?\n");
					ch=getch();
					switch(ch)
					{
						case 'a':
						addacceptor();
						break;
						case 'b':
						displayacceptor();
						break;
						case 'c':
						searchacceptor();
						break;
						case 'd':
						countacceptor();
						break;
						case 'e':
						editacceptor();
						break;
						case 'f':
						delacceptor();
						break;
						case 'g':
						menu();
						break;
						default:
						printf("Please select the options mentioned in list");
						break;
					}
				}
			}
			
		case 2:
		{
			system("cls");
			while(TRUE)
			{
				system("cls");
				printf("\n\nYou are in blood donors record\n\n\n");
				printf("Type 'a' to add record\n");
				printf("Type 'b' to display record\n");
				printf("Type 'c' to search record\n");
				printf("Type 'd' to count record\n");
				printf("Type 'e' to edit record\n");
				printf("Type 'f' to delete record\n");
				printf("Type 'g' to exit\n");
				printf("Your choice?\n");
				ch=getch();
				switch(ch)
				{
					case 'a':
					adddonor();
					break;
					case 'b':
					displaydonor();
					break;
		 			case 'c':
					searchdonor();
					break;
					case 'd':
					countdonor();
					break;
					case 'e':
					editdonor();
					break;
					case 'f':
					deldonor();
					break;
					case 'g':
					menu();
					break;
					default:
					printf("Please select the options mentioned in list");
					break;
				}
			}
			  
		}
			
        case 3:
        	{
        		system("cls");
				while(TRUE)
				{
					system("cls");
				printf("\n\nCHECKING BLOOD AVAILABILTY\n\n\n");
				printf("Type 'a' to see 'A+' bloodgroup availiabilty\n");
				printf("Type 'b' to see 'B+' bloodgroup availiabilty\n");
				printf("Type 'c' to see 'A-' bloodgroup availiabilty\n");
				printf("Type 'd' to see 'B-' bloodgroup availiabilty\n");
				printf("Type 'e' to see 'AB+' bloodgroup availiabilty\n");
				printf("Type 'f' to see 'AB-' bloodgroup availiabilty\n");
				printf("Type 'g' to see 'O+' bloodgroup availiabilty\n");
				printf("Type 'h' to see 'O-' bloodgroup availiabilty\n");
				printf("Type 'i' to exit\n");
				printf("Your choice?\n");
				ch=getch();
				switch(ch)
				{
					case 'a':
					see1();
					break;
					case 'b':
					see2();
					break;
		 			case 'c':
					see3();
					break;
					case 'd':
					see4();
					break;
					case 'e':
					see5();
					break;
					case 'f':
					see6();
					break;
					case 'g':
					see7();
					break;
					case 'h':
					see8();
					break;
					case 'i':
					menu();
					break;	
					default:
					printf("Please select the options mentioned in list");
					break;
				}
			}
			  
		}
        
        case 4:
        	{
        		system("cls");
				while(TRUE)
				{
        			exit(0);
        			break;
        		}
        	}
        	
		default:
		printf("Please select the options mentioned in list");
			}
	}
}
/************************************************************/
/*    THIS FUNCTION ADDS A RECORD TO ACCEPTORS DATABASE      */
/************************************************************/


void addacceptor()
{
	system("cls");
	FILE *fp;
	y acc;
	int flag = 0;
	int temp=0;
	char bloodgroup[5];
	printf("ADD BLOOD ACCEPTORS RECORD\n\n");
	fp=fopen("acceptor.txt","ab");
	do
	{
	printf("\nEnter acceptors name : ");
	gets(acc.name);
	
		do
		{
		printf("Enter acceptor's gender [M/F] : ");
		gets(acc.gender);
		if(strcmp(acc.gender,"M")==0)
			temp=1;
		if(strcmp(acc.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
	printf("\nEnter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	int visitor_id = getVisitorId();
	visitor_id++;
	itoa (visitor_id , acc.id , 10);
	printf("Your Id : %s", acc.id);
	setVisitorId(visitor_id);
	
	do{
	printf("\nEnter blood group in Capital letters : ");
	gets(acc.bloodgroup);
		if (strcmp(acc.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(acc.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(acc.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered Invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", acc.bloodgroup);
		break;
		}
		}
		while(TRUE);
	printf("\nEnter amount of accepted blood in millilitres (format : 500) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
	fwrite(&acc,sizeof(acc),1,fp);
	printf("Do you want to add another record (y/n)?\n\n");
	}
	while(getche()=='y');
	fclose(fp);
	getche();
	system("cls");
	}


/***********************************************************/
/*    THIS FUNCTION ADDS A RECORD TO DONORS DATABASE     */
/***********************************************************/


	void adddonor()
	{
		system("cls");
	z don;
	int flag = 0;
	int temp=0;
	char bloodgroup[5];
	char gender[3];
	FILE *fp1;
	fp1=fopen("donor.txt","ab");
	do
	{
		printf("\nEnter donors name : ");
		gets(don.name);
		do
		{
		printf("Enter donor's gender [M/F] : ");
		gets(don.gender);
		if(strcmp(don.gender,"M")==0)
			temp=1;
		if(strcmp(don.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
		printf("\nEnter age : ");
		scanf("%d",&don.age);
		fflush(stdin);
		int visitor_id = getVisitorId();
		visitor_id++;
		itoa (visitor_id , don.id , 10);
		printf("Your Id : %s", don.id);
		setVisitorId(visitor_id);
		
		do{
		printf("\nEnter blood group in capital letters : ");
		gets(don.bloodgroup);
		if (strcmp(don.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(don.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(don.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered a invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", don.bloodgroup);
		break;
	   }
}
	   while(TRUE);
		printf("Enter amount of donated blood in ml (format : 500) : ");
		scanf("%f",&don.donated);
		fflush(stdin);
		fwrite(&don,sizeof(don),1,fp1);
		printf("Do you want to add another record (y/n)?\n\n");
	}
    while(getche()=='y');
	fclose(fp1);
	getche();
	system("cls");
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


void displayacceptor()


{
	system("cls");
	y acc;
	FILE *fp;
	fp=fopen("acceptor.txt","rb");
    if (fp == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&acc,sizeof(acc),1,fp)>0)
	{
	printf("Acceptors name : %s\n",acc.name);
	printf("Gender : %s\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in millilitres(ml) : %.2fml\n\n\n",acc.accepted);
	}
	fclose(fp);
	getche();
	system("cls");
	}


/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN DONORS DATABASE     */
/*****************************************************************/


void displaydonor()
{
	system("cls");
	z don;
	FILE *fp1;
	fp1=fopen("donor.txt","rb");
    if (fp1 == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&don,sizeof(don),1,fp1)>0)
	{
	printf("Donors name : %s\n",don.name);
	printf("Gender : %s\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in millilitres(ml) : %.2fml\n\n\n",don.donated);
	}
	fclose(fp1);
	getche();
	system("cls");
	}


/*****************************************************************/
/*    THIS FUNCTION SEARCHES A RECORD IN ACCEPTORS DATABASE     */
/*****************************************************************/


void searchacceptor()
{
	system("cls");
	FILE *fp;
	char id[20];
    y acc;
    do
	{
    fp=fopen("acceptor.txt","rb");
    if((fp==NULL)||(fread(&acc,sizeof(y),1,fp)==0))
	   printf("There is no record in Acceptors Data Base");
	else
	{
	    rewind(fp);
	printf("\n\nEnter the blood acceptors id to search: ");
    gets(id);
	}
while(fread(&acc,sizeof(acc),1,fp)==1)
{
    if((strcmp(acc.id,id))==0)
	{
	printf("Acceptors name : %s\n",acc.name);
	printf("Gender : %s\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in litres : %.2fml\n\n\n",acc.accepted);
	break;
	}
	}
    if((strcmp(acc.id,id))!=0)
	{
	printf("\nSorry Record not found");
	}
	printf("\nDo you want to search another record (y/n)?\n");
	}
	while(getche()=='y');
	fclose(fp);
	getche();
	system("cls");
	}


/*****************************************************************/
/*      THIS FUNCTION SEARCHES A RECORD IN DONORS DATABASE     */
/*****************************************************************/


void searchdonor()
{
	system("cls");
	FILE *fp1;
	char id[20];
    z don;
    do
	{
    fp1=fopen("donor.txt","rb");
    if((fp1==NULL)||(fread(&don,sizeof(z),1,fp1)==0))
	   printf("There is no record in Donors Data Base");
	else
	{
	rewind(fp1);
	printf("\n\nEnter the blood donors id to search: ");
    gets(id);
	}
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.id,id))==0)
	{
	printf("Donors name : %s\n",don.name);
	printf("Gender : %s\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in litres : %.2fml\n\n\n",don.donated);
	break;
	}
	}
	if((strcmp(don.id,id))!=0)
	{
	printf("\nSorry Record not found");
	}
	printf("\nDo you want to search another record (y/n)?\n");
	}
	while(getche()=='y');
	fclose(fp1);
	getche();
	system("cls");
	}


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN ACCEPTORS DATABASE      */
/*****************************************************************/

void editacceptor()
{
	system("cls");
	char id[20];
	FILE *fp;
	y acc;
	int test=0,temp=0,flag=0;
	do
	{
	fp=fopen("acceptor.txt","rb+");
	printf("\n\nEnter the blood acceptors id to search: ");
    gets(id);
	long int offset=sizeof(y);
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.id,id))==0)
	{
	printf("EDIT RECORD\n");
	printf("\nEnter acceptors name : ");
	gets(acc.name);
		do
		{
		printf("Enter acceptor's gender [M/F] : ");
		gets(acc.gender);
		if(strcmp(acc.gender,"M")==0)
			temp=1;
		if(strcmp(acc.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
	printf("\nEnter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("id : %d ",acc.id);
	//gets(acc.id);
	do{
	printf("\nEnter blood group : ");
	gets(acc.bloodgroup);
		if (strcmp(acc.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(acc.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(acc.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered Invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", acc.bloodgroup);
		break;
		}
		}
		while(TRUE);
	printf("\nEnter amount of accepted blood in millilitres (format : 500) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
	
	fseek(fp,-offset,SEEK_CUR);
	fwrite(&acc,sizeof(y),1,fp);
	test=2;
	break;
	}
	}
	if(test==0)
	printf("\nSorry Record not found");
	fclose(fp);
	printf("\nDo you want to edit another record (y/n)? ");
	}
	while(getche()=='y');
	getche();
	system("cls");
	}


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN DONORS DATABASE       */
/*****************************************************************/


void editdonor()
{
	system("cls");
	char id[20];
	FILE *fp1;
	z don;;
	int test=0,temp=0,flag=0;
	do
	{
	fp1=fopen("donor.txt","rb+");
	printf("\n\nEnter the blood donors id to search: ");
    gets(id);
	long int offset=sizeof(z);
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.id,id))==0)
	{
	printf("EDIT RECORD\n");
	printf("\nEnter donors name : ");
		gets(don.name);
		do
		{
		printf("Enter donor's gender [M/F] : ");
		gets(don.gender);
		if(strcmp(don.gender,"M")==0)
			temp=1;
		if(strcmp(don.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
		printf("\nEnter age : ");
		scanf("%d",&don.age);
		fflush(stdin);
		printf("Enter id : ");
		gets(don.id);
		do{
		printf("\nEnter blood group : ");
		gets(don.bloodgroup);
		if (strcmp(don.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(don.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(don.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered a invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", don.bloodgroup);
		break;
	   }
}
	   while(TRUE);
		printf("Enter amount of donated blood in ml (format : 500) : ");
		scanf("%f",&don.donated);
		fflush(stdin);
		
	fseek(fp1,-offset,SEEK_CUR);
	fwrite(&don,sizeof(z),1,fp1);
	test=2;
	break;
	}
	}
	if(test==0)
	printf("\nSorry Record not found");
	fclose(fp1);
	printf("\nEdit another record (y/n)?");
	}
	while (getche()=='y');
	getche();
	system("cls");
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM ACCEPTORS DATABASE     */
/*****************************************************************/


void delacceptor()
{
	system("cls");
	FILE *fp;
	FILE *pt;
	y acc1;
	char id[20];
	do 
	{
		int found=0;
		fp=fopen("acceptor.txt", "rb");
		if (!fp) {
			printf("Unable to open file ");}
	
		pt=fopen("tmp.bin", "wb");
		rewind(fp);
		
		printf("Enter id: \t");
		gets(id);
		while (fread(&acc1,sizeof(y),1,fp) != NULL)
		 {
			if (strcmp (acc1.id,id) == 0)
			 {
				printf("A record with requested id found and deleted.\n\n");
				found=1;
			} 
			else
		    {
				fwrite(&acc1, sizeof(y), 1, pt);
			}
		}
		if (! found) {
			printf("\nNo record found with the requested id");
			break;}
		
	
		fclose(fp);
		fclose(pt);
	
		remove("acceptor.txt");
		rename("tmp.bin", "acceptor.txt");
		printf("\nIf you want to delete another record press 'y' otherwise press any key to continue\n");
}
while(getche()=='y');
	getche();
	system("cls");
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM DONORS DATABASE     */
/*****************************************************************/


void deldonor()
{
	system("cls");
	FILE *fp1;
	FILE *pt1;
	char id[20];
	z don1;
	do
	{
		int found=0;
		fp1=fopen("donor.txt", "rb");
		if (!fp1) {
			printf("Unable to open file ");
			}
	
		pt1=fopen("temp.bin", "wb");
		rewind(fp1);
		
		printf("Enter id: \t");
		gets(id);
		while (fread(&don1,sizeof(z),1,fp1) != NULL)
		 {
			if (strcmp (don1.id,id) == 0)
			 {
				printf("\nA record with requested id found and deleted.\n\n");
				found=1;
			} 
			else
		    {
				fwrite(&don1, sizeof(z), 1, pt1);
			}
		}
		if (! found) {
			printf("\nNo record found with the requested id");
			break;
			}
		
	
		fclose(fp1);
		fclose(pt1);
	
		remove("donor.txt");
		rename("temp.bin", "donor.txt");
		printf("\nIf you want to delete another record press 'y' otherwise press any key to continue\n");
	}
	while(getche()=='y');
	
	getche();
	system("cls");
	}


/*****************************************************************/
/*    THIS FUNCTION COUNTS ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


void countacceptor()
{
	system("cls");
	int *p;
	int counter=0;
	FILE *fp;
	y acc;
	p = &counter;
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	(*p)++;
	}
	printf("\nTotal number of records in acceptors data base = %d ",*p);
	fclose(fp);
	getche();
	system("cls");
	}
	
	
/*****************************************************************/
/*     THIS FUNCTION COUNTS ALL RECORDS IN DONORS DATABASE       */
/*****************************************************************/


void countdonor()
{
	system("cls");
	int *q;
	int counter1=0;
	FILE *fp1;
	z don;;
	q = &counter1;
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	(*q)++;
	}
	printf("\nTotal number of records in acceptors data base = %d ",*q);
	fclose(fp1);
	getche();
	system("cls");
}

/*****************************************************************/
/*     THIS FUNCTION CHECKS BLOOD AVAILABILITY IN BLOOD BANK     */
/*****************************************************************/
void see1()          // FOR A+
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup A+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{  
		if((strcmp(acc.bloodgroup,"A+"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"A+"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group A+ is = %.2fml",total);
	getche();
	system("cls");
}


void see2()          // FOR B+
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup B+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"B+"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"B+"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group B+ is = %.2fml",total);
	getche();
	system("cls");
}

void see3()          // FOR A-
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup A- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"A-"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"A-"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group A- is = %.2fml",total);
	getche();
}

void see4()          // FOR B-
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup B- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"B-"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"B-"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group B- is = %.2fml",total);
	getche();
	system("cls");
}

void see5()          // FOR AB+
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup AB+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"AB+"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"AB+"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group AB+ is = %.2fml",total);
	getche();
	system("cls");
	}


void see6()          // FOR AB-
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup AB- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"AB-"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"AB-"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group AB- is = %.2fml",total);
	getche();
	system("cls");
	}

void see7()          // FOR O+
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup O+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"O+"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"O+"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group O+ is = %.2fml",total);
	getche();
	system("cls");
}


void see8()          // FOR O-
{
	system("cls");
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup O- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"O-"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{	 
	if((strcmp(don.bloodgroup,"O-"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group O- is = %.2fml",total);
	getche();
	system("cls");
	}

int getVisitorId()
{
	int visitor_id;
	FILE *fp;
	fp=fopen("visitor_id.txt","r");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	fscanf(fp, "%d", &visitor_id);
    
	fclose(fp);
	
	return visitor_id;
} 

void setVisitorId(int visitor_id)
{
	FILE *fp;
	fp=fopen("visitor_id.txt","w");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	fprintf(fp, "%d", visitor_id);
	fclose(fp);
}

