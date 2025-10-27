#include <stdio.h>

void arithmeticOperations() {
    int a, b;
    printf("\n--- ARITHMETIC OPERATIONS ---\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nResults:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if(b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Cannot divide by zero!\n");
    }
}

void unaryOperations() {
    int x;
    printf("\n--- UNARY OPERATIONS ---\n");
    printf("Enter a number: ");
    scanf("%d", &x);
    
    int original = x;
    printf("\nOriginal value: %d\n", original);
    printf("Pre-increment (++x): %d\n", ++x);
    printf("Value after pre-increment: %d\n", x);
    
    x = original;
    printf("Post-increment (x++): %d\n", x++);
    printf("Value after post-increment: %d\n", x);
    
    x = original;
    printf("Pre-decrement (--x): %d\n", --x);
    printf("Post-decrement (x--): %d\n", x--);
    printf("Unary minus (-x): %d\n", -original);
    printf("Logical NOT (!x): %d\n", !original);
}

void relationalOperations() {
    int a, b;
    printf("\n--- RELATIONAL OPERATIONS ---\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nComparisons:\n");
    printf("%d == %d : %d (Equal)\n", a, b, a == b);
    printf("%d != %d : %d (Not Equal)\n", a, b, a != b);
    printf("%d > %d  : %d (Greater)\n", a, b, a > b);
    printf("%d < %d  : %d (Less)\n", a, b, a < b);
    printf("%d >= %d : %d (Greater or Equal)\n", a, b, a >= b);
    printf("%d <= %d : %d (Less or Equal)\n", a, b, a <= b);
}

void logicalOperations() {
    int a, b;
    printf("\n--- LOGICAL OPERATIONS ---\n");
    printf("Enter two values (0 for false, non-zero for true): ");
    scanf("%d %d", &a, &b);
    
    printf("\nResults:\n");
    printf("%d && %d (AND) : %d\n", a, b, a && b);
    printf("%d || %d (OR)  : %d\n", a, b, a || b);
    printf("!%d (NOT)      : %d\n", a, !a);
}

void assignmentOperations() {
    int x;
    printf("\n--- ASSIGNMENT & SHORTHAND OPERATIONS ---\n");
    printf("Enter a starting value: ");
    scanf("%d", &x);
    
    printf("\nOriginal value: %d\n", x);
    x += 10;
    printf("After x += 10: %d\n", x);
    x -= 5;
    printf("After x -= 5: %d\n", x);
    x *= 2;
    printf("After x *= 2: %d\n", x);
    x /= 3;
    printf("After x /= 3: %d\n", x);
    x %= 7;
    printf("After x %%= 7: %d\n", x);
}

void conditionalOperation() {
    int a, b;
    printf("\n--- CONDITIONAL (TERNARY) OPERATOR ---\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    
    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("%d is %s\n", a, (a % 2 == 0) ? "Even" : "Odd");
}

void bitwiseOperations() {
    int a, b;
    printf("\n--- BITWISE OPERATIONS ---\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nResults:\n");
    printf("%d & %d  (AND) = %d\n", a, b, a & b);
    printf("%d | %d  (OR)  = %d\n", a, b, a | b);
    printf("%d ^ %d  (XOR) = %d\n", a, b, a ^ b);
    printf("~%d (NOT)     = %d\n", a, ~a);
    printf("%d << 1 (Left Shift)  = %d\n", a, a << 1);
    printf("%d >> 1 (Right Shift) = %d\n", a, a >> 1);
}

void commaOperation() {
    printf("\n--- COMMA OPERATOR ---\n");
    int x, y, result;
    
    result = (x = 5, y = 10, x + y);
    printf("result = (x = 5, y = 10, x + y)\n");
    printf("x = %d, y = %d, result = %d\n", x, y, result);
    
    printf("\nUsing comma in for loop:\n");
    int i, j;
    for(i = 1, j = 10; i <= 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
}

int main() {
    int choice;
    
    do {
        printf("\n");
        printf("========================================\n");
        printf("   C OPERATORS DEMONSTRATION PROGRAM\n");
        printf("========================================\n");
        printf("1. Arithmetic Operators (+, -, *, /, %%)\n");
        printf("2. Unary Operators (++, --, !, +, -)\n");
        printf("3. Relational Operators (==, !=, <, >, <=, >=)\n");
        printf("4. Logical Operators (&&, ||, !)\n");
        printf("5. Assignment Operators (=, +=, -=, *=, /=, %%=)\n");
        printf("6. Conditional Operator (?:)\n");
        printf("7. Bitwise Operators (&, |, ^, ~, <<, >>)\n");
        printf("8. Comma Operator (,)\n");
        printf("9. Exit\n");
        printf("========================================\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                arithmeticOperations();
                break;
            case 2:
                unaryOperations();
                break;
            case 3:
                relationalOperations();
                break;
            case 4:
                logicalOperations();
                break;
            case 5:
                assignmentOperations();
                break;
            case 6:
                conditionalOperation();
                break;
            case 7:
                bitwiseOperations();
                break;
            case 8:
                commaOperation();
                break;
            case 9:
                printf("\nThank you for using the program!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
        if(choice != 9) {
            printf("\nPress Enter to continue...");
            getchar();
            getchar();
        }
        
    } while(choice != 9);
    
    return 0;
}