#include <stdio.h>
int main() {
    char op;
    double first, second;
    scanf("%c", &op);
    scanf("%lf %lf", &first, &second);
    switch (op) {
        case '+': printf("%.1lf\n", first + second); break;
        case '-': printf("%.1lf\n", first - second); break;
        case '*': printf("%.1lf\n", first * second); break;
        case '/': printf("%.1lf\n", first / second); break;
        default: printf("Error\n");
    }
    return 0;
}
