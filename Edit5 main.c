void addCity(char cities[][30],int *cityCount);
void manageCities(char cities[][30], int cityCount);
void renameCity(char cities[][30], int cityCount);
void removeCity(char cities[][30], float distance[][30], int*cityCount);
void editDistance(char cities[][30], float distance[][30], int cityCount);
void displayDistanceTable(char cities[][30],float distance[][30], int cityCount);
void calculateDelivery(char cities[][30], float distance[][30], int *deliveryCount, int cityCount);
void leastDistanceRoute(char cities[][30], float distance[][30], int cityCount);
void report(float distance[][30], int deliverySource[], int deliveryDestination[], float customerCharge[], float profit[], float time[], int deliveryCount);
