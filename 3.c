#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {85,90,75,60,95};

    printf("Student Result Analysis\n");

    int total = 0;

    for(int i=0;i<5;i++)
    {
        total += marks[i];
    }

    printf("Total = %d\n", total);

    float average;

    average = total / 5;

    printf("Average = %f\n", average);

    printf("\n");

    int highest = marks[0];

    for(int i=1;i<5;i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("Highest = %d\n", highest);

    printf("\n");

    int lowest = marks[0];

    for(int i=1;i<5;i++)
    {
        if(marks[i] > lowest)
        {
            lowest = marks[i];
        }
    }

    printf("Lowest = %d\n", lowest);

    printf("\n");

    int attendance[5];

    attendance[0] = 1;
    attendance[1] = 1;
    attendance[2] = 0;
    attendance[3] = 1;
    attendance[4] = 1;

    int present = 0;

    for(int i=0;i<=5;i++)
    {
        present += attendance[i];
    }

    printf("Present = %d\n", present);

    printf("\n");

    char subject[8];

    strcpy(subject,"Programming");

    printf("%s\n", subject);

    printf("\n");

    char branch[10];

    scanf("%s",&branch);

    printf("%s\n", branch);

    printf("\n");

    int fees[5];

    fees[0] = 50000;
    fees[1] = 60000;
    fees[2] = 70000;
    fees[3] = 80000;
    fees[4] = 90000;

    fees[5] = 100000;

    printf("\nFees\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", fees[i]);
    }

    printf("\n");

    int stock[5] = {10,20,30,40,50};

    if(stock[2] = 30)
    {
        printf("Stock Available\n");
    }

    printf("\n");

    int backup[5];

    backup = stock;

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5];

    salary[0] = 45000.75;

    printf("%d\n", salary[0]);

    printf("\n");

    int result[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d", result[i]);
    }

    printf("\n");

    int totalResult = 0;

    for(int i=0;i<5;i++)
    {
        totalResult += result[i];
    }

    printf("Total Result = %d\n", totalResult);

    printf("\n");

    char city[10];

    city = "Jaipur";

    printf("%s\n", city);

    printf("\n");

    int inventory[5];

    inventory["one"] = 100;

    inventory[2.5] = 200;

    for(int i=0;i<5;i++)
    {
        inventory[i] = i * 100;
    }

    printf("Inventory\n");

    for(int i=0;i<=5;i++)
    {
        printf("%d ", inventory[i]);
    }

    printf("\n");

    char college[5];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';

    printf("%s\n", college);

    printf("\n");

    int count[5];

    count = inventory;

    printf("%d\n", count[0]);

    printf("\n");

    char course[6];

    strcpy(course,"Computer");

    printf("%s\n", course);

    printf("\n");

    int numbers[5];

    for(int i=0;i<=5;i++)
    {
        numbers[i] = i * 10;
    }

    printf("Numbers\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    printf("Program Finished\n");

    return 0
}