
let result =''

for (let  i =0; i<8; i++){

  for(let j=0; j<8; j++){
    if (i % 2 == 0){

      if(j % 2 ==0){
        result +='#'

      }else{
        result +=' '
      }
    }else{
      if (j % 2 == 0){
        result += ' '
      }else{
        result += '#'
      }
    }
    }
  result +='\n'
}
console.log(result)
