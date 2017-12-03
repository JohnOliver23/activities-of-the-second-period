#include "lista.h"
#include <stdlib.h>
void criar(TLista *l){
*l = NULL;
}

int vazia(TLista l){
return l==NULL;
}
int tamanho(TLista l){
int contador =0;
while(l != NULL){
    contador++;
    l = l->prox;
}
return contador;
}
int posicao(TLista l, telem valor){
int pos;
if(vazia(l))
    return 0;
while(l!= NULL){
        pos++;
    if(l->dado == valor){
        return pos;
    }
    l = l->prox;
}
return 0;
}
void imprimir(TLista l){
while (l != NULL){
    printf("%d ", l->dado);
    l = l->prox;
}
}
int inserir(TLista *l, telem valor, int pos){
TLista aux, temp;
///inserção em lista vazia
if(*l==NULL){
    if(pos!=1)
        return 0;
    aux = (TLista)malloc(sizeof(tno));
    if(aux==NULL)
        return 0;
    aux->dado = valor;
    aux->prox = NULL;
    *l = aux;
    return 1;
}
///inserção na primeira posição em lista não vazia
if(pos==1){
    aux = (TLista)malloc(sizeof(tno));
    if(aux == NULL)
        return 0;///memória insuficiente
    aux->dado = valor;
    aux->prox = *l;
    *l = aux;
    return 1;

}
///inserção em lista não vazia após a primeira posição
temp = *l;
int n=1;
aux = (TLista)malloc(sizeof(tno));
if(aux==NULL)
    return 0;///memória insuficiente
while(n<pos-1 && pos!=NULL){
    temp = temp->prox;
    n++;
}
if(temp==NULL)
    return 0;
aux->dado = valor;
aux->prox = temp->prox;
temp->prox = aux;
return 1;


}
int remover (TLista *l, telem *valor, int pos){
if(*l==NULL)
    return 0;
TLista aux, anterior;
aux = *l;
if(pos==1){///remoção na primeira posição
*valor = aux->dado;
*l = aux->prox;
free(aux);
return 1;
}
///remoção após a primeira posição
int n=1;

while(n <pos && aux!=NULL){
    anterior = aux;
    aux = aux->prox;
    n++;
}
if(aux==NULL)
    return 0;

*valor = aux->dado;
anterior->prox = aux->prox;
free(aux);
return 1;


}
TLista clonar(TLista l){
if(l==NULL)
    return NULL;
TLista clone = NULL, aux, anterior;
while(l!=NULL){
aux = (TLista)malloc(sizeof(tno));
if(aux==NULL)
    return NULL;///memória insuficiente
aux->dado = l->dado;
aux->prox = NULL;
    if(clone==NULL){
        clone = aux;
    }else{
        anterior->prox = aux;
    }
    anterior = aux;
    l = l->prox;


}
return clone;
}
int intersecao(TLista l1,TLista l2,TLista *resultadofinal){
    TLista aux = l2;
    int valor, flag=0, pos=1;
    if(l1==NULL || l2==NULL)
        return 0;
    while(l1!=NULL){
        while(aux!=NULL){
            if(l1->dado == aux->dado){
                flag++;
            }
            aux = aux->prox;
        }
        if(flag!=0){
            valor = l1->dado;
            inserir(resultadofinal, valor, pos);
            pos++;

        }
        flag =0;
        aux = l2;
        l1 = l1->prox;

    }
    return 1;
    /*TLista aux = l2;
    int pos = 1;
    int valor;
    if(l1 == NULL || l2 == NULL)
        return 0;
    while(l1!=NULL){
        while(aux !=NULL){
            if(l1->dado == aux->dado){
                valor = l1->dado;
                inserir(resultadofinal, valor, pos);
                pos++;
            }
            aux = aux->prox;
        }
        aux = l2;
        l1 = l1->prox;
    }
    return 1;*/
}
int uniao(TLista l1, TLista l2, TLista *resultadofinal){
    int valor, pos=1;
    if(l1==NULL || l2 == NULL)
        return 0;
    while(l1!=NULL){
        valor = l1->dado;
        inserir(resultadofinal, valor, pos);
        pos++;
        l1 = l1->prox;
    }
    while(l2!=NULL){
        valor = l2->dado;
        inserir(resultadofinal, valor, pos);
        pos++;
        l2 = l2->prox;
    }
    return 1;
/*if(l1 == NULL|| l2 == NULL)
    return 0;
TLista aux;
int pos1 = 1;
int pos2 = 1;
int valor;
while(l1!=NULL){
    aux = malloc(sizeof(tno));
    if(aux==NULL)
        return 0;
    aux->dado = l1->dado;
    aux->prox = NULL;
    remover(&aux, &valor, pos1);
    inserir(resultadofinal, valor, pos2);
    pos2++;
    l1 = l1->prox;

}

while(l2!=NULL){
    aux = malloc(sizeof(tno));
    if(aux==NULL)
        return 0;
    aux->dado = l2->dado;
    aux->prox = NULL;
    remover(&aux, &valor, pos1);
    inserir(resultadofinal, valor, pos2);
    pos2++;
    l2 = l2->prox;
}
*/
return 1;
}

