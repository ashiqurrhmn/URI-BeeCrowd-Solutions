#include <stdio.h>


int main(){
	int a, b,c;



	scanf("%d %d %d", &a, &b, &c);
	if(a+b>c && b+c>a && a+c>b){
        if((a==b) && (b==c)){
            printf("Valido-Equilatero\n");
        }
        else if(((a!=b) && (b!=c) && (c!=a))){
            printf ("Valido-Escaleno\n");
        }
        else if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!= b)){
            printf ("Valido-Isoceles\n");

        }

        if((c*c)==(a*a)+(b*b)||(a*a)==(c*c)+(b*b)||(b*b)==(a*a)+(c*c))
        {
            printf ("Retangulo: S\n");
        }
        else
        {
            printf ("Retangulo: N\n");
        }

	}
	else{
        printf("Invalido\n");
	}


	return 0;
}
