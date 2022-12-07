#include <stdio.h>
#define ATTEMPTS 4

int main(){



    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int secret = 42;
    int userNumber;
    
    for (int i = 1; i <= ATTEMPTS; i++){
        
        printf("\n------------- Attempt %d of %d -------------\n", i, ATTEMPTS);

        printf("Guess the number: ");
        scanf("%d", &userNumber);
        if (userNumber < 0){
            printf(">>> Negative numbers are not allowed! Try again.");
            i--;
            continue;
        }

        int right = (userNumber==secret);
        int greaterThen = userNumber > secret;

        if (right){
            printf(">>> Congratulations!!! You're right!\n The secret number is 42\n");
            break;
        }
            else if (greaterThen){
                printf(">>> Try again!\n>>> Your attempt was greater then the secret number\n");
            }
            else{
                printf(">>> Try again!\n>>> Your attempt was less then the secret number\n");
            }
    }
}
