#include <stdio.h>
struct str{
	int e1, e2;
} s;

void main(){
	int a1 = 3, a2 = 4;
	int b1, b2;
	int c[2];
	int d1, d2;
	
	printf("First Number : ");
	scanf("%d", &b1);
	printf("Second Number : ");
	scanf("%d", &b2);
	
	c[0] = 3, c[1] = 4;
	
	FILE* fp;
	fp = fopen("my.txt", "r");
	fscanf(fp, "%d %d", &d1, &d2);
	fclose(fp);
	
	s.e1 = 3, s.e2 = 4;
	
	printf("Total Sum : %d", a1 + a2 + b1 + b2 + c[0] + c[1] + d1 + d2 + s.e1 + s.e2);
}
