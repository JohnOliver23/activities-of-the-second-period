var parse = require('./acronym');

describe('Acronyms are produced from', function () {
  test('title cased phrases', function () {
    expect(parse('Portable Network Graphics')).toEqual('PNG');
  });

  test('other title cased phrases', function () {
    expect(parse('Ruby on Rails')).toEqual('ROR');
  });

  test('inconsistently cased phrases', function () {
    expect(parse('HyperText Markup Language')).toEqual('HTML');
  });

  test('phrases with punctuation', function () {
    expect(parse('First In, First Out')).toEqual('FIFO');
  });

  test('other phrases with punctuation', function () {
    expect(parse('PHP: Hypertext Preprocessor')).toEqual('PHP');
  });

  test('phrases with punctuation and sentence casing', function () {
    expect(parse('Complementary metal-oxide semiconductor')).toEqual('CMOS');
  });
});
