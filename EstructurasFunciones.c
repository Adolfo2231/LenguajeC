#include <stdio.h>

struct Point
{
    int x;
    int y;
};

// Implement calcDistance here
int calcDistance(struct Point p1, struct Point p2)
{
    int result = (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
    return result;
}

int main()
{
    char tmp[50];
    int p1x, p1y, p2x, p2y;
    scanf("%s %d %d", &tmp, &p1x, &p1y);
    scanf("%s %d %d", &tmp, &p2x, &p2y);
    struct Point p1 = {p1x, p1y};
    struct Point p2 = {p2x, p2y};

    int distance = calcDistance(p1, p2);

    printf("Distance between p1 and p2: %d", distance);
    return 0;
};
