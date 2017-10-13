function min(x){
  let valueMin= x[0];

  for(let value of x){
    if(value < valueMin){
      valueMin = value
    }
  }
  return valueMin;
}
function max(x){
let valueMax = x[0]

for(let value of x){
  if(value > valueMax){
    valueMax = value
    }
  }
  return valueMax;
}
function range(begin, end, step){
  let array = []
  let end2 = end == undefined? begin: end;
  let step2 = step == undefined ? 1 : step;
  let begin2 = step ==undefined? 1: begin
  for (let i = begin2; i<end2; i+=step2){
    array.push([i]);
  }
  return array;

}
function zip(names, ages, status){
let result = []
for (let i=0; i<names.length; i++){
result.push(names[i])
result.push(ages[i])
result.push(status[i])
}
return result;

}

function uniq(array) {
  let result = []
  for (let value of array) {
    if (!result.includes(value))
      result.push(value)
  }
  return result
}
//console.log(zip(['moe', 'larry', 'curley'], [30, 40, 50], [false, false, true]))
//console.log(range(10)); 1, 2, 3, 4, 5, 6, 7, 8, 9
//console.log(range(10));1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//console.log(range(0, 30, 5)) 0, 5, 10, 15, 20, 25
console.log(uniq([1, 2, 1, 4, 1, 3]))//1, 2, 4, 3
module.exports = {min, max, range, zip, uniq}
