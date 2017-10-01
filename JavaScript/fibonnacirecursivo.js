function fibonnaci(x, y, lim){
  let aux
  let soma

  if (lim){
    soma = x + y
    aux = x
    x = soma
    y = aux
    result += ` ${soma} `
    fibonnaci(x, y, lim-1)

  }
  return result;
}
var result =''
let a = 0
let b= 1
let r = 0
let limite = 10
r += fibonnaci(a, b, limite)
console.log(r)
