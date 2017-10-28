module.exports = class Triangle {
constructor(a, b, c){
  this.a = a
  this.b = b
  this.c = c
}
kind(){
  let flag = 0
  let value =[]
  let value2=[]
  value.push(this.b)
  value.push(this.c)
  value2.push(this.a)
  value2.push(this.c)

  let res = value.every(x => x == this.a)//se todos os valores do array 1 forem iguais, o retorno é true
  if(res == true)
    return 'equilateral'
  res = value.every(x => x != this.a)//se todos os valores do array 1 forem diferentes de a , flag é incrementado
  if (res == true)
    flag ++
  res = value2.every(x => x != this.b)// se todos os valores do array 2 forem diferentes de b, flag é incrementado
  if(res == true)
    flag ++
  if(flag ==2){//se ao final flag for igual a  2 , segnifica q todos os valores são diferentes e o return e scalene, se não é isoceles
    return 'scalene'
  }else{
    return 'isosceles'
  }



}
}
//t = new Triangle(7, 2, 3)
//console.log(t.kind())
