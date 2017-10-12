const min = require('./minwithdraw');
test('o saque de 1280 sera de [100, 12], [50, 1], [20, 1], [10, 1]', ()=>{
  expect(min(1280)).toEqual([[100, 12], [50, 1], [20, 1], [10, 1]]);
});

test('o saque de 1000 sera de [100, 10]', ()=>{
  expect(min(1000)).toEqual([[100, 10]]);
});

test('o saque de 970 sera de [100, 9], [50, 1], [20, 1]', ()=>{
  expect(min(970)).toEqual([[100, 9], [50, 1], [20, 1]]);
});

test('o saque de 190 sera com [100, 1], [50, 1], [20, 2]', ()=>{
  expect(min(190)).toEqual([[100, 1], [50, 1], [20, 2]]);
});
