#include <stdio.h>

int main(){
int i, a[10], b[10],c[10];

for(i=0;i<=9;i++){
    printf("Digite o %d numero",i+1);
    scanf("%d",&a[i]);

}
for(i=0;i<=9;i++){
    printf("Digite o %d numero",i+1);
    scanf("%d",&b[i]);

}
for (i=0;i<=9;i++){
    c[i]=a[i]+b[i];
}
for (i=0;i<=9;i++){
    printf("%d\n",c[i]);
}



}
