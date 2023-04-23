#include <stdio.h>

main(){
	float h, a, b, soma=0;
	a=1;
	for(b=1; b<=50; b++){
		
		h=h+a/b;
		printf("%5.2f - %5.2f ----%.2f\n", a,b,h);
		a=a+2;
		soma=soma+h;
		
	}
	printf("%5.2f \n", h);
	printf("%5.2f \n", a);
	printf("%5.2f", b);

	
}
