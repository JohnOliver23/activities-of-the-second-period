function toRna(dna){
  let rna ='';
  dna2rna =  {
             'C':'G',
             'G': 'C',
             'A':'U',
             'T':'A'
           }
  for (value of dna){
    rna += dna2rna[value]
  }
  return rna
}
//console.log(toRna('C'))             //=> G
//console.log(toRna('G'))             //=> C
//console.log(toRna('A'))             //=> U
//console.log(toRna('T'))             //=> A
//console.log(toRna('ACGTGGTCTTAA')) //=> UGCACCAGAAUU
module.exports = toRna
