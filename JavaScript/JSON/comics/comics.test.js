const comics = require('./comics')

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
  // TODO bad guys, villain
]

describe('Comics Tool', () => {

  test('listing names by DC comics', () => {
    expect(comics.namesByComics(characters, 'DC')).toEqual([
      'Batman',
      'Superman'
    ])
  })

  test('listing names by Marvel comics', () => {
    expect(comics.namesByComics(characters, 'Marvel')).toEqual([
      'Hulk',
      'Spider-Man'
    ])
  })

  test('sorting top weight by Marvel comics', () => {
    expect(comics.topWeightNames(characters, 'Marvel')).toEqual([
      'Hulk',
      'Spider-Man'
    ])
  })

  test('sorting top weight', () => {
    expect(comics.topWeightNames(characters)).toEqual([
      'Hulk',
      'Superman',
      'Batman',
      'Spider-Man'
    ])
  })

  test('weighing by DC comics', () => {
    expect(comics.weight(characters, 'DC')).toBe(101)
  })

  test('weighing by Marvel comics', () => {
    expect(comics.weight(characters, 'Marvel')).toBe(355.5)
  })

  test('heighing by Marvel comics', () => {
    expect(comics.height(characters, 'Marvel')).toBe(2.11)
  })
  test('heighing by Marvel comics', () => {
    expect(comics.height(characters, 'DC')).toBe(1.895)
  })



  test('sorting top height by Marvel comics', () => {
    expect(comics.topHeightNames(characters, 'Marvel')).toEqual([
      'Hulk',
      'Spider-Man'
    ])
  })

  test('sorting top height by Marvel comics', () => {
    expect(comics.topHeightNames(characters, 'DC')).toEqual([
      'Superman',
      'Batman'
    ])
  })

  test('sorting top weight', () => {
    expect(comics.topHeightNames(characters)).toEqual([
      'Hulk',
      'Superman',
      'Batman',
      'Spider-Man'
    ])
  })



})
