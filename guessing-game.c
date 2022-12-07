// #include <stdio.h>

// int main(){

//     // prints header
//     printf("********************************\n");
//     printf("* Welcome to our guessing game *\n");
//     printf("********************************\n");


//     int secret = 42;

//     //printf("Our secret number is %d. Do not tell to anyone! ;)\n", secret);

//     int userNumber;

//     printf("Guess the number: ");
//     scanf("%d", &userNumber);
//     printf("You said the secret number is %d\n", userNumber);  
//     printf("The secret number is %d\n", secret);

//     if (secret == userNumber){
//         printf("Sucess");
//     } else {
//         printf("Failure");
//     }






// }
#include <stdio.h>
 
int main() {
    double n = 3.14159;
    
    double raio;
    
    scanf("%f", &raio);
    printf("%f", raio);
    
    double area = n * raio*raio;

    printf("A=%.4f\n", area);

    return 0;
}