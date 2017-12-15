/*module.exports =*/ class Isogram{
  constructor(text){
    this.text = text;
  }
  isIsogram(){
    let value = this.text.split('')
    let resp =''
    let i = 1;

    value.forEach(x=>{
      resp = this.text.indexOf(x) >-1
      if(resp == false ){
        return false
      }
    })
    return true

  }
}
var word = new Isogram('eleven');
console.log(word.isIsogram())
