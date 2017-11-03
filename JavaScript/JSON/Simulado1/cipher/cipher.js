module.exports = class Cipher {
rot(text, point){
module.exports = class Cipher {
rot(text, point){
  let caracteres = 'abcdefghijklmnopqrstuvwxyz'.split('')
  let resp =''
  const verific = ((a, b)=> a+b > 25? (a+b)-26:a+b)
  text.toLowerCase().split('').forEach(x =>{
    let res = caracteres.indexOf(x)
    res = verific(res, point);
    resp += caracteres[res]
  })
  return resp
}
}
//cipher = new Cipher()
//console.log(cipher.rot('xyz', 2))
