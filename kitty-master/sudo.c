#include <stdio.h>

char *secret = "SetYourPasswordHere";

int authorization()
{
        char password[30];
        printf("[sudo] password:  ");
        gets(password);
        if (!strcmp(password,secret))
                return 1;
        else
                return 0;
}
int main()
{
        if (authorization())
        {
                printf("Command Executed! \n");
        }
        else
        {
                printf("Sorry, try again. \n");
        }
                return 0;
}
