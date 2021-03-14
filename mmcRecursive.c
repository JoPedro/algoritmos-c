#include<stdio.h>

int mmcRecur(int a, int b) {
    static int resp = 1;
        
    if(resp % a == 0 && resp % b == 0) {
        return resp;
    }
    else {
        resp++;
        mmcRecur(a, b);
        return resp;
    }
}

int main() {
    int a, b, mmc;
    scanf("%d %d", &a, &b);
    mmc = mmcRecur(a, b);
    printf("%d", mmc);
    return 0;
}