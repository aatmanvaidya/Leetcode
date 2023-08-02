#include <stdio.h>
int main() {
int t;
scanf("%d", &t);
while (t--) {
int n, m;
scanf("%d%d", &n, &m);
printf("%d\n", n > 2 ? m * 2 : (n == 1 ? 0 : m));
}
return 0;
}