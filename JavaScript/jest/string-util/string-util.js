function formatter(text, action){

  switch (action){
    case 'lowercase':
      return text.toLowerCase();
    case 'uppercase':
      return text.toUpperCase();
    case 'camelcase':
      return toCamelCase(text);
    case 'snakecase':
      return toSnakeCase(text);
    case 'reverse':
      return toReverse(text);
    case 'countchar':
      return text.length;
    case 'countword':
      return toCountWord(text);
    case 'countline':
      return toCountLine(text);
  }



}
//função camelcase
function toCamelCase(text){
  let result = []

  for(let word of text.split(' ')){
    let firstWord = word[0].toUpperCase();
    let midWord = word.substr(1, word.length).toLowerCase()
    result.push(firstWord+midWord);
  }

  return result.join(' ');
//função snakecase
}
function toSnakeCase(text){
  let result =[]
  result = text.split(' ')
  return result.join('_')
}
//Função de reverter
function toReverse(text){
  result =[]
  result = text.split('').reverse();
  return result.join('');
}
//função contar palavras
function toCountWord(text){
  let n=0;
  let result =[]
  result = text.split('\n')
  result = result.join(' ')
  result = result.split(' ')
  for (let value of result){
    n++;
  }

  return n;
}
function toCountLine(text){
  let result =[]
  n =0
  result = text.split('\n')
  for(let value of result){
    n++;
  }
  return n;
}

module.exports = formatter
//formatter('lorem ipsum dolor', 'uppercase'))  //=> LOREM IPSUM DOLOR
//formatter('LOREM IPSUM DOLOR', 'lowercase')  //=> lorem ipsum dolor
//formatter('LOREM IPSUM DOLOR', 'camelcase'))  //=> Lorem Ipsum Dolor
//console.log(formatter('lorem ipsum dolor', 'snakecase'))  //=> lorem_ipsum_dolor
//console.log(formatter('lorem ipsum dolor', 'reverse'))    //=> rolod muspi merol
//console.log(formatter('lorem\nipsum dolor', 'countchar')) //=> 17
//console.log(formatter('lorem\nipsum dolor', 'countword')) //=> 3
//console.log(formatter('lorem\nipsum dolor', 'countline')) //=> 2
