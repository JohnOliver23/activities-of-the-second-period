function namesByComics(charaters, text){
  return characters.filter(x=> x.comics == text).map(x=> x.name).sort()
}

function weight(characters, text){
  const value = characters.filter(x=> x.comics == text)
  const resp = value.reduce((x,y)=> x.weight + y.weight)
  return resp / value.length

}
function height(characters, text){
  const value = characters.filter(x=> x.comics == text)
  const resp = value.reduce((x,y)=> x.height + y.height)
  return resp / value.length
}

function topHeightNames(characters, text){

  if(text){
    return characters.filter(x=> x.comics==text).sort((a,b)=> b.height-a.height).map(x=> x.name)
  }else{
    return characters.sort((x,y)=> y.height - x.height).map(x=> x.name)
  }

}
function topWeightNames(characters, text){
  let value;
  if(text!=undefined){
   value = characters.filter(x=> x.comics ==text).sort((a,b)=> b.weight - a.weight).map(x=> x.name)
}else{
   value = characters.sort((a, b)=> b.weight - a.weight).map(x=> x.name)
}
  return value

}

const characters = [
  {
    comics: 'Marvel',
    height: 1.78,
    link: [
      'http://marvel.com/characters/54/spider-man',
      'http://marvel.com/universe/Spider-Man_(Peter_Parker)'
    ],
    name: 'Spider-Man',
    realName: 'Peter Benjamin Parker',
    weight: 76
  },
  {
    comics: 'Marvel',
    height: 2.44,
    link: [
      'http://marvel.com/characters/25/hulk',
      'http://marvel.com/universe/Hulk_(Bruce_Banner)'
    ],
    name: 'Hulk',
    realName: 'Robert Bruce Banner',
    weight: 635
  },
  {
    comics: 'DC',
    height: 1.91,
    link: [
      'http://www.dccomics.com/characters/superman',
      'http://dc.wikia.com/wiki/Superman_(Clark_Kent)'
    ],
    name: 'Superman',
    realName: 'Clark Joseph Kent',
    weight: 107
  },
  {
    comics: 'DC',
    height: 1.88,
    link: [
      'http://www.dccomics.com/characters/batman',
      'http://dc.wikia.com/wiki/Bruce_Wayne_(New_Earth)'
    ],
    name: 'Batman',
    realName: 'Bruce Wayne',
    weight: 95
  }
]

module.exports = {namesByComics, weight, topWeightNames, height,topHeightNames }
console.log(namesByComics(characters, 'Marvel'))
//=> [ 'Hulk', 'Spider-Man' ]

console.log(namesByComics(characters, 'DC'))
//=> [ 'Batman', 'SuperMan' ]

console.log(weight(characters, 'DC'))
//=> 101

console.log(weight(characters, 'Marvel'))
//=> 355.5
console.log(topWeightNames(characters))
console.log(topWeightNames(characters, 'Marvel'))
console.log(topWeightNames(characters, 'DC'))
console.log(height(characters, 'Marvel'))
console.log(height(characters, 'DC'))
console.log(topHeightNames(characters, 'Marvel'))
console.log(topHeightNames(characters, 'DC'))
console.log(topHeightNames(characters))
