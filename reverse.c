#include <stdio.h>
#include <malloc.h>
#define FIN "scarface.in"

void _swap(int *a, int *b) {

     int holder = *a;
     
         *a = *b;

         *b = holder;
}

void _reverse3(int *p, int n) {

     int i;

     for(i = 0; i < n/2; ++i) 

         _swap(&p[i], p + n - i - 1);  
}

void _reverse2(int *p, int n) {

	 int lo, hi;

	 for(lo = 0, hi = n - 1; lo < hi; lo++, hi--) {

	 	 int holder = p[lo];

	 	     p[lo] = p[hi];

	 	     p[hi] = holder;	 	       
	 }
}

void __reverse(int *p, int lo, int hi) {

	 if(lo < hi) {

	 	int holder = p[lo];

	 	    p[lo] = p[hi];

	 	    p[hi] = holder;

	 	    __reverse(p, lo + 1, hi - 1);  
	 }
}

void _reverse(int *p, int n) {
 
     __reverse(p, 0, n - 1); 
}

int main() {

	int n, i, *p; 

	freopen(FIN, "r", stdin);

	scanf("%d", &n); 

	p = (int*)malloc(sizeof(int) * n);

	for(i = 0; i < n; ++i) scanf("%d", p + i);

    for(i = 0; i < n; ++i) printf("%d ", *(p + i));		

    _reverse3(p, n);

    printf("\n");	

    for(i = 0; i < n; ++i) printf("%d ", *(p + i));		

    printf("\n");	

	return(0);
}