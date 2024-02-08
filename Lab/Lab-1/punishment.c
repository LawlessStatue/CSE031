#include<stdio.h>

int main() {
    int numOfRep;
    int typoLine;
    printf("Enter the repetition count for the punishment phrase: ");

    while(scanf("%d", &numOfRep) != 1 || numOfRep <= 0) {
        printf("You entered an invalid value for the repetition count! Please re-enter: ");
    }
    printf("\nEnter the line where you want to insert the typo: ");

    while(scanf("%d", &typoLine) != 1 || typoLine <= 0 || typoLine > numOfRep) {
        printf("You entered an invalid value for the typo placement! Please re-enter: ");
    }
    printf("\n");

    for(int i = 1; i <= numOfRep; i++) {
        if(i == typoLine) {
            printf("Cading wiht is C avesone!\n");
        } else {
            printf("Coding with C is awesome!\n");
        }
    }
    return 0;
}



// #include<stdio.h>

// int main() {

//     int numOfRep;
//     int typoLine;
//     printf("Enter the repetition count for the punishment phrase: ");
//     scanf("%d", &numOfRep);

//     while(numOfRep <= 0) {
//         printf("You entered an invalid value for the repetition count! Please re-enter: ");
//         while(getchar() != '\n'); // clear input buffer
//     }

//     printf("\nEnter the line where you want to insert the typo: ");
//     scanf("%d", &typoLine);

//     while((typoLine <= 0) || (typoLine > numOfRep)) {
//         printf("You entered an invalid value for the typo placement! Please re-enter: ");
//         while(getchar() != '\n');
//     }
//     printf("\n");

//     for(int i = 1; i <= numOfRep; i++) {
//         if(i == typoLine) {
//             printf("Cading wiht is C avesone!\n");
//         } else {
//             printf("Coding with C is awesome!\n");
//         }
//     }
//     return 0;
// }




// #include <stdio.h>

// int main(){
//     //create a vars
//     int attempts = 1;
//     int numOfRep;
//     int typoLine;

//     while(attempts == 1){
//         //Asks users for the number of rep
//         printf("Enter the repetition count for the punishment phrase: ");

//         //Store the number in the var
//         scanf("%d", &numOfRep);

//         //Checks for valid number of reps
//         if(numOfRep < 1){
//             while(numOfRep < 1){
//                 printf("You entered an invalid value for the repetition count! Please re-enter: ");
//                 scanf("%d", &numOfRep);
//             }
//             break;
//         }else{
//             attempts++;
//         }

//         //Asks users for line with typo
//         printf("\nEnter the line where you want to insert the typo: ");

//         //Store the typo line
//         scanf("%d", &typoLine);

//         //Checks for valid line number
//         if((typoLine < 1) || (typoLine > numOfRep)){
//             while(typoLine < 1){
//                 printf("You entered an invalid value for the typo placement! Please re-enter: ");
//                 scanf("%d", &typoLine);
//             }
//             break;
//         }else{
//             attempts++;
//         }
//         printf("\n");

//     }

//     //Loop to print the statements
//     for(int i = 1; i <= numOfRep; i++){
//         if(i == typoLine){
//             printf("Cading wiht is C avesone!\n");
//         }else{
//             printf("Coding with is C awesome!\n");

//         }
//     }
    


//     return 0;
// }