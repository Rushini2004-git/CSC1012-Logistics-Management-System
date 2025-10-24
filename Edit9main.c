void removeCity(char cities[][30], float distance[][MAX_CITIES], int*cityCount)
{

    int index;
    printf("Enter the city index you want to remove: ");
    scanf("%d", &index);

    if (index < 0 || index >= *cityCount)
    {
        printf("Invalid city index!\n");
        return;
    }

    
    for (int i = index; i < *cityCount - 1; i++)
    {
        strcpy(cities[i], cities[i + 1]);
        for (int j = 0; j < *cityCount; j++)
        {
            distance[i][j] = distance[i + 1][j];
            distance[j][i] = distance[j][i + 1];
        }
    }
    (*cityCount)--;
    printf("City removed successfully!\n");
}
