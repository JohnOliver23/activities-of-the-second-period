module.exports = class ExamStats{
  constructor(grades){
    this.grades = grades
  }
  avg(){
    const res = this.grades.map(x => x.grade)//O map ira trazer apenas as notas dos estudantes
    const sum = res.reduce((x, y)=> x+y)// o reduce ira somar todas as notas dos estudantes
    return sum/ res.length// a soma e dividida pela quantidade de alunos para extrair a média
  }
  min(number=1){//se o parâmetro não for informado, o parâmetro recebe automaticamente 1 , se ele for informado, ele permanecerá com o seu valor original
    let minGrades = this.grades.sort((a, b)=> a.grade - b.grade).map(x => x.grade)//o sort ordena os estudantes de acordo com sua nota, do menor para o maior. o  map gera um array apenas com as notas dos estudantes
    return minGrades.slice(0, number)// a função slice serve pra trazer apenas a quantidade de notas informado pelo parâmetro ex: number = 2 : return 5, 7
  }
  max(number = 1){//se o parâmetro não for informado, o parâmetro recebe automaticamente 1 , se ele for informado, ele permanecerá com o seu valor original
    let maxGrades = this.grades.sort((a,b)=> b.grade - a.grade).map(x => x.grade)//o sort ordena os estudantes de acordo com a nota, do maior para o menor e o map gera um array apenas com as notas dos estudantes
    return maxGrades.slice(0, number)//o slice retorna um array com a quantidade informada pelo parâmetro nmber
  }
  lt(point){
    return this.grades.filter(x => x.grade < point).map(x => x.grade).sort((a,b)=> a.grade - b.grade)// o filter filtra os notas que forem menores q point e o sort ordena esses valores
  }
  gt(point){
    return this.grades.filter(x => x.grade > point).map(x => x.grade).sort((a,b)=>a - b)// o filter filtra os notas que forem maiores q point e o sort ordena esses valores
  }
}

/*let examStats = new ExamStats([
  { "student": "Fulano", "grade": 10 },
  { "student": "Sicrano", "grade": 5 },
  { "student": "Beltrano", "grade": 7 },
])
console.log(examStats.avg())//=> 7.3333333333
console.log(examStats.min())//=> [5]
console.log(examStats.min(2))//=> [5, 7]
console.log(examStats.max())//=>[10]
console.log(examStats.lt(6))//=>[5]
console.log(examStats.gt(6))//=>[7, 10]
*/
