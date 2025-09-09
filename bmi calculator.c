#include <stdio.h>

int main()
{
    printf("Welcome to the BMI Calculator\n");
    int choice;
    printf("Enter 1 for International System\nOR\nEnter 2 for Imperial System (US): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float bodywtkg, height_m, BMI_IS;
        printf("International System: \n");
        printf("Enter Body Weight in Kgs (Upto 2 decimal places): ");
        scanf("%f", &bodywtkg);
        printf("\nEnter Height in meters (Upto 2 decimal places): ");
        scanf("%f", &height_m);
        BMI_IS = bodywtkg / (height_m * height_m);
        printf("\nYour BMI is %f\n", BMI_IS);
        if (BMI_IS < 16.5)
        {
            printf("\nSeverely underweight");
        }
        else if (BMI_IS < 18.5 && BMI_IS > 16.5)
        {
            printf("\nUnderweight");
        }
        else if (BMI_IS < 24.9 && BMI_IS > 18.5)
        {
            printf("\nNormal Weight");
        }
        else if (BMI_IS < 29.9 && BMI_IS > 25)
        {
            printf("\nOverweight");
        }
        else if (BMI_IS < 34.9 && BMI_IS > 30)
        {
            printf("\nObesity Class 1");
        }
        else if (BMI_IS < 39.9 && BMI_IS > 35)
        {
            printf("\nObesity Class 2");
        }
        else if (BMI_IS <= 40)
        {
            printf("\nObesity Class 3 (Extreme Obesity)");
        }

        else if (choice == 2)
        {
            float bodywtlbs, height_inch, BMI_ImS;
            printf("Imperial System (US): \n");
            printf("\nEnter Body Weight in lbs (Upto 2 decimal places): ");
            scanf("%f", &bodywtlbs);
            printf("\nEnter Height in inches (Upto 2 decimal places): ");
            scanf("%f", &height_inch);
            BMI_ImS = (bodywtlbs / (height_inch * height_inch)) * 703;
            printf("\nYour BMI is %f\n", BMI_ImS);
            if (BMI_ImS < 16.5)
            {
                printf("\nSeverely underweight");
            }
            else if (BMI_ImS < 18.5 && BMI_ImS > 16.5)
            {
                printf("\nUnderweight");
            }
            else if (BMI_ImS < 24.9 && BMI_ImS > 18.5)
            {
                printf("Normal Weight");
            }
            else if (BMI_ImS < 29.9 && BMI_ImS > 25)
            {
                printf("\nOverweight");
            }
            else if (BMI_ImS < 34.9 && BMI_ImS > 30)
            {
                printf("\nObesity Class 1");
            }
            else if (BMI_ImS < 39.9 && BMI_ImS > 35)
            {
                printf("\nObesity Class 2");
            }
            else if (BMI_ImS <= 40)
            {
                printf("\nObesity Class 3 (Extreme Obesity)");
            }
        }
        else
        {
            printf("Invalid Input\n");
        }

        printf("\n\nThank You for using the BMI Calculator\nMade by Shantanu\n");
        return 0;
    }
}