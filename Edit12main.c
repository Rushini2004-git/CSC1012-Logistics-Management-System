void calculateDelivery(char cities[][30], float distance[][MAX_CITIES], int *deliveryCount, int cityCount)
{
    if (*deliveryCount >= MAX_DELIVERIES)
    {    
    if (cityCount < 2)
    {
        printf("Add at least two cities first!\n");
      
    }


    int src, dest, vehicleType;  //src=source //dest=destination
    float weight;
    printf("Enter source city index: ");
    scanf("%d", &src);
    printf("Enter destination city index: ");
    scanf("%d", &dest);
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Vehicle (1=Van, 2=Truck, 3=Lorry): ");
    scanf("%d", &vehicleType);
    vehicleType--;

    if (src == dest)
    {
        printf("Error: Same cities!\n");
      
    }
    if (vehicleType < 0 || vehicleType > 2)
    {
        printf("Invalid vehicle type!\n");
        
    }
    if (weight > capacity[vehicleType])
    {
        printf("Error: Exceeds capacity!\n");
        
    }

    float D = distance[src][dest];
    float R = ratePerKm[vehicleType];
    float S = avgSpeed[vehicleType];
    float E = fuelEfficiency[vehicleType];


    float cost = D * R * (1 + weight / 10000.0);
    float fuelUsed = D / E;
    float fuelCost = fuelUsed * FUEL_PRICE;
    float totalCost = cost + fuelCost;
    float profit = cost * 0.25;
    float customerCharge = totalCost + profit;
    float time = D / S;

    
    int i = *deliveryCount;
    deliverySource[i] = src;
    deliveryDestination[i] = dest;
    deliveryVehicleType[i] = vehicleType;
    deliveryWeight[i] = weight;
    deliveryCost[i] = cost;
    fuelUsedList[i] = fuelUsed;
    totalCostList[i] = totalCost;
    profitList[i] = profit;
    chargeList[i] = customerCharge;
    timeList[i] = time;
    (*deliveryCount)++;

    printf("\n----- DELIVERY SUMMARY -----\n");
    printf("From: %s  To: %s\n", cities[src], cities[dest]);
    printf("Vehicle: %s\n",vehicle[vehicleType]);
    printf("Weight: %.1f kg\n", weight);
    printf("Minimum Distance: %.1f km\n", D);
    printf("Base Cost: %.1f LKR\n", cost);
    printf("Fuel Used: %.1f L\n", fuelUsed);
    printf("Fuel Cost: %.1f LKR\n", fuelCost);
    printf("Operational Cost: %.1f LKR\n", totalCost);
    printf("Profit: %.1f LKR\n", profit);
    printf("Customer Charge: %.1f LKR\n", customerCharge);
    printf("Estimated Time: %.1f hrs\n", time);
    printf("----------------------------\n");
}
