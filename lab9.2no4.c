#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main()
{
    char login[64], password[64];

    printf("Enter login : ");
    gets(login);

    printf("Enter password : ");
    gets(password);

    if (checkLogin(login, password) == 1)
    {
        printf("Welcome\n");
    }
    else
    {
        printf("Incorrect login or password\n");
    }

    if (checkValidPass(password))
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Reject\n");
    }
}

int checkValidPass(char *ps)
{

    int len = strlen(ps);

    int digit = 0;
    int upper = 0;
    int upperUsed[26] = {0};
    int upperRepeat = 0;

    for (int i = 0; i < len; i++)
    {

        if (isdigit(ps[i]))
            digit++;

        if (isupper(ps[i]))
        {
            upper++;

            if (upperUsed[ps[i] - 'A'] == 1)
                upperRepeat = 1;

            upperUsed[ps[i] - 'A'] = 1;
        }
    }

    // 4.1 Length = 5 and digit >=1
    if (len == 5 && digit >= 1)
        return 1;

    // 4.2 Length 5-8 first char not digit and upper>=2 digit>=2
    if (len >= 5 && len <= 8 &&
        !isdigit(ps[0]) &&
        upper >= 2 &&
        digit >= 2)
        return 1;

    // 4.3 Length 5-8 upper>=2 not repeat uppercase and digit>=2
    if (len >= 5 && len <= 8 &&
        upper >= 2 &&
        digit >= 2 &&
        upperRepeat == 0)
        return 1;

    return 0;
}

int checkLogin(char *login, char *passwd)
{

    if (!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}