#include <stdio.h>
int GCDrec(int a, int b){
	if (b == 0){
		return a;
	}else{
		return GCDrec(b, a%b);
	}//end if
}//end GCDrec

int GCDloop(int a, int b){
    int temp;
	while (b != 0){
		temp = b;
		b = a%b;
		a = temp;
	}//end while

return a;
}//end GCDloop

int main(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("The GCD is %d\n", GCDrec(a,b));
	printf("The GCD is %d", GCDloop(a,b));

}//end main
