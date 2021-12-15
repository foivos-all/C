#include <stdio.h>
#include <string.h>
#include <stdlib.h> /*for clrscr()*/
#define N 100

int match(char arg[N], char *ans, char item, int l, int res);

int main()
{
    int counter, i, length, position, result;
    char word[N], answer[N], letter;

    printf("Player 1, give a word for Hangman Game: \n");
    fgets(word, N, stdin);
        
    printf("Press any key to clear the screen...\n");
    scanf("%c");
    system("cls");
    printf("Let's start!\n");

    word[strlen(word) - 1] = '\0';

    length = strlen(word);

    for (counter = 0; counter < length; counter++)
        answer[counter] = '_';
    
    int lives = 5;
    
    while (lives > 0) {
    	result = 0;
    	
    	printf("\n%s\tLives: %d\n", answer, lives);

        printf("Player 2, give a letter: ");
        letter = getchar();
        getchar();
        
		result = match(word, answer, letter, length, result);
	    
	    if (result == 0){
	    	lives--;
		}
		
		if (strcmp(answer, word) == 0){
			printf("\n%s\tLives: %d\n", answer, lives);
			break;
		}

	}
    
    if (lives == 0)
    	printf("\nPlayer 2, you have lost..\n");

	else
		printf("\nCongratulations Player 2! You have won!");
                
    return 0;
}

int match(char arg[N], char *ans, char item, int l, int res){
	char s;
    int i;
    
	for (i = 0; i <= l; i++){
        s = arg[i];

        if (s == item){
        	res = 1;
            ans[i] = s;
        }
    }
    
    return res;
}
