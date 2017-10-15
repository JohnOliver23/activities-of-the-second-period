const primeFactors = require('./primefactor');

test('os fatores primos de 1 é = [] ', () => {
  expect(primeFactors(1)).toEqual([]);
});

test('os fatores primos de 2 é = 2', () => {
  expect(primeFactors(2)).toEqual([2]);
});

test('os fatores primos de 3 é = 3 ', () => {
  expect(primeFactors(3)).toEqual([3]);
});

test('os fatores primos de 4 são = 2, 2 ', () => {
  expect(primeFactors(4)).toEqual([2, 2]);
});

test('os fatores primos de 6 são = 2, 3', () => {
  expect(primeFactors(6)).toEqual([2, 3]);
});

test('os fatores primos de 8 são = 2, 2, 2', () => {
  expect(primeFactors(8)).toEqual([2, 2, 2]);
});

test('os fatores primos de 9 são = 3, 3 ', () => {
  expect(primeFactors(9)).toEqual([3, 3]);
});

test('os fatores primos de 27 são = 3, 3, 3', () => {
  expect(primeFactors(27)).toEqual([3, 3, 3]);
});

test('os fatores primos de 625 são = 5, 5, 5', () => {
  expect(primeFactors(625)).toEqual([5, 5, 5, 5]);
});

test('os fatores primos de 901255 são = 5, 17, 23, 461 ', () => {
  expect(primeFactors(901255)).toEqual([5, 17, 23, 461]);
});

test('os fatores primos de  93819012551 são = 11, 9539, 894119 ', () => {
  expect(primeFactors(93819012551)).toEqual([11, 9539, 894119]);
});
