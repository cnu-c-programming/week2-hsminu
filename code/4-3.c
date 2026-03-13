#include <stdio.h>

int main() {
    int input;
    int prime = 1;

    scanf("%d", &input);

    if (input < 2) {
        prime = 0;
    } else {
        for (int i = 2; i < input; i++) {
            if (input % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if(prime > 0){
        printf("true\n");
    } 
    else {
        printf("false\n");
    }

    return 0;
}