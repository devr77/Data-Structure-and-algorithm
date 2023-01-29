
#include <stdio.h>
#include <math.h>

struct Point {
  int x, y;
};

void read(struct Point * ptr) {
  printf("Enter x ");
  scanf("%d", &ptr->x);

  printf("Enter y");
  scanf("%d", &ptr->y);
}

void print(struct Point t) {
  printf("(%d, %d)\n", t.x, t.y);
}

int main() {

  struct Point p, q;

  int diffx, diffy;
  double distance;

  printf("Enter first point \n");
  read(&p);

  printf("Enter second point \n");
  read(&q);

  diffx = p.x - q.x;
  diffy = p.y - q.y;

  distance = sqrt( diffx * diffx + diffy * diffy );

  printf("Point p is ");
  print(p);
  printf("Point q is ");
  print(q);

  printf("distance between two points is %lf \n", distance);

  return 0;
}
