#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

double cal_Dis(Point p1, Point p2) {
    return sqrt((p2.x-p1.x) * (p2.x-p1.x) + (p2.y-p1.y) * (p2.y-p1.y));
    
}
int in_rec(Point p, double rx1, double ry1, double rx2, double ry2) {
    return p.x >= rx1 && p.x <= rx2 && p.y >= ry1 && p.y <= ry2;
    
}
int main() {
    Point p1, p2;
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    
 printf("Enter coordinates of point 2 (x y): ");
scanf("%lf %lf", &p2.x, &p2.y);
    
     printf("Distance between the points is: %.2f\n", cal_Dis(p1, p2));
     double rx1, ry1, rx2, ry2;
    
     printf("Enter rectangle boundaries (rx1 ry1 rx2 ry2): ");
     scanf("%lf %lf %lf %lf", &rx1, &ry1, &rx2, &ry2);
    
       if (in_rec(p1, rx1, ry1, rx2, ry2)) {
        printf("Point 1 lies within the rectangle.\n");
        
        } else {
        printf("Point 1 does not lie within the rectangle.\n");
        
     }
     return 0;
}
