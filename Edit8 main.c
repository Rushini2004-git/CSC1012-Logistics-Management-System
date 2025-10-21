void renameCity(char cities[][30], int cityCount)
{

    int index;
    printf("Enter the city index you want to rename: ");
    scanf("%d", &index);

    if (index < 0 || index >= cityCount)
    {
        printf("Invalid city index!\n");
        return;
    }

    printf("Enter the new city name: ");
    scanf("%s", cities[index]);
    printf("City renamed successfully!\n");
}
