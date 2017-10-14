const toRoman  = require('./roman');
test('o valorr esperado é : I', ()=>{
  expect(toRoman(1)).toBe('I');
});

test('o valorr esperado é : II', ()=>{
  expect(toRoman(2)).toBe('II');
});

test('o valorr esperado é : III', ()=>{
  expect(toRoman(3)).toBe('III');
});

test('o valorr esperado é :IV', ()=>{
  expect(toRoman(4)).toBe('IV');
});

test('o valorr esperado é : V', ()=>{
  expect(toRoman(5)).toBe('V');
});

test('o valorr esperado é : VI', ()=>{
  expect(toRoman(6)).toBe('VI');
});

test('o valorr esperado é : IX', ()=>{
  expect(toRoman(9)).toBe('IX');
});

test('o valorr 27 esperado é : XXVII', ()=>{
  expect(toRoman(27)).toBe('XXVII');
});

test('o valorr 48 esperado é : XLVIII', ()=>{
  expect(toRoman(48)).toBe('XLVIII');
});

test('o valorr 59 esperado é :LIX', ()=>{
  expect(toRoman(59)).toBe('LIX');
});

test('o valorr 93 esperado é : XCIII', ()=>{
  expect(toRoman(93)).toBe('XCIII');
});

test('o valorr 141 esperado é : CXLI', ()=>{
  expect(toRoman(141)).toBe('CXLI');
});

test('o valorr 163 esperado é : CLXIII', ()=>{
  expect(toRoman(163)).toBe('CLXIII');
});

test('o valorr 402 esperado é : CDII', ()=>{
  expect(toRoman(402)).toBe('CDII');
});

test('o valorr 575 esperado é : DLXXV', ()=>{
  expect(toRoman(575)).toBe('DLXXV');
});

test('o valorr 911 esperado é : CMXI', ()=>{
  expect(toRoman(911)).toBe('CMXI');
});

test('o valorr 1024 esperado é : MXXIV', ()=>{
  expect(toRoman(1024)).toBe('MXXIV');
});

test('o valorr 3000 esperado é : MMM', ()=>{
  expect(toRoman(3000)).toBe('MMM');
});
