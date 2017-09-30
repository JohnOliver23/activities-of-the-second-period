let weight = 70
let height = 1.65
let result
let bmi = weight /  height **2

switch (true){
  case bmi <18.5:
    result = 'underweight';
    break;
  case bmi <=24.9:
    result = 'normal weight';
    break;
  case bmi <=29.9:
    result = 'overweight';
    break;

}
console.log('BMI:'+bmi+'\nResult: '+result)
