#include <stdio.h>
#include <string.h>
struct Flight {
    int flightNumber;
    char departureCity[40];
    char destinationCity[40];
    char date[11];
    int availableSeats;
};
     void bookSeat(struct Flight *flight) {
      if (flight->availableSeats > 0) {
          flight->availableSeats--;
          printf("Seat booked successfully!\n");
    } 
	else {
          printf("Sorry, no seats available for this flight.\n");
         }
     }
     void displayFlightDetails(const struct Flight *flight) {
     printf("Flight Number: %d\n", flight->flightNumber);
     printf("Departure City: %s\n", flight->departureCity);
     printf("Destination City: %s\n", flight->destinationCity);
     printf("Date: %s\n", flight->date);
     printf("Available Seats: %d\n", flight->availableSeats);
      }
     int main() {
    struct Flight flight1 = {106, "Pakistan", "Japan", "2024-11-21", 43};
    displayFlightDetails(&flight1);
    bookSeat(&flight1);
    displayFlightDetails(&flight1);
    return 0;
}