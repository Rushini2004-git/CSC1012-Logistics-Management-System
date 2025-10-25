void report(float distance[][MAX_CITIES], int deliverySource[], int deliveryDestination[], float customerCharge[], float profit[], float time[], int deliveryCount)
{
    float totalDistance = 0, totalRevenue = 0, totalProfit = 0, totalTime = 0;
    for (int i = 0; i < deliveryCount; i++)
    {
        totalDistance += distance[deliverySource[i]][deliveryDestination[i]];
        totalRevenue += chargeList[i];
        totalProfit += profitList[i];
        totalTime += timeList[i];
    }

    printf("\n===== PERFORMANCE REPORT =====\n");
    printf("Total Deliveries: %d\n", deliveryCount);
    printf("Total Distance: %.2f km\n", totalDistance);
    float avgTime;
    if (deliveryCount != 0){
        avgTime = totalTime / deliveryCount;
    }else{
        avgTime = 0;
    }
    printf("Average Time: %.2f hrs\n", avgTime);

    printf("Total Revenue: %.2f LKR\n", totalRevenue);
    printf("Total Profit: %.2f LKR\n", totalProfit);

    printf("================================\n");
}
