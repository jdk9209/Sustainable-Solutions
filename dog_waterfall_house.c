#include <stdio.h>
#include <string.h>

//Defining constants and variables
const int MAX_STR_LEN = 256;

//Function definitions
void sustainability_measures(char* str);

int main(int argc, char** argv)
{
    char str[MAX_STR_LEN];
    int choice;
    
    //Printing user prompt
    printf("1. Implement sustainability measures\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    //Processing user choice
    switch (choice)
    {
        case 1: 
            printf("Enter sustainability measures: ");
            scanf("%s", str);
            sustainability_measures(str);
            break;
            
        case 2:
            break;
            
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}

/* This function takes in sustainability measures
    as a string and implements the necessary
    measures */
void sustainability_measures(char* str)
{
    if (strcmp(str, "reduce water usage") == 0)
    {
        printf("Installing low-flow faucets and showerheads\n");
        printf("Collecting rainwater for irrigation\n");
        printf("Fixing and replacing leaking pipes and fixtures\n");
        printf("Installing water efficient appliances\n");
    }
    else if (strcmp(str, "reduce energy usage") == 0)
    {
        printf("Switching to LED lighting\n");
        printf("Installing timers for lights and appliances\n");
        printf("Using solar energy for electricity\n");
        printf("Insulating walls and roof\n");
    }
    else if (strcmp(str, "reduce plastic waste") == 0)
    {
        printf("Reducing packaging and using recyclable containers\n");
        printf("Replacing plastic bags with paper bags or reusable bags\n");
        printf("Swapping plastic water bottles with reusable water bottles\n");
        printf("Recycling plastic containers and packaging\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}