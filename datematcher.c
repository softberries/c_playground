#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
  "William: SBM GSOH likes sports, TV, dining",
  "Matt: SWM NS likes art, movies, theater",
  "Luis: SLM ND likes books, theater, art",
  "Mike: DWM DS likes trucks, sports and bieber",
  "Peter: SAM likes chess, working out and art",
  "Josh: SJM likes sports, movies and theater",
  "Jed: DBM likes theater, books and dining"
};

int sports_no_biber(char *arr){
  return strstr(arr, "sports") && !strstr(arr, "bieber");
}
int sports_or_workout(char *arr){
  return strstr(arr, "sports") || strstr(arr,"workout");
}
int arts_theater_or_dining(char *arr){
  return strstr(arr,"arts") || strstr(arr,"theater") || strstr(arr, "dining");
}

void find(int(*match)(char*)){
  int i;
  puts("Search results:\n");
  puts("--------------------------------");
  for(i = 0;i<NUM_ADS;i++){
    if(match(ADS[i])){
      printf("%s\n",ADS[i]);
    }
  }
  puts("--------------------------------");
}

int main(){
  find(sports_no_biber);
}
