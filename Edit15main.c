int main()
{
    int choice;
    do
    {
        printf("\n------ LOGISTICS MANAGEMENT MENU ------\n");
        printf("1. Add City\n");
        printf("2. Manage Cities\n");
        printf("3. Edit Distance\n");
        printf("4. Display Distance Table\n");
        printf("5. Calculate Delivery\n");
        printf("6. Least Distance Route\n");
        printf("7. Show Report\n");
        printf("8. Rename City\n");
        printf("9. Remove City\n");
        printf("0. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addCity(cities,&cityCount);
            break;
        case 2:
            manageCities(cities,cityCount);
            break;
        case 3:
            editDistance(cities, distance, cityCount);
            break;
        case 4:
            displayDistanceTable(cities,distance, cityCount);
            break;
        case 5:
            calculateDelivery(cities, distance, &deliveryCount, cityCount);
            break;
        case 6:
            leastDistanceRoute(cities, distance, cityCount);
            break;
        case 7:
            report(distance, deliverySource, deliveryDestination, chargeList, profitList, timeList, deliveryCount);
            break;
        case 8:
            renameCity(cities,cityCount);
            break;
        case 9:
            removeCity(cities, distance, &cityCount);
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    while (choice != 0);

    return 0;
}
