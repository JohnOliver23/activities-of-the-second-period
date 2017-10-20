function citation(name) {
  result =[]
  name = name.split(' ')
  result.push(name.pop().toUpperCase()+';');
  name = name.join(' ')
  result.push(name)
  result = result.join(' ')
  return result;

}

function compactCitation() {
  result = []
  name = name.split(' ')
  result.push(name.pop().toUpperCase()+';');
  for (let value of name){
    result.push(value[0]+'.')
  }
  result = result.join(' ')
  return result;
}

module.exports = {
  citation,
  compactCitation
}

let name = 'Luiz Carlos Rodrigues Chaves'

//console.log(citation(name))
//=> CHAVES; Luiz Carlos Rodrigues

//console.log(compactCitation(name))
//=> CHAVES; L. C. R.
