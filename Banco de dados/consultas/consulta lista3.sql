--questão 1
select pe.idpedido, fu.nome, datediff(year, fu.datanasc, getdate())[idade]
, ci.nome[cidade], pa.nome[pais], pr.nome[produto], convert(smallmoney, ((it.preco * it.quant) - (it.preco * it.quant)*desconto/100))[preco total]
from pais pa join cidade ci on pa.idpais = ci.idpais join funcionario fu
on fu.idnatural = ci.idcidade join pedido pe on pe.idvendedor = fu.idfuncionario
join itens it on it.idpedido = pe.idpedido join produto pr on it.idproduto = 
pr.idproduto where (it.preco * it.quant)- (it.preco * it.quant)*desconto/100 = (
										  select max((preco * quant) - (preco * quant)*desconto/100) from itens)

--questão 2

select pr.nome[produto], pr.venda, ti.nome[tipo], (select Max(it.preco) from itens it
where it.idproduto = pr.idproduto)[valor mais alto] from produto pr join tipo ti
on ti.idtipo = pr.idtipo
where pr.venda >(
select avg(venda) from produto)

--questão 3

select fun.nome[funcao], count(fu.idfuncionario)[qtd funcionario],
 sum (fu.salario)[total salario] from funcao fun join funcionario fu
 on fu.idfuncao = fun.idfuncao
 where fu.idfuncionario in (
							select idfuncionario from funcionario where
							sexo = 'F' and estcivil = 'C')
							or fu.idfuncionario in (
							select idfuncionario from funcionario where sexo = 'M' AND
							 estcivil = 'S' AND
							datediff(year, datanasc, getdate()) < 40)
							group by fun.nome
--questão 4
select cl.nome[cliente], count (pe.idcliente)[qtd de pedidos] 
from cliente cl join pedido pe on pe.idcliente = cl.idcliente
where cl.idcliente in(
			select cl.idcliente from cliente cl join cidade ci
			on ci.idcidade = cl.idcidade where fax is not null	and ci.idpais<>'BRA')
			group by cl.nome 
			having 	count (pe.idcliente) > 4			  