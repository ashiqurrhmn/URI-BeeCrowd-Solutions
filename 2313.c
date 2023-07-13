#include <stdio.h>

int main()
{

  int A,B,C;
  scanf("%d %d %d", &A, &B, &C);

  if((A+B)>C && (B+C)>A && (C+A)>B)
  {
  {
      if(A==B && B==C)
      {
          printf("Valido-Equilatero\n");
      }else if((A!=B) && (B!=C) && (C!=A))
      {
          printf("Valido-Escaleno\n");
      }else if((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B))
      {
          printf("Valido-Isoceles\n");
      }
  }if(C*C==(A*A + B*B) || A*A==(B*B + C*C) || B*B==(C*C + A*A))
  {
      printf("Retangulo: S\n");

  }else
  {
      printf("Retangulo: N\n");
  }
}else
{
    printf("Invalido\n");
}
    return 0;
}
