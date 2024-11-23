#include<stdio.h>
#define M_TO_KM 0.001

double cvt(double m) {
    return m * M_TO_KM;
  }
    int main() {
    int n, cnt = 0;
    double m;
    printf("How many times to convert meter to km: ");
    scanf("%d", &n);
    while (n--) {
    printf("Enter distance in meters: ");
    scanf("%lf", &m);
    printf("Distance in km: %.2lf\n", cvt(m));
    cnt++;
    }
    printf("Total function calls are: %d\n", cnt);
    return 0;
  }
