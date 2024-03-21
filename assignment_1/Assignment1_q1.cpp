# include<iostream>

struct Date
{
    int dd;
    int mm;
    int yyyy;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->dd=01;
    ptrDate->mm=01;
    ptrDate->yyyy=2024;

}
void printDateOnConsole(struct Date* ptrDate )
{
    printf("\nThe date is: %d / %d / %d\n",ptrDate->dd,ptrDate->mm,ptrDate->yyyy);
}
void acceptDateOnConsole(struct Date* ptrDate)
{
    printf("Enter a date:");
    scanf("%d",&ptrDate->dd);
    printf("\nEnter the month:");
    scanf("%d",&ptrDate->mm);
    printf("\nEnter the year:");
    scanf("%d",&ptrDate->yyyy);
}

int main()
{
    struct Date D;
    initDate(&D);
    int choice;
    do{
        printf("0: Exit!\n");
        printf("1: Accept Date\n");
        printf("2: Display Date\n");
        printf("Enter your choice..\n");
        scanf("%d",&choice);
    

    switch(choice)
    {
        case 0:
        printf("Thank you for using our app :)");
        break;
        case 1:
        acceptDateOnConsole(&D);
        break;
        case 2:
        printDateOnConsole(&D);
        break;
        default:
        printf("Wrong choice..");
        break;

    }
    }while(choice != 0);
    return 0;
}