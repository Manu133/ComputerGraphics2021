//MALACARA GONZALEZ MANUEL SALVADOR 3CV14
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

#define pdd pair<int,int>
#define round(x) (x<0.0)?(int)(x-0.5):(int)(x+0.5)

void lineFromPoints(pdd P, pdd Q){

    int a = Q.second - P.second;
    int b = P.first - Q.first;
    int c = a * (P.first) + b * (P.second);

    printf("X \t Y\n");
    if(Q.first<P.first){
        while(Q.first!=P.first+1){
            printf("%i \t %i\n", Q.first, round((c-(a*Q.first))/b));
            Q.first++;

        }
    }else{
        while(P.first!=Q.first+1){
            printf("%i \t %i\n", P.first, round((c-(a*P.first))/b));
            P.first++;
    }
    
}
}
int main(){
    int X[2]={0,0};
    int Y[2]={0,0};
    int z;

    for(int i=0; i<2; i++){
        z=1;
        while(z==1){
            printf("Introduce x%d:", i+1);
            scanf("%i", &X[i]);
            if(X[i]>=0){
                z=0;
            }
        }

        z=1;
        while(z==1){
            printf("Introduce y%d:", i+1);
            scanf("%i", &Y[i]);
            if(Y[i]<=100){
                z=0;
            }
        }
        
    }

    pdd P = make_pair(X[0],Y[0]);
    pdd Q = make_pair(X[1],Y[1]);
    
    lineFromPoints(P, Q);


    return 0;
}