#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char user, char computer) {
    if (computer == user)
        return -1;

    if ((user == 's' && computer == 'p') ||
        (user == 'p' && computer == 'r') ||
        (user == 'r' && computer == 's'))
        return 1;
    else
        return 0;
}

int main() {
    char user, computer, result;
    int n;
    
    printf("Welcome to play stone paper scissor.\n");
    printf("Enter your choice:\n");
    printf("s = scissor\np = paper\nr = rock\n");
    
    scanf(" %c", &user); 
    
    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
        computer = 's';
    else if (n < 66)
        computer = 'p';
    else
        computer = 'r';
    
    result = game(user, computer);
    
    if (result == -1) {
        printf("The game is tied.\n");
    } else if (result == 1) {
        printf("Congratulations! You won the game.\n");
    } else {
        printf("Sorry, you lost the game. Try again next time.\n");
    }

    return 0;
}
