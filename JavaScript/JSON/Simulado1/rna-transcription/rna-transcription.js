module.exports =   class DnaTranscriber {
toRna(text){
  let dna2rna = {
    C: 'G',
    G: 'C',
    T: 'A',
    A: 'U'
  }
  const value = text.split('').map(x => dna2rna[x]).join('')
  return value
}
}
//let dnaTranscriber = new DnaTranscriber()
//console.log(dnaTranscriber.toRna('C'))