int diferenca(TLista l1, TLista l2, TLista *resultadofinal){
if(l1 == NULL || l2==NULL)
    return 0;
TLista aux = l2;
int valor, pos=1, flag=0;
while(l1!=NULL){
    while(aux!=NULL){
        if(l1->dado == aux->dado){
            flag++;
        }
        aux = aux->prox;
    }
    if(flag==0){
        valor = l1->dado;
        inserir(resultadofinal, valor, pos);
        pos++;
    }
    aux = l2;
    l1 = l1->prox;
    flag = 0;

}
return 1;
/*
if(l1==NULL || l2==NULL)
    return 0;
TLista aux = l2;
int pos = 1, valor, flag=0;
while(l1!=NULL){
    while(aux!=NULL){
        if(l1->dado == aux->dado){
            flag++;
        }
        aux = aux->prox;
    }
    if(flag==0){
            valor = l1->dado;
            inserir(resultadofinal, valor, pos);
            pos++;
        }
    l1 = l1->prox;
    aux = l2;
    flag=0;

}
return 1;
*/
}
int removerRepetido(TLista *l){
if(vazia(*l))
    return 0;
int pos =1;
int flag = 0;
int valor;
TLista aux1;
TLista aux2;
aux1 = clonar(*l);
criar(l);
while(aux1!=NULL){
    aux2 = aux1->prox;
    while(aux2!=NULL){
        if(aux1->dado == aux2->dado){
            flag++;
        }
        aux2 = aux2->prox;
    }
    if(flag==0){
        valor = aux1->dado;
        inserir(l, valor, pos);
        pos++;
    }
    flag=0;
    aux1 = aux1->prox;
}
return 1;

}
TLista separa(TLista l, int n){
if(vazia(l))
    return NULL;
TLista separada;
criar(&separada);
int c = 1, valor, pos=1;
while(c <= n){
    l = l->prox;
    c++;
    if(l==NULL)
        return NULL;

}
while (l!=NULL){
    valor = l->dado;
    inserir(&separada, valor, pos);
    pos++;
    l = l->prox;
}
return separada;

}
int inserirOrdenadamente(TLista *l, telem valor){
    ///Inserção em lista vazia
    if(vazia(*l)){
        TLista aux = (tno*)malloc(sizeof(tno));
        aux->dado = valor;
        aux->prox = NULL;
        *l = aux;
    }else{
        TLista novo = *l;
        TLista ant = *l;
        TLista aux = (tno*)malloc(sizeof(tno));
        if(aux==NULL)
            return 0;
        int n =1;
        while(novo!=NULL && novo->dado < valor){
            ant = novo;
            novo = novo->prox;
            n++;
        }
        if(n==1){///Inserção na primeira posição em lista não vazia
            aux->dado = valor;
            aux->prox = novo;
            *l = aux;
        }else if(novo==NULL){///Inserção na ultima posição
            aux->dado = valor;
            aux->prox = NULL;
            ant->prox = aux;
        }else{///inserção em qualquer pposição que não seja na primeira nem na última
            aux->dado = valor;
            aux->prox = ant->prox;
            ant->prox = aux;
        }

    }
    return 1;

}
