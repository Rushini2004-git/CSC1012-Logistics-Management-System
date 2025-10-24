void displayDistanceTable(char cities[][30],float distance[][MAX_CITIES], int cityCount)
{
    if (cityCount == 0)
    {
        printf("No cities available.\n");
        return;
    }
    printf("\nDistance Table (km):\n\t");
    for (int i = 0; i < cityCount; i++)
        printf("%s\t", cities[i]);
    printf("\n");
    for (int i = 0; i < cityCount; i++)
    {
        printf("%s\t", cities[i]);
        for (int j = 0; j < cityCount; j++)
            printf("%.1f\t", distance[i][j]);
        printf("\n");
    }
}
