#include <stdio.h>

int calculateSum(int x ,int y) {
    return x+y;
}

int main() {
    //create an array
    int resultArr[6];

    //call the function with different argument and store the different result in the array .
    resulrArr[0] = calculateSum(5,3);
    resulrArr[1] = calculateSum(8,2);
    resulrArr[2] = calculateSum(15,15);
    resulrArr[3] = calculateSum(9,1);
    resulrArr[4] = calculateSum(7,7);
    resulrArr[5] = calculateSum(1,1);

    for (int i =0; i < 6; i++) {
        printf("result%d is = %d\n",i+1, resultArr[i]);
    }

    return 0;
}