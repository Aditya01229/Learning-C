/*
Kms to miles
Inches to foots
cms to inches

*/
#include <stdio.h>
float km_miles(float x)
{
    float miles;
    miles = 0.62137119 * x;
    return miles;
}
float inch_foot(float x)
{
    float foot;
    foot = x / 12;
    return foot;
}
float cm_inch(float x)
{
    float inch;
    inch = x / 2.54;
    return inch;
}
int main(int argc, char const *argv[])
{
    int run = 1, choice;
    float value, ans;
    while (run)
    {
        printf("Which conversion you want to perform, Enter the respective number.\n");
        printf("1)Kms to miles.\n2)Inches to foots.\n3)cms to inches:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 0:
            
        case 1:
            printf("Enter the Number:");
            scanf("%f", &value);
            ans = km_miles(value);
            printf("%f", ans);
            break;
        case 2:
            printf("Enter the Number:");
            scanf("%f", &value);
            ans = inch_foot(value);
            printf("%f", ans);
            break;
        case 3:
            printf("Enter the Number:");
            scanf("%f", &value);
            ans = cm_inch(value);
            printf("%f", ans);
            break;
        }
        printf("\nDo you want to perform another calculation?\nPress 1 for yes or 0 to exit:");
        scanf("%d", &run);
        if (run == 0)
        {
            printf("\nBye,Thank you.");
        }
    }
    return 0;
}
