function fibonacci(x){
  let a =0
  let b =1
  let result = [a, b]
  let soma;
  if(x>1){
    while(x>2){
      soma = a+b
      a = b
      b = soma
    result[result.length] = soma
    x--
  }
}else if(x==1){
  return 0;
}
else{
  return [];
}
  return result
}




module.exports = fibonacci;
