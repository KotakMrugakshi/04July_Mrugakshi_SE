#include <stdio.h>
//Assessment task 1
main()
{
    int n,i,j,max,min,temp;
    float mean,distanceMin,distanceMax;

    printf("Enter value of number:");
    scanf("%d",&n);
    int numbers[n];
    for (i=0;i<n;i++){
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    min = numbers[0];
    max = numbers[0];

    for (i=1;i<n;i++){
        if (numbers[i] < min){
            min = numbers[i];
        }
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    int sum = 0;
    for (i=0;i<n; i++){
        sum = sum + numbers[i];
    }
    mean = (float)sum /n;
    for (i=0;i<n; i++){
        for (j=i+1;j<n; j++){
            if (numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("\n===== Results =====\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);
    printf("\nSorted Array:\n");
    for (i=0;i<n;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    distanceMin = mean - min;
    distanceMax = max - mean;
    if (distanceMin < distanceMax){
        printf("\nThe mean is closer to the minimum.\n");
    }
    else if (distanceMax < distanceMin){
        printf("\nThe mean is closer to the maximum.\n");
    }
    else{
        printf("\nThe mean is exactly midway between the minimum and maximum.\n");
    }
}
