#include <stdio.h>
#include <conio.h>

struct login{
	char first_name[25];
	char last_name[25];
	char username[20];
	char password[20];
            }; 
 register()
 {
	File * log;
	log = fopen("login12.txt","w");
	struct login l;

	printf(" Enter first name: ");
	scanf("%s",l.first_name);
	printf(" Enter last name: ");
	scanf("%s",l.last_name);

	printf(" Enter username: ");
	scanf("%s",l.username);
	printf(" Enter password: ");
	scanf("%s",l.password);
	fwrite(&l,sizeof(l),l,log);

	fclose(log);

	printf("\n Your username is your user_id ");
	printf("\n Now login with user_id and password ")
	printf("\n Press any key to continue...");
	return 0;
	system("cls");
	login();
}
login()
{

}