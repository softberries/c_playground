#include <stdio.h>
#include <stdlib.h>

void goWestEast(int *lat, int *lon){
  *lat = *lat - 1;
  *lon = *lon + 1;
}
int main(){
  int latitude = 10;
  int longitude = 10;
  goWestEast(&latitude, &longitude);
  printf("Latitude: %i Longitude: %i\n", latitude, longitude);
}
