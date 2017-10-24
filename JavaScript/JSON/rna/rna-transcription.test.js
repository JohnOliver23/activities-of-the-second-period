var toRna = require('./rna-transcription')

describe('RNA', function () {
  test('transcribing cytosine to guanine', function () {
    expect(toRna('C')).toEqual('G')
  })

  test('transcribing guanine to cytosine', function () {
    expect(toRna('G')).toEqual('C')
  })

  test('transcribing adenine to uracil', function () {
    expect(toRna('A')).toEqual('U')
  })

  test('transcribing thymine to adenine', function () {
    expect(toRna('T')).toEqual('A')
  })

  test('transcribing all dna nucleotides to their rna complements', function () {
    expect(toRna('ACGTGGTCTTAA'))
      .toEqual('UGCACCAGAAUU')
  })
})
