#include <stdio.h>
#include <math.h>

int main() {
    int i, n = 10;
    double sum = 0.0, mean, variance = 0.0, stddev;

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);
        sum += x;
        variance += x * x;
    }

    mean = sum / n;
    variance = (variance / n) - (mean * mean);
    stddev = sqrt(variance);

    printf("Average = %lf\n", mean);
    printf("Standard Deviation = %lf\n", stddev);

    return 0;
}
