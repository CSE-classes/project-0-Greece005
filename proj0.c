#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){


printf(1, "CSE3320 proj0 printing in user space: ");

int i;

for(i = 1; i< argc; i++){
  printf(1, "%s", argv[i]);
  if(i < argc - 1){
        printf(1," ");
  }
}

printf(1, "\n");

exit ();

}
