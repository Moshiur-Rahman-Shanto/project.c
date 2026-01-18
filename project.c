#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, i;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("parle solve koro\n");
    printf("1 theke 100 er moddhe je kono ekta number ami dichi \n");
    printf("parle kore.dekhawww \n\n");

    for(i = 1; i <= 101; i++) {
        printf("Ekta number guess koro (Attempt %d): ", i);
        scanf("%d", &guess);

        if(guess == number) {
            printf("\Ami jantam tui parbi\n", i);
            break;
        }
        else if(guess > number) {
            printf("Ektu beshi hoise kom koro\n");
        }
        else {
            printf("Ektu choto hoye geche boro koro\n");
        }
    }

    if(i == 102) {
        printf("\nAr attempt nai. Number ta chilo %d. Pore abar try koro.\n", number);
    }

    return 0;
}