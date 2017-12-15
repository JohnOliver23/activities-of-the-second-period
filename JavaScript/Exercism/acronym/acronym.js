
function parse(text){
  let resp=''
  let verific =''
  let str = text.split(" ").join("-").split("-")

  str.forEach(x=>{
    for(i=1;i<x.length;i++){
      if(x.charCodeAt(i)>=65 && x.charCodeAt(i)<=90){
        verific+=x[i]
    }
  }
    resp+= x.substr(0,1)
    if(verific && verific.length==1)
      resp+= verific
    verific=''

  })
  return resp.toUpperCase()
}
module.exports = parse
console.log(parse('Complementary metal-oxide semiconductor'))
