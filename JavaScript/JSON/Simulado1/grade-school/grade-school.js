module.exports = class School {
constructor(){
  this.grades = {}
}
roster(){
  return this.grades;
}
add(name, grade){
  if(!this.grades[grade]){
    this.grades[grade] = [name]
  }else{
    this.grades[grade].push(name)
    this.grades[grade].sort()
  }
}
grade(number){
  const result = Object.keys(this.grades).filter(x => x== number).map(x => this.grades[x])
  const verific = (x=> x? x.sort(): [])
  let resp = verific(result[0]);
  return resp;
}


}
