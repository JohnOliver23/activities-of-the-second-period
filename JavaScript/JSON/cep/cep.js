function getInfo() {
/*1° FORMA=>*/ let value = ''
  let i=0;
  const verific = ((x,y)=> x == y? "":',\n')
  for (let key in cep){
    i++;
    value += key+': '+cep[key]+verific(i, Object.keys(cep).length)
  }

  return value

  ///*2°Forma*/return Object.keys(cep).map(x=> `${x}: ${cep[x]}`).join(',\n')
}
let cep = {
  "cep": "01001-000",
  "logradouro": "Praça da Sé",
  "complemento": "lado ímpar",
  "bairro": "Sé",
  "localidade": "São Paulo",
  "uf": "SP",
  "unidade": "",
  "ibge": "3550308",
  "gia": "1004"
}

console.log(getInfo(cep))

module.exports = getInfo
