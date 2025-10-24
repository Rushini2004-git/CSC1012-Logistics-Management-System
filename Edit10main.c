void editDistance(char cities[][30], float distance[][MAX_CITIES], int cityCount)
{

    if (cityCount < 2)
    {
        printf("At least two cities are required!\n");
        return;
    }
    int i, j;
    printf("Enter source city index: ");
    scanf("%d", &i);
    printf("Enter destination city index: ");
    scanf("%d", &j);
    if (i == j)
    {
        printf("Distance from a city to itself is 0.\n");
        return;
    }
    if (i < 0 || j < 0 || i >= cityCount || j >= cityCount) {
        printf("Invalid indexes!\n");
        return;
    }
    printf("Enter distance (km): ");
    scanf("%f", &distance[i][j]);
    distance[j][i] = distance[i][j];
    printf("Distance recorded successfully!\n");
}
