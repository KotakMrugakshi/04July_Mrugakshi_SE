// Assessment Task 2
#include <stdio.h>

main()
{
    float average, highest, total = 0, hour[7];
    int hDay, i, j;

    for(i = 0; i < 7; i++)
    {
        printf("Enter study hours for Day %d: ", i + 1);
        scanf("%f", &hour[i]);

        while(hour[i] < 0 || hour[i] > 24)
        {
            printf("Invalid input! Enter hours between 0 and 24.\n");
            printf("Enter study hours for Day %d again: ", i + 1);
            scanf("%f", &hour[i]);
        }
    }

    highest = hour[0];
    hDay = 1;

    // Calculate total and highest study hours
    for(i = 0; i < 7; i++){
        total = total + hour[i];
        if(hour[i] > highest){
            highest = hour[i];
            hDay = i + 1;
        }
    }
    average = total / 7;

    // Display
    printf("\nWeekly Total = %.2f hours\n", total);
    printf("Daily Average = %.2f hours\n", average);
    printf("Highest Study Hours = %.2f hours\n", highest);
    printf("Highest Study Day = Day %d\n", hDay);

    // Display visual bars
    printf("\nStudy Hours Chart:\n");

    for(i = 0; i < 7; i++){
        printf("Day %d: ", i + 1);
        for(j = 0; j < (int)hour[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}
