const prime = require('./prime');

test('os 4 primeiros numeros primos sao 2 3 5 7 ', () => {
  expect(prime(4)).toBe('2 3 5 7');
});



test('os 5 primeiros numeros primos sao 2 3 5 7 11', () => {
  expect(prime(5)).toBe('2 3 5 7 11');
});



test('os 6 primeiros numeros primos sao 2 3 5 7 11 13', () => {
  expect(prime(6)).toBe('2 3 5 7 11 13');
});




test.skip('os 7 primeiros numeros primos sao 2 3 5 7 11 13 17', () => {
  expect(prime(7)).toBe('2 3 5 7 11 13 17');
});



test.skip('os 8 primeiros numeros primos sao 2 3 5 7 11 13 17 19', () => {
  expect(prime(8)).toBe('2 3 5 7 11 13 17 19');
});
