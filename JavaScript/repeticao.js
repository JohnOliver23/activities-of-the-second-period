
let resultado = '';
let i
let j
for( i=0; i<=9; i++){
  for( j =0; j<=9; j++){
    let whiteSpace = j ==9? '\n' : ' '
    resultado += i + (j + whiteSpace)
  }

}
console.log(resultado)
