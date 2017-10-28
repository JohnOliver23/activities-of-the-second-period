module.exports = class School {
constructor(){
  this.grades = {}
}
roster(){
  return this.grades
}
add(name, grade){
  if(this.grades[grade]){
    this.grades[grade].push(name)
    this.grades[grade].sort()
  } else {
    this.grades[grade] = [name]
  }
}
grade(grade){
  return this.grades[grade]? this.grades[grade].sort() : []
}

}

/*school.add('Blair',2)
school.add('James',2)
school.add('Paul',2)
//let expectedDb = { 2 : [ 'Blair', 'James', 'Paul' ] }
console.log(school.roster())*/
