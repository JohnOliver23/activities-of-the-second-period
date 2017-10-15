function primeFactors(number){
  let result = []
  let aux = number;
  let somaFat = 1;//serve para somar os numeros antecessores fatorados, caso o numero seja muito grande
  let numberInic// serve para guardar o numero inicial caso ele seja muito grande
  if(number == 1){
    return [];
  }else if(number ==2){
    return [2]
  }else if( number ==3){
    return [3]
  }else{
    if(number > 100000000){//se o numero for muito grande, fatora-se pela raiz quadrada do número
      numberInic = number//variável guarda o valor inicial de number
      number = Math.sqrt(number);// number recebe a raiz dela

      for (let i=2; i<number; i++){
        if(aux % i ==0){
          while((aux % i == 0)&&( aux !=1)){
            aux = parseInt(aux/i);
            result.push(i);

          }//fim do while
        }//fim do if
      }//fim do for
      for (let value of result){
         somaFat = somaFat*value//somaFat guarda o resultado da multiplicação do elementos antecessores

      }
      let valueCert = numberInic / somaFat//na fatoração, o próximo elemento é a divisão do numero inicial pela multiplicação dos antecessores
      result.push(valueCert);
    }else{
      for (let i=2; i<number; i++){
        if(aux % i ==0){
          while((aux % i == 0)&&( aux !=1)){
            aux = parseInt(aux/i);
            result.push(i);
            }
          }
        }
      }//fim do else
    }//fim do 1 else
   return result;
}
module.exports = primeFactors
//console.log(primeFactors(1))           //=> []
//console.log(primeFactors(2))           //=> [2]
//console.log(primeFactors(3))           //=> [3]
//console.log(primeFactors(4))           //=> [2, 2]
//console.log(primeFactors(6))           //=> [2, 3]
//console.log(primeFactors(8))           //=> [2, 2, 2]
//console.log(primeFactors(9))           //=> [3, 3]
//console.log(primeFactors(27))          //=> [3, 3, 3]
//console.log(primeFactors(625))         //=> [5, 5, 5, 5]
//console.log(primeFactors(901255))      //=> [5, 17, 23, 461]
//console.log(primeFactors(93819012551)) //=> [11, 9539, 894119]
