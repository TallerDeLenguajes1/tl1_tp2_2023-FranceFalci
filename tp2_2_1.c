// codigo a completar
#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#define N 20

int main(){
int i=0;
float vt[N];
float *pvt = vt;
srand(time(NULL));
// for (int i = 0; i < N; i++)
// {
//     pvt[i]=1+rand()%100;
//     printf("%d \n", pvt[i]);
//     pvt++;
// }

while(i<N){
    *pvt=1+rand()%100;
    printf("%.3f \n", *pvt);
    pvt++;
    i++;
}
 
return 0;
}