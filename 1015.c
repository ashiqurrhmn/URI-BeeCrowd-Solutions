#include <stdio.h>

int main() {

    float x1, x2, y1, y2, dis;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("%.4f\n", dis);

    return 0;
}
