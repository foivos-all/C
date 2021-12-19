#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define S 30

struct bank_account
{
        char name[S];
        int deposit;
        char date[10];
}typedef bank_acc;

bank_acc *alloc(bank_acc *x, int n);
bank_acc *read(bank_acc *x, int n);
int search(bank_acc *x, int n);

int main()
{
    int n;

    printf("Give number of bank accounts: ");
    scanf("%d", &n);

    bank_acc *accounts;
    
	accounts = alloc(accounts, n);
	accounts = read(accounts, n);
	
	int pos;
	
	pos = search(accounts, n);
	
    if (pos != -1)
    {
        printf("\nName of wanted client: %s\n", accounts[pos].name);
        printf("Deposit from wanted client: %d\n", accounts[pos].deposit);
        printf("Date of deposit from wanted client: %s\n", accounts[pos].date);
    }

    return 0;
}

bank_acc *alloc(bank_acc *x, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
    	x = (bank_acc *)malloc(n*sizeof(bank_acc));
    	
    return x;
}

bank_acc *read(bank_acc *x, int n)
{
	int i, dec = 1;
	
    for (i = 0; i < n; i++)
    {
        printf("\nGive name of client: ");
        scanf("%s", x[i].name);
        getchar();
        

        printf("Give amount of deposit: ");
        scanf("%d", &x[i].deposit);
        getchar();
        
        do
        {
        	printf("Is there another deposit? If yes write ammount, else write 0.\n");
        	scanf("%d", &dec);
        	x[i].deposit = x[i].deposit + dec;
    	}
        while (dec !=0 );
        
        printf("Give the date of the deposit: ");
        scanf("%s", x[i].date);
        getchar();
    }
    
    return x;
}

int search(bank_acc *x, int n)
{
	int i, res = -1;
	char search_for[S];

    printf("\nGive name to search for: ");
    scanf("%s", &search_for);

    for (i = 0; i < n; i++)
        if (strcmp(x[i].name, search_for) == 0)
            res = i;
	
	return res;
}

