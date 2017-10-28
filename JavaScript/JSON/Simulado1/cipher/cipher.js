module.exports = class Cipher {
rot(text, point){

  let value =[]
  let res = []
  for (let key of text){
    value.push(key.charCodeAt(key))
  }
  value = value.map(x => x+point)
  for (let key of value){
    if(key > 122){
      let aux = key - 122
      key = 97 + aux-1
    }
    res.push(String.fromCharCode(key))
  }
  return res.join('')
}
}

//cipher = new Cipher()
//console.log(cipher.rot('xyz', 2))
