#include<cstdio>
#include<cmath>
#include<climits>
int main(){
    double i,t,m=1,sum=0;
    for(i=1;i<INT_MAX;i+=2){
        t=(pow(-1,m+1))*(1/i);
        if(fabs(t)<(1e-6))break;
        sum+=t;
        m+=1;
    }
    printf("PI=%10.8f\n",4*sum);
    return 0;
}
