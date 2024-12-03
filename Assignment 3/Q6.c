#include <stdio.h>

struct Field {
    float gpsCoordinates[2]; 
    int soilhealth;          
    int moistureLevel;     
};

void inputfieldData(struct Field fields[], int numfields) {
    for (int i = 0; i <numfields; i++) {
        printf("Enter data for Field %d:\n", i+1);
        printf("GPS Coordinates (latitude and longitude): ");
        scanf("%f %f", &fields[i].gpsCoordinates[0], &fields[i].gpsCoordinates[1]);
        printf("Soil Health (1-100): ");
        scanf("%d", &fields[i].soilhealth);
        printf("Moisture Level (0-100): ");
        scanf("%d", &fields[i].moistureLevel);
    }
}

void displayfieldData(struct Field fields[], int numfields) {
    printf("\n----------------------------------");
    printf("\n|            Field Data          |\n");
    printf("----------------------------------\n");
    for (int i = 0; i < numfields; i++) {
        printf("Field %d: GPS (%.2f, %.2f), Soil Health: %d, Moisture: %d%%\n",
               i + 1, fields[i].gpsCoordinates[0], fields[i].gpsCoordinates[1],
               fields[i].soilhealth, fields[i].moistureLevel);
    }
}

int main() {
    int numfields = 3;
    struct Field fields[10];

    inputfieldData(fields, numfields);
    displayfieldData(fields, numfields);

    return 0;
}
