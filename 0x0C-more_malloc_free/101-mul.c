#include <stdio.h>
#include <stdlib.h>

void print_error() {
    printf("Error\n");
    exit(98);
}

int main(int argc, char *argv[]) {
	int i, j, num1, num2, result;

    if (argc != 3) {
        print_error();
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; argv[i + 1][j] != '\0'; j++) {
            if (argv[i + 1][j] < '0' || argv[i + 1][j] > '9') {
                print_error();
            }
        }
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = num1 * num2;

    printf("%d\n", result);

    return 0;
}

