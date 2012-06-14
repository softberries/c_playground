#include <stdio.h>
#include <string.h>

char tracks[][80] = {
  "I left my heart at high school",
  "Newark, Newark - a wonderfull town",
  "Dancing with the Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char *search_for){
  int i;
  int found = 0;
  char *longstring = "some long string";
  char *shortstring = "long";
  printf("searching for: %s\n",search_for);
  printf("address: %p\n",strstr(longstring, search_for));
  for(i = 0;i<5;i++){
    
    if(strstr(tracks[i],search_for)){
      printf("Track %i: '%s'\n",i,tracks[i]);
      found = 1;
    }
  }
  if(!found){
    printf("no tracks has been found!\n");
  }
}
int main(){
  char search_for[80];
  printf("Search for: ");
  fgets(search_for, 80, stdin);
  int i;
  char *townstr = "town";
  for(i=0;i<5;i++){
    if(strstr(tracks[i],townstr)){
      printf("Track %i '%s'\n",i,tracks[i]);
    }
  }
  return 0;
}
