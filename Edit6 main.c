void addCity(char cities[][30],int *cityCount)
{
    if (*cityCount >= MAX_CITIES)
    {
        printf("City limit reached!\n");
        return;
    }
    printf("Enter city name: ");
    scanf("%s", cities[*cityCount]);
    (*cityCount)++;
    printf("City added successfully!\n");
}
