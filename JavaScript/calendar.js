
function calendar ( dayinic , dayquant){
  let result1 = "DOM SEG TER QUA QUI SEX SAB\n"

  for (let j = 0; j <= dayinic; j++){
    result1 += '  '
  }
  for (i = 1; i<= dayquant; i++){
    if (i <10){
      result1 += ` 0${i} `
    }else{
      result1 += ` ${i} `
    }
    if ((i + dayinic) % 7 ==0){
      result1 +='\n'
  }

  }
  return result1
}
console.log(calendar(1, 31))
