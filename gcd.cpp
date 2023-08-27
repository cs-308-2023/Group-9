#include "functions.h"
#include <iostream>
int gcd(int a,int b){
    int ans = 1;
    int n;
    if(a<b) n = a;
    else n = b;
    for(int i = 1;i<=n;i++){
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;

}
int recGcd(int a, int b){
    if( a== 0 || b == 0) return a+b;
    if(a< b) return recGcd(a, b%a);
    return recGcd(a%b, b);
}

