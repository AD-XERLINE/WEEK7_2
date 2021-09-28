#include <stdio.h>
int n;
void draw_star() {
	for(int i=0;i<n;i++){
	printf("*");	
	}
}
int main() {
	printf("Enter the number: ");
	scanf("%d", &n);
	
    for(int j=0;j<n;j++){
	draw_star();
	printf("\n");
    }
}
