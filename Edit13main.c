void leastDistanceRoute(char cities[][30], float distance[][MAX_CITIES], int cityCount)
{
    int source, destination;

    printf("Enter source index: ");
    scanf("%d", &source);
    printf("Enter destination index: ");
    scanf("%d", &destination);
    if (source == destination)
    {
        printf("Source and destination cannot be same.\n");

    }

    if (distance[source][destination] == 0)
    {
        printf("No direct distance  between recorded cities.\n");

    }

    float min = distance[source][destination];
    int mid= -1;


    for (int i = 0; i < cityCount; i++)
    {
        if (i == source || i == destination)
            continue;

        if (distance[source][i] > 0 && distance[i][destination] > 0)
        {
            float total = distance[source][i] + distance[i][destination];
            if (total < min)
            {
                min = total;
                mid= i;
            }
        }
    }


    if (mid == -1)
    {
        printf("%s -> %s\n", cities[source], cities[destination]);
    }
    else
    {
        printf("%s -> %s -> %s\n", cities[source], cities[mid], cities[destination]);


    }
    printf("Minimum distance: %.1f km\n", min);
}
