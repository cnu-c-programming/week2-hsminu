#include <stdio.h>

int main()
{
    int input1, input2;
    char cal;

    scanf("%d %d %c", &input1, &input2, &cal);

    if(cal == '+'){
        printf("%d\n", input1 + input2);
    }
    else if(cal == '-'){
        printf("%d\n", input1 - input2);
    }
    else if(cal == '*'){
        printf("%d\n", input1 * input2);
    }
    else if(cal == '/'){
        printf("%d\n", input1 / input2);
    }
    else {
        printf("invalid operator\n");
    }

    return 0;
}

