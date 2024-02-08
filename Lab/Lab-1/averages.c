// Commit changes
#include<stdio.h>
#include<stdlib.h>

char* ordinalSuffix(int num) {

    if((num % 100 >= 11) && (num % 100 <= 13)){
        return "th";
    }

    switch(num % 10) {
        case 1: 
            return "st";
        case 2: 
            return "nd";
        case 3: 
            return "rd";
        default: 
            return "th";
    }
}

int sumOfDigits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += abs(num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int evenSum = 0;
    int oddSum = 0;
    int evenCount = 0;
    int oddCount = 0;
    int i = 1;
    while(1) {
        printf("Enter the %d%s value: ", i, ordinalSuffix(i));
        int num;
        scanf("%d", &num);
        if((num == 0) && (i == 1)){
            printf("\nThere is no average to compute.");
            break;
        }else if(num == 0){
            break;
        }
        int digitSum = sumOfDigits(num);
        if(digitSum % 2 == 0) {
            evenSum += num;
            evenCount++;
        }else{
            oddSum += num;
            oddCount++;
        }

        i++;
    }

    if(evenCount != 0) {
        double avg_even = (double)evenSum / evenCount;
        printf("\nAverage of input values whose digits sum up to an even number: %.2f\n", avg_even);
    }
    if((evenCount == 0) && (oddCount != 0)) {
        double avg_odd = (double)oddSum / oddCount;
        printf("\nAverage of input values whose digits sum up to an odd number: %.2f\n", avg_odd);
    }else if(oddCount != 0){
        double avg_odd = (double)oddSum / oddCount;
        printf("Average of input values whose digits sum up to an odd number: %.2f\n", avg_odd);
    }
    
    return 0;
}


// //4th
// #include <stdio.h>

// int main(){
//     int attempts = 1;
//     int inputs = 1;
//     int input = 0;
//     int sumOfEven = 0;
//     int evenAtt = 0;
//     int sumOfOdd = 0;
//     int oddAtt = 0;
//     int evenAvg = 0;
//     int oddAvg = 0;
//     char c;
//     while(attempts == 1){
//         while(inputs >= 1){
//             printf("\nEnter the %d", inputs);
//             if(inputs == 1){
//                 printf("st value: ");
//             }else if(inputs == 2){
//                 printf("nd value: ");
//             }else if(inputs == 3){
//                 printf("rd value: ");
//             }else{
//                 printf("th value: ");
//             }
//             scanf("%d", &input);
//             if(input == 0){
//                 break;
//             }else{
//                 // c = input + '0';
//                 if(input%2 == 0){
//                     sumOfEven += input;
//                     printf("\nSum Even: %d", sumOfEven);
//                     evenAtt++;
//                     input = 0;
//                     inputs++;
//                 }else{
//                     sumOfOdd += input;
//                     printf("\nSum Odd: %d", sumOfOdd);
//                     oddAtt++;
//                     input = 0;
//                     inputs++;
//                 }
//             }
//         }
//         evenAvg = sumOfEven / inputs;
//         printf("\nAverage of input values whose digits sum up to an even number: %d", evenAvg);
//         oddAvg = sumOfOdd / inputs;
//         printf("\nAverage of input values whose digits sum up to an odd number: %d", oddAvg);
//         attempts++;
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int sumOfDigits(int num) {
//     int sum = 0;
//     while(num != 0) {
//         sum += abs(num % 10);
//         num /= 10;
//     }
//     return sum;
// }

// int main() {
//     int sum_even = 0, sum_odd = 0;
//     int count_even = 0, count_odd = 0;
//     int i = 1;
//     while(1) {
//         printf("Enter the %dth value: ", i);
//         int num;
//         scanf("%d", &num);
//         if(num == 0) break;
//         int digitSum = sumOfDigits(num);
//         if(digitSum % 2 == 0) {
//             sum_even += num;
//             count_even++;
//         } else {
//             sum_odd += num;
//             count_odd++;
//         }
//         i++;
//     }
//     if(count_even != 0) {
//         double avg_even = (double)sum_even / count_even;
//         printf("Average of numbers with even digit sum: %.2f\n", avg_even);
//     }
//     if(count_odd != 0) {
//         double avg_odd = (double)sum_odd / count_odd;
//         printf("Average of numbers with odd digit sum: %.2f\n", avg_odd);
//     }
//     return 0;
// }

