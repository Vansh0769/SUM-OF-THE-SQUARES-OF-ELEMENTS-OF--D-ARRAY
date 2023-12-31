/*SUM OF THE SQUARES OF ELEMENTS OF !-D ARRAY*/
#include <stdio.h>

int main () {
int i;
int a[10],element,total;

printf ("Enter 10 real numbers element: ");

for (i=0;i<10;i++){
    scanf ("%d",&element);
 a[i]= element;
}
total = 0;
for (i=0;i<10;i++){
total = total+a[i]*a[i];
}
printf ("\n");
for (i=0;i<10;i++){
    printf ("a[%d%] = %d\n",i+1,a[i]);
}
printf ("\n total=%d\n",total);
return 0;
}
