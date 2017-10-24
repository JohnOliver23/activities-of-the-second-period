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

function min(students){
  var min = students['0'].grade
  for (let value of Object.keys(students)){
    if(students[value].grade < min)
      min = students[value].grade
  }

  return min
}

function max(students){
  var valueMax = students['0'].grade
  for (let value of Object.keys(students)){
    if(students[value].grade > valueMax ){
      valueMax = students[value].grade
    }
  }
  return valueMax
}
function lt(students, point){
  let value = students.filter(x => x.grade < point).map(x => x.grade)
  return value
}

function gt(students, point){
  let value = students.filter(x => x.grade > point).map(x => x.grade)
  return value
}



/*
console.log(grade(studend1, weight, answer)) //=> 4
console.log(grade(studend2, weight, answer)) //=> 8
*/

students = [

  {"student": "Sicrano", "grade": 5},
  {"student": "Beltrano", "grade": 7},
  {"student": "Fulano", "grade": 10},
]
module.exports = {grade, avg, min, max, lt, gt}

//console.log(avg(students))                   //=> 7.333333333333333
//console.log(min(students))                   //=> 5
//console.log(min(students, 2))                //=> [5, 7]
//console.log(max(students))                   //=> 10
//console.log(max(students))                   //=> 10
//console.log(lt(students, 6))                 //=> [5]
//console.log(gt(students, 6))                 //=> [7, 10]
