const fibonacci = require('./fibonacci-array');
test('os 3 primeiros numeros do fibonacci é 0 1 1 ', ()=>{
  expect(fibonacci(3)).toEqual([0, 1, 1]);
});

test('os 4 primeiros numeros do fibonacci é 0 1 1 2 ', ()=>{
  expect(fibonacci(4)).toEqual([0, 1, 1, 2]);
});

test('os 5 primeiros numeros do fibonacci é 0 1 1 2 3 ', ()=>{
  expect(fibonacci(5)).toEqual([0, 1, 1, 2, 3]);
});

test('os 6 primeiros numeros do fibonacci é 0 1 1 2 3 5 ', ()=>{
  expect(fibonacci(6)).toEqual([0, 1, 1, 2, 3, 5]);
});

test.skip('os 7 primeiros numeros do fibonacci é 0 1 1 2 3 5 8 ', ()=>{
  expect(fibonacci(7)).toEqual([0, 1, 1, 2, 3, 5, 8]);
});
