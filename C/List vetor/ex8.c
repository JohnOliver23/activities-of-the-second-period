#include <stdio.h>

int main(){
int p, a, aposta[8], v, v2=0, numeroscerto[5], apostacerta[]={06, 07, 13, 14,26};

    for(p=0;p<2;p++){
        v=0;
        for(a=0;a<=7;a++){
        printf("digite o %d numero de 1 a 80\n",a);
        scanf("%d",&aposta[a]);
    }
    for(a =0; a<=7;a++){
        if((aposta[a]<=0)||(aposta[a]>80)){
            v ++;
        }

        }
        for(p=0;p<=7;p++){
            for(a=p+1;a<=7;a++){
                if(aposta[p]==aposta[a]){
                    v2++;
            }

        }
    }
    if ((v==0)&&(v2==0)){
        printf("aposta valida\n");
        printf("numeros acertados : \n");
        for(p=0;p<=7;p++){
            for(a=0;a<5;a++){
                if(aposta[p]==apostacerta[a]){
                    printf("%d\n",aposta[p]);
                }
            }
        }
    }else{
        printf("aposta invalida");
    }
}


    return 0;

}

