#include<stdio.h>
int main(void) {
 int n,i,x,s;
while ( 1 ) {
scanf("%d",&n); if ( n==(-1) ) break;
s=0;
for ( i=0;i<n;i++ ) { scanf("%d",&x); s+=x; }
printf("%d\n",s);
}
}