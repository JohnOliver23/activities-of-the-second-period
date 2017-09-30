let weight = 70
let height = 1.65
let result
let bmi = weight / (height * height)

if (bmi<18.5){
  result ='underweight'
}else if (bmi<=24.9){
  result ='normal weight'
}else if (bmi<=29.9){
  result ='overweight'
}else {
  result ='obesity'
}
console.log('BMI:'+bmi+'\nRESULT:'+result)
