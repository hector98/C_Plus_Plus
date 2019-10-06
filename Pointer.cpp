#include <stdio.h>

void update(int *a,int *b) {
  int a1=(*a), b1=(*b);
 (*a)= a1 + b1;
 (*b)=a1 - b1;
 if(b1>a1)
 {
   (*b)=(*b)*(-1);
 }

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
