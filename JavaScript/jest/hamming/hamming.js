
function hamming(dna1, dna2){
let n =0;

for (let i =0; i<dna1.length; i++){
  if(dna1[i] != dna2[i]){
    n++;
  }
}
return n;
}


module.exports = hamming
