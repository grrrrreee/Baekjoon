#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, i, x1, y1, r1, x2, y2, r2;
    float l;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		l = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        
        if(l==0) {
            if(r1==r2) {
                printf("-1\n");
            } else {
                printf("0\n");
            }
        } else if(abs(r1-r2)<l && l<(r1+r2)) {
			printf("2\n");
		} else if(abs(r1-r2)==l || (r1+r2)==l) {
			printf("1\n");
		} else {
			printf("0\n");
		}
	}
	return 0;
}