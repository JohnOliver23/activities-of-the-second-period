
function total(products) {
  let tot = products.reduce((x, y) => x.preco + y.preco)
  return tot
}


module.exports = total
