--questão 1 lista 2
select se.nome, se.idsetor, fu.nome from setor se
inner join funcionario fu on se.idchefe = fu.idfuncionario
order by 1


--questão 2 lista 2
select pro.nome[produto], ti.idtipo, ti.nome[tipo], pro.quantest, pro.venda, (pro.quantest * pro.venda)[valor total]
from produto pro inner join tipo ti on ti.idtipo = pro.idtipo

--questão 3 lista 2
select ti.nome [tipo], count(pro.idtipo)[quantidade de produtos], sum(pro.venda)[valor total ]
from tipo ti inner join produto pro on ti.idtipo = pro.idtipo
group by ti.nome


--questão 4 lista 2
select ci.nome [cidade], count(cli.idcidade)[quantidade de clientes] from cidade ci
inner join cliente cli on ci.idcidade = cli.idcidade
group by ci.nome
order by 1


--questão 5
select funca.nome[funcao], func.sexo, count(*)[quantidade de funcionarios sem email]
from funcao funca inner join funcionario func on func.idfuncao = funca.idfuncao
where func.email is  null
group by funca.nome, func.sexo
order by 1


--Questão 6
select pro.nome[produto], ti.nome[tipo], AVG(pro.custo)[media de custo],
 AVG(pro.venda)[media venda], SUM(pro.venda - pro.custo)
[diferenca] from tipo ti inner join produto pro on ti.idtipo = pro.idtipo
group by pro.nome, ti.nome
order by 1

--questão 7
select se.nome[setor], se.idsetor[sigla], fu.sexo,  sum(fu.salario)[total de salario] from setor se
inner join funcionario fu on fu.idsetor = se.idsetor
group by se.nome, se.idsetor, fu.sexo
order by 1

--questão 8.1
select fun.nome[funcao] , count(fu.nome)[funcionarios], fu.sexo, sum(fu.salario)[total salario]
from funcao fun inner join funcionario fu on fun.idfuncao = fu.idfuncao
group by fun.nome, fu.sexo
having sum(fu.salario) > 1000
order by 1

 --questão 8
 select  FU.NOME, count(F.SEXO) as Quantidade,F.SEXO, sum(F.SALARIO)
  as salario from FUNCIONARIO F join FUNCAO FU on F.IDFUNCAO = FU.IDFUNCAO
   where F.SALARIO > 1000 and ( F.SEXO='M' or F.SEXO='F' ) 
   Group by FU.NOME, F.SALARIO, F.SEXO ORDEr BY FU.NOME;

--questão 8.2
select fun.nome, count(CASE WHEN fu.sexo = 'M' THEN 'M' END)[homens],
count(CASE WHEN fu.sexo = 'F' THEN 'F' END)[mulheres],
fu.sexo, SUM(fu.salario)[total de salario] from funcao fun  join funcionario fu
on fun.idfuncao = fu.idfuncao
group by fun.nome, fu.sexo
having  SUM(fu.salario) >1000
order by 1

--questão 9
select ped.idpedido, cli.nome[cliente], fu.nome[vendedor], 
convert(smallmoney, sum((it.preco * it.quant)-((it.preco * it.quant)*it.desconto/100)))[total]  from cliente cli 
inner join pedido ped on ped.idcliente = cli.idcliente inner join funcionario fu
on fu.idfuncionario = ped.idvendedor inner join itens it on it.idpedido = ped.idpedido
group by ped.idpedido, cli.nome, fu.nome
order by 1
 

--questão 10
select fu.nome, fu.sexo, fu.salario, ci.nome from funcionario fu
inner join cidade ci on fu.idnatural = ci.idcidade
where ci.idpais <>'BRA'

--questão 11
select pa.nome[pais], ci.nome[cidade], count(fu.nome)[qtd funcionarios], SUM(fu.salario)[total],
AVG(fu.salario)[media salario] from pais pa inner join cidade ci on pa.idpais
= ci.idpais inner join funcionario fu on ci.idcidade = fu.idreside
group by pa.nome, ci.nome

--questão 12
select fu.nome, ci1.nome[cidade natural] , ci2.nome[cidade reside] from funcionario fu
inner join cidade ci1 on ci1.idcidade = fu.idnatural inner join cidade ci2 on
ci2.idcidade = fu.idreside
order by 1

--questão 13
select ped.idpedido, ped.via, cli.nome[cliente], fu.nome[vendedor] from  cliente cli inner join pedido ped
on cli.idcliente = ped.idcliente inner join funcionario fu on fu.idfuncionario =
ped.idvendedor where ped.via IN ('A')
order by 1

--questão 14
select ti.nome[tipo] , pro.nome[produto] from tipo ti left join produto pro on ti.idtipo = pro.idtipo
order by 1

