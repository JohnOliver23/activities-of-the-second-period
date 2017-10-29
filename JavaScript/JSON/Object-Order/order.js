module.exports = class Order {
  constructor(){
    this.items = []
    this.item = new Object()//quantity && product
  }
  addProduct(prod){
    let flag =0
    if(this.items.length !=0){
        for (let value of this.items){
          if(value.product.id == prod.id ){
            value.quantity++
          }else{
            flag++
          }
        }
        if(flag == this.items.length){
          this.item.product = prod
          this.item.quantity =1
          this.items.push(this.item)
        }



    }else{
      this.item.product = prod
      this.item.quantity =1
      this.items.push(this.item)
    }
    this.item = new Object()
  }
  total(cat){
    let value
    if(cat){
       value = this.items.filter(x => x.product.category.filter(x => x == cat) == cat).map(x => x.product.price * x.quantity).reduce((x,y) => x+y)
    }else{
       value = this.items.map(x => x.product.price * x.quantity).reduce((x, y) => x +y)
    }
    return value
  }
  toString(){
   let string = ''
   const spaceLeft = (a => " ".repeat(3 - a.toString().length))///função q serve para alinhar os espaços em branco de acordo com o valor de preço
   const spaceIdName =(a => a > 1 ? " ".repeat(6): "")//se o id for 1 não há espaçamento , se não for há espaçamento
   const compactName = (a => a.substring(0, 10)+" ".repeat(10 - a.substring(0,10).length))//função que serve pra compactar o tamanho do nome e para inserir os espaços em brancos
   const lineBreak = (a => a < this.items.length? '\n': '')//se o id for menor que o tamanho = quebra a linha, se não encerra a string

    for (let value of this.items){
      string+=`${spaceIdName(value.product.id)}${value.product.id} ${compactName(value.product.name)} 00${value.quantity} UN ${spaceLeft(parseInt(value.product.price))}${value.product.price.toFixed(2)} ${spaceLeft(parseInt(value.product.price))}${(value.product.price * value.quantity).toFixed(2)}${lineBreak(value.product.id)}`
    }
    return string
  }


}

  /*class Product {
  constructor(id, name, price, cat){
    this.id = id
    this.name = name
    this.price = price
    this.category = cat
  }
}

let pencil = new Product(1, 'Lápis', 1.5, ['office'])
let pen  = new Product(2, 'Caneta', 3, ['office'])
let notebook = new Product(3, 'Caderno', 20, ['office'])
let flashDrive = new Product(4, 'USB Flash Drive', 40, ['eletronics', 'office'])
let headPhone = new Product(5, 'Headphone', 40, ['eletronics'])
let order = new Order()
order.addProduct(pencil)
order.addProduct(pencil)
order.addProduct(pen)
order.addProduct(notebook)
order.addProduct(flashDrive)
order.addProduct(flashDrive)
order.addProduct(headPhone)

console.log(order.total())//=> 146
console.log(order.total('eletronics'))//=> 120
console.log(order.total('office'))//=> 106
*/






