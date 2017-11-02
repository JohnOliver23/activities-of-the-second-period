module.exports = class ExamCheck{
  constructor(answer, weight){
    this.weight = weight
    this.answer = answer
  }
  grade(student){
    return Object.keys(student).filter(x => student[x] == this.answer[x]).reduce((x, y)=>x + this.weight[y], 0)
  }
  /*o Object.keys serve para pecorrer cada elemento do objeto, se o object.keys fosse ocultado, a função filter e reduce
  não seria possível, já que ambas são exclusivas de array*/
}
