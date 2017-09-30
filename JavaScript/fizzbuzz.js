let result2
let resultado = ''
let j=1

for(let i =1; i<=100; i++){
  if (i % 3 ==0 && i % 5 ==0){
    result2 ='fizz e buzz'
  }
  if(i % 3 ==0){
    result2 = 'fizz'
  }else if(i % 5 ==0){
    result2 = 'buzz'
  }else{
    result2 = i
  }
  j ++;
  whiteSpace = j == 9? '\n': ' '
  resultado += whiteSpace + result2
  if(j==9){
    j =1;
  }
}
console.log(resultado)
