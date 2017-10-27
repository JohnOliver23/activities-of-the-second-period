function grade (studend, weight, answer){
  let result = []
  for (let value of Object.keys(studend)){
    if(studend[value] == answer[value]){
      result.push(weight[value])
    }
  }
  result = result.reduce((x, y) => x+y)
  return result;

}
function avg(students){
  let value = students.map(x => x.grade ).reduce((x, y) => x+y)
  return value /3
}

function min(students, n=1){
let result = []
const verific = ((a, b) =>{
  return a.grade-b.grade//ordena os valores do menor pro maior , se a for maior q b , a passa pro indice de b e b pro índice de a
})
students.sort(verific)
if(n > 1){
  for(let i=0; i<n; i++){
    result.push(students[i].grade)
  }
}else{
  result = students[0].grade
}
  return result
}


function max(students, n=1){
  let valueMax = []
  const verific = ((a, b)=> {
    return b.grade-a.grade//ordena os valores do maior pro menor => se a for menor que b , a passa pro índice de a e a pro índice de b
  })
  students.sort(verific)
  if(n >1){
    for(i=0; i<n; i++){
      valueMax.push(students[i].grade)
    }
  }else{
    valueMax = students[0].grade
  }
  return valueMax

}
function lt(students, point){
  let value = students.filter(x => x.grade < point).map(x => x.grade)
  return value
}

function gt(students, point){
  const verific = ((a, b)=> {
    return a - b
  })
  let value = students.filter(x => x.grade > point).map(x => x.grade)
  value.sort(verific)//ordena os valores gerados da função acima, do menor para o maior
  return value
}
/*
console.log(grade(studend1, weight, answer)) //=> 4
console.log(grade(studend2, weight, answer)) //=> 8
*/


module.exports = {grade, avg, min, max, lt, gt}

//console.log(avg(students))                   //=> 7.333333333333333
//console.log(min(students))                   //=> 5
//console.log(min(students, 2))                //=> [5, 7]
//console.log(max(students))                   //=> 10
//console.log(max(students, 2))                //=> [10, 7]
//console.log(lt(students, 6))                 //=> [5]
//console.log(gt(students, 6))                 //=> [7, 10]
