void manageCities(char cities[][30], int cityCount)
{
    printf("\n Cities:\n");
    if (cityCount == 0)
    {
        printf("No cities added yet.\n");
        return;
    }
    for (int i = 0; i < cityCount; i++)
        printf("%d. %s\n", i, cities[i]);
}
