#include <stdio.h>
#define true 1
#define false 0

int __Sum(int value1, int value2) {
    int sum = 0;
    while (value1 <= value2){
        sum+=value1;
        value1++;
    }
    return sum;
}

int main(){

    int input1;
    int input2;
    int loopcheck = true;

    while (loopcheck == true){

            printf("\nInserisci il primo numero: ");
            scanf("%d", &input1);

            printf("\nInserisci il secondo numero: ");
            scanf("%d", &input2);

            if (input1 > input2)
                __Sum(input2, input1);


            else
                __Sum(input1, input2);

    }
}
