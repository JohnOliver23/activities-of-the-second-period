function min(number){
  let cedulas = [100, 50, 20, 10]
  let result = []
  let aux = number
  for(let value of cedulas){

    if(aux){
      cedula = parseInt(aux / value)
      aux= aux % value
      result.push([value, cedula])
    }
  }
return result;
}
console.log(min(1000))
module.exports = min
