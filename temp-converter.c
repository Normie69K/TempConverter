#include <stdio.h>
#include <unistd.h>

void display    TemperatureArt() {
    printf("  TTTTT EEEEE M   M PPPP  EEEEE RRRR   A  TTTTT U   U RRRR  EEEEE\n");
    sleep(1);
    printf("    T   E     MM MM P   P E     R   R A A   T   U   U R   R E    \n");
    sleep(1);
    printf("    T   EEEEE M M M PPPP  EEEEE RRRR AAAAA  T   U   U RRRR  EEEEE\n");
    sleep(1);
    printf("    T   E     M   M P     E     R  R A   A  T   U   U R  R  E    \n");
    sleep(1);
    printf("    T   EEEEE M   M P     EEEEE R   R A   A  T    UUU  R   R EEEEE\n");
    sleep(1);
}

void menu() {
    printf("\nSelect options from below:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
}

int main() {
    char user[50];
    int temp;
    int choice1, choice2;

    displayTemperatureArt();

    printf("Enter your name: ");
    scanf("%s", user);

    
    printf("Welcome, %s!\n", user);
    sleep(2);

    menu();
    printf("Select the temperature unit you are entering the value for: ");
    scanf("%d", &choice1);
    
    sleep(1);
    printf("Enter the amount of temperature you want to convert: ");
    scanf("%d", &temp);
    
    sleep(1);
    menu();
    printf("Select the temperature unit you want to convert to: ");
    scanf("%d", &choice2);

    // Check for invalid conversion (same unit)
    if ((choice1 == 1 && choice2 == 1) || (choice1 == 2 && choice2 == 2) || (choice1 == 3 && choice2 == 3)) {
        printf("You don't have to change to the same value. Choose another.\n");
        return main(); // Restart the process
    }

    // Perform conversions based on user choices
    switch (choice1) {
        case 1: // Celsius
            if (choice2 == 2) {
                printf("After converting %d °C to °F, we get ", temp);
                temp = (9 * temp / 5) + 32;
                printf("%d °F\n", temp);
            } else if (choice2 == 3) {
                printf("After converting %d °C to Kelvin, we get ", temp);
                temp = temp + 273.15;  // Correct conversion to Kelvin
                printf("%.2f K\n", (float)temp); // Display as float for precision
            }
            break;
        case 2: // Fahrenheit
            if (choice2 == 1) {
                printf("After converting %d °F to °C, we get ", temp);
                temp = (5 * (temp - 32)) / 9;  // Correct conversion to °C
                printf("%d °C\n", temp);
            } else if (choice2 == 3) {
                printf("After converting %d °F to Kelvin, we get ", temp);
                temp = (5 * (temp - 32)) / 9 + 273.15;  // Convert to °C then to K
                printf("%.2f K\n", (float)temp);
            }
            break;
        case 3: // Kelvin
            if (choice2 == 1) {
                printf("After converting %d K to °C, we get ", temp);
                temp = temp - 273.15;  // Correct conversion to °C
                printf("%.2f °C\n", (float)temp);
            } else if (choice2 == 2) {
                printf("After converting %d K to °F, we get ", temp);
                temp = (9 * (temp - 273.15) / 5) + 32;  // Convert to °C then to °F
                printf("%.2f °F\n", (float)temp);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
