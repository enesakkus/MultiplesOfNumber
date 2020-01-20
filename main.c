#include<stdio.h>
#include<math.h>

double multipleFinder(double,double);

int main(void){

    double number1, number2, solution;
    printf("Welcome to multiple calculator...(-1 for exit)\n");
    printf("This program determines for a pair of integers whether the second integer is a multiple of the first.\n");



    while(number1 != -1){
        printf("Please enter first number: ");
        scanf("%lf",&number1);
        if(number1 != -1){
            printf("Please enter second number: ");
            scanf("%lf",&number2);

            solution = multipleFinder(number1,number2);
            if(solution == 1){
                printf("%.1f is multiple of %.1f\n",number2,number1);
            }
            else
                printf("%.1f is not multiple of %.1f\n",number2,number1);
        }
    }
}
double multipleFinder(double a, double b){

    int x = (int) b % (int) a;

    if(x == 0){
        printf("Remainder is %d\n",x);
        return 1;
    }

    else{
        printf("Remainder is %d\n",x);
        return 0;
    }

}
