#include <stdio.h>
#include <string.h>
#define S 30

struct bank_account
{
        char name[S];
        int deposit;
        char date[10];
}typedef bank_acc;

int main()
{
        int n;

        printf("Give number of bank accounts: ");
        scanf("%d", &n);

        bank_acc accounts[n];
        int counter;

        for (counter = 0; counter < n; counter++)
        {
                printf("\nGive name of client: ");
                scanf("%s", &accounts[counter].name);
                getchar();
                printf("Give amount of deposit: ");
                scanf("%d", &accounts[counter].deposit);
                getchar();
                printf("Give the date of the deposit: ");
                scanf("%s", accounts[counter].date);
                getchar();
        }

        char search_for[S];
        int pos = -1;

        printf("\nGive name to search for: ");
        scanf("%s", &search_for);

        for (counter = 0; counter < n; counter++)
                if (strcmp(accounts[counter].name, search_for) == 0)
                        pos = counter;

        if (pos != -1)
        {
                printf("\nName of wanted client: %s\n", accounts[pos].name);
                printf("Deposit from wanted client: %d\n", accounts[pos].deposit);
                printf("Date of deposit from wanted client: %s\n", accounts[pos].date);
        }
        else
                printf("Client %s does not exist. \n", search_for);

        return 0;
}

