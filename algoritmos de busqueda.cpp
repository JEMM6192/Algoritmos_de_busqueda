//busqueda secuencial

include <stdio.h>
int encuentra(int A[], int b) {
int k=1, result=-1;
do{
if (A[k]== b)
result =k;
else
k++;
}while ((result==-1)&&(k<10));
return result;
}
int main() {
int i, x[10];
for(i=0;i<10;i++)
scanf("%d",&x[i]);
i = encuentra( x, 10);
printf("resultado %d\n",i);
return 0;
}


//busqueda binaria

i= 0;
j= tamaño-1;
do {
k= (i+j)/2;
if (v[k]<=b )
i=k+1;
if (v[k]>=b )
j= k-1;
} while (i<=j);
