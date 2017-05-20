#include "types.h"
#include "param.h"
#include "stat.h"
#include "user.h"

#define MAX 1123
#define nprocs 5
int main(void){
  int i, tpids[nprocs];
  for(i=0; i < nprocs; i++){
    tpids[nprocs]=fork(nprocs % 5);
    if(tpids[nprocs] == 0){
      for(int j=0; j<MAX; j++);
      wait();
      exit();
    }
  }
  return 0;
}
