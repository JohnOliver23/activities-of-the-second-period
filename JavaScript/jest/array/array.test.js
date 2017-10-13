const array = require('./array');
test('o menor numero é 1 ', ()=>{
  expect(array.min([3, 7, 8, 1, 2, 9])).toBe(1)
});

test('o maior numero é 9  ', ()=>{
  expect(array.max([3, 7, 8, 1, 2, 9])).toBe(9)
});

test('a sequencia de 10 é =  1, 2, 3, 4, 5, 6, 7, 8, 9  ', ()=>{
  expect(array.range(10)).toEqual([[1],[2],[3],[4],[5],[6],[7],[8],[9]])
});

test('a sequencia de  1 ,11 =   1, 2, 3, 4, 5, 6, 7, 8, 9, 10  ', ()=>{
  expect(array.range(1, 11)).toEqual([[1],[2],[3],[4],[5],[6],[7],[8],[9], [10]])
});

test('a sequencia de  1 , 30, 5 é = 0, 5, 10, 20, 25  ', ()=>{
  expect(array.range(0, 30, 5)).toEqual([[0], [5], [10], [15], [20], [25]])
});

test('generating zip of [\'moe\', \'larry\', \'curly\'], [30, 40, 50] and [true, false, false]', () => {
  expect(array.zip(['moe', 'larry', 'curly'], [30, 40, 50], [true, false, false]))
    .toEqual(["moe", 30, true, "larry", 40, false , "curly", 50, false])
});

test('generating zip of [\'moe\', \'larry\'], [30, 40] and [true, false]', () => {
  expect(array.zip(['moe', 'larry',], [30, 40,], [true, false,]))
    .toEqual(["moe", 30, true, "larry", 40, false ])
});

test('generating uniq of values 1, 2, 1, 4, 1, 3]', () => {
  expect(array.uniq([1, 2, 1, 4, 1, 3])).toEqual([1, 2, 4, 3])
});
