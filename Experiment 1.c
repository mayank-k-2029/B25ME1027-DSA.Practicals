#include<stdio.h>
int length(char[]);
void compare(char[],char[]);
void palindrom(char[]);
void substring(char[], char[]);
void copy(char[],char[]);
void reverse(char[]);
void displayMenu();
int i,j;
int main()
{
    int choice;
    char str[50];
    char str2[50];
    int exit = 0;
    displayMenu();
    do
    {
        printf("ENTER CHOICE (7 for Display Menu): ");
        scanf("%d", &choice);
        if(choice>=1 && choice<=6)
        {
            printf("Enter String: ");
            scanf("%s", str);
        }
        switch(choice)
        {
            case 1:
                printf("Length of the String is %d\n\n", length(str));
                break;
            case 2:
                printf("Enter second String: ");
                scanf("%s", str2);
                copy(str, str2);
                break;
            case 3:
                reverse(str);
                break;
            case 4:
                palindrom(str);
                break;
            case 5:
                printf("Enter substring String: ");
                scanf("%s", str2);
                substring(str, str2);
                break;
            case 6:
                printf("Enter second String: ");
                scanf("%s", str2);
                compare(str, str2);
                break;
            case 7:
                displayMenu();
                break;
            case 8:
                exit = 1;
                break;
            default:
                printf("Invalid Choice!\n\n");
        }
    } while(exit == 0);
    return 0;
}
void displayMenu()
{
    printf("<<-----------Menu------------->>\n");
    printf("1. Length\n");
    printf("2. Copy String in another String\n");
    printf("3. Reverse String\n");
    printf("4. Check for Palindrome\n");
    printf("5. Check for Substring\n");
    printf("6. Compare Any String with another\n");
    printf("7. Display Menu\n");
    printf("8. Exit\n\n");
}
int length(char a[])
{
    int len = 0;
    while(a[len] != '\0')
        len++;
    return len;
}
void compare(char str[], char str2[])
{
    i = 0;

    while(str[i] != '\0' && str2[i] != '\0')
    {
        if(str[i] != str2[i])
        {
            printf("Strings are NOT Equal.\n\n");
            return;
        }
        i++;
    }
    if(str[i] == '\0' && str2[i] == '\0')
        printf("Strings are Equal.\n\n");
    else
        printf("Strings are NOT Equal.\n\n");
}
void palindrom(char a[])
{
    int l = length(a);
    int flag = 1;
    for(i = 0; i < l/2; i++)
    {
        if(a[i] != a[l-1-i])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("The String is Palindrome.\n\n");
    else
        printf("The String is NOT Palindrome.\n\n");
}
void substring(char a[], char b[])
{
    int al = length(a);
    int bl = length(b);
    int count = 0;
    for(i = 0; i <= al - bl; i++)
    {
        for(j = 0; j < bl; j++)
        {
            if(a[i+j] != b[j])
                break;
        }
        if(j == bl)
            count++;
    }
    if(count > 0)
        printf("The String B is substring of A and occurs %d time(s).\n\n", count);
    else
        printf("The String B is NOT substring of A.\n\n");
}
void copy(char a[], char b[])
{
    i = 0;
    while(b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
printf("Original First String: %s\n", b);
    printf("Copied String: %s\n\n", a);
}
void reverse(char a[])
{
    int al = length(a);
    printf("Reversed String: ");
    for(i = al-1; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n\n");
}