--questão 15
select fun.nome[funcao], fu.nome[funcionario]
from funcao fun left join funcionario fu
on fun.idfuncao =  fu.idfuncao
order by 1, 2

--questão 16
select fu.nome, ci.nome [cidade] from funcionario fu inner join cidade ci
on ci.idcidade = fu.idreside union select cli.nome, ci.nome[cidade] from 
cliente cli inner join cidade ci on ci.idcidade = cli.idcidade

--questão 17
select nome, fone from cliente where fax is null
 union select nome, fone from funcionario
where email is null

--questão 19
select pe.idpedido,(select max(quant) from itens it where it.idpedido = pe.idpedido)
[qtd de produto mais vendido] from pedido pe

--questão 20

select ci.nome[cidade], pa.nome[pais] from cidade ci inner join pais pa
on ci.idpais = pa.idpais where ci.idcidade = (select count(*) from cidade)



--questão 21

select se.idsetor[sigla], se.nome[setor], func.nome[chefe] from setor se inner join funcionario
func on func.idfuncionario = se.idchefe where se.idsetor in
(select idsetor from funcionario where salario > (select avg (salario) from funcionario))

--questão 22
select pr.idproduto, ti.nome[tipo] , pr.nome[produto] , pr.venda, convert(smallmoney, pr.venda * 0.15)[desconto],
convert(smallmoney, pr.venda - (pr.venda * 0.15))[preco promoção] from produto pr inner join tipo ti on ti.idtipo = pr.idtipo
where pr.venda > (select avg(venda) from produto)
order by ti.nome

--questão 23
select fu.nome, fu.datanasc[data de nascimento], datediff(year, fu.datanasc, getdate())[idade],
ci.nome[cidade], pa.nome[pais] from funcionario fu inner join cidade ci on fu.idnatural = ci.idcidade
inner join pais pa on pa.idpais = ci.idpais where fu.datanasc =  (
select min(datanasc) from funcionario where sexo = 'M' AND datediff(year, datanasc, getdate()) 
between 50 and 60 ) 

--questão 24

select fu.idfuncionario, fu.nome[funcionario], se.nome[setor],(
			select f.nome from funcionario f
			 where f.idfuncionario = se.idchefe)[chefe],fun.nome[funcao],		
			 fu.salario, fun.gratific[gratificação],(fu.salario + fun.gratific)[ValorTotal]
			 from funcionario fu 
			 join setor se on se.idsetor = fu.idsetor 
			 join funcao fun on fun.idfuncao = fu.idfuncao
			 where (fu.salario + fun.gratific) = (
			 select min(fu.salario + fun.gratific) from funcionario fu
			 join funcao fun on fu.idfuncao = fun.idfuncao
			 where fu.salario + fun.gratific > 1500)


--questão 25
select pe.idpedido, pr.nome[produto], ti.nome[tipo], pr.venda
from pedido pe join itens it on pe.idpedido = it.idpedido
join produto pr on pr.idproduto = it.idproduto join tipo ti
on ti.idtipo = pr.idtipo
where pr.venda = (
				 select max(pr.venda) from produto pr
				 join itens it on it.idproduto = pr.
				 idproduto join pedido pe on pe.idpedido
				 = it.idpedido) 
				 order by 1				
					
--questão 26
select se.nome[setor], se.idsetor[sigla], sum(fu.salario)[total salario]
from setor se join funcionario fu on fu.idsetor = se.idsetor
join funcao fun on fun.idfuncao = fu.idfuncao
where fun.nome in ( select  nome from funcao where nome like 'Supervisor%' 
					or nome like 'Vendedor%')
group by se.nome, se.idsetor
having sum(fu.salario) > 5000

--questão 27
select fun.nome[funcao], fun.gratific[gratificacao], fu.sexo,
count(fu.idfuncionario)[qtd de funcionario], sum (fu.salario)[total salario],
sum(fun.gratific)[total gratificacao], sum (fu.salario + fun.gratific)[total geral de salario]
 from funcao fun join funcionario fu on fun.idfuncao
= fu.idfuncao
where fu.idfuncionario in (
						   select fu.idfuncionario from funcionario fu join setor se
						   on se.idsetor = fu.idsetor
						   where se.nome like '%Compras%' or se.nome like '%Finanças%'or
						   se.nome like '%Vendas%' or se.nome like '%Marketing%' )
group by fun.nome, fun.gratific, fu.sexo	

--questão 28
select pr.nome[produto], pr.venda,(
								  Select max(it.preco) from itens it
								  where pr.idproduto = it.idproduto)[valor]								
								  from produto pr



				 