function gtZero(products) {
  let value = products.filter(x => x.qtd > 0)
  return value
}

function subTotal(products) {
  let sum = products.map(x => x.preco * x.qtd)
  let sub = [
    {
    id: '',
    subtotal:''
  },

  {
    id: '',
    subtotal:''
  },

  {
    id: '',
    subtotal:''
},
{
  id: '',
  subtotal: ''
}
]

for (let i in sub){
  sub[i].id = products[i].id
  sub[i].subtotal = sum[i]

}
return sub


}

function total(products) {
  let tot = products.map(x => x.preco * x.qtd).reduce((x, y) => x+y)
  return tot
}

module.exports = {
  gtZero,
  subTotal,
  total
}

const products = [
  {
    id: 1,
    preco: 10.0,
    qtd: 2
  },
  {
    id: 2,
    preco: 10.0,
    qtd: 2
  },
  {
    id: 3,
    preco: 10.0,
    qtd: 2
  },
  {
    id: 4,
    preco: 10.0,
    qtd: 0
  }
]

//console.log(gtZero(products))
//=>
// [
//   {
//     id: 1,
//     preco: 10.0,
//     qtd: 2
//   },
//   {
//     id: 2,
//     preco: 10.0,
//     qtd: 2
//   },
//   {
//     id: 3,
//     preco: 10.0,
//     qtd: 2
//   }
// ]

//console.log(subTotal(products))
//=>
// [
//   {
//     id: 1,
//     subtotal: 20.0
//   },
//   {
//     id: 2,
//     subtotal: 20.0
//   },
//   {
//     id: 3,
//     subtotal: 20.0
//   },
//   {
//     id: 4,
//     subtotal: 0.0
//   }
// ]

//console.log(total(products))
//=> 60.0
