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

