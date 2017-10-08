function prime(x){
  var result = '2'
  let aux = 2;//auxiliar q divide os valores
  let c =3// valor inicial da sequencia
  let limit =1// serve como identificador de ocorrências
  let flag = 0// verifica se o numero e primo ou nao
  while (limit < x){// serve pra contar quantas vezes o laço deve executar
    if(c % aux ==0){
      c++;//se o numero for par, logo o numero nao é primo, comexecessao do 2
    }else{
      for (let i=1; i<=c; i++){//sendo inpar, se faz uma série de verificação pra saber se ele é divisível só por ele e por 1
        if (c % i == 0){//se for divisivel por i flag é incrementado
          flag++;
        }
      }
      if(flag<=2){//se flag for menor ou igual a dois, logo o numero so é divisível por ele mesmo e por 1: logo é primo
        result +=` ${c}` //result e incrementado com o numero primo
        limit++ //o contador e incrementado
      }

      flag=0;// flag e mudado para 0 para verificar se o proximo numero é primo
      c++

    }
  }
  return result;
}


module.exports = prime;
