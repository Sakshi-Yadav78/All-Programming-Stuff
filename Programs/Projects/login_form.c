#include <stdio.h>
#include <conio.h>

int main()
{
	//Create user_id and password in the form of two variable
	int user_id1 = 12 , password1 = 56;
	int user_id2, password2;
    // Message for user_id
	printf(" Enter user_id \n");
	scanf("%d", &user_id2);

	//Message for password
	printf(" Enter password \n");
	scanf("%d", &password2);

	if(user_id1==user_id2&&password1==password2)
	{
		printf(" True Login ");
	}
	else
    {
		printf(" Wrong user_id or password!! ");
	}
	return 0;
}