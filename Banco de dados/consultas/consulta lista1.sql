
--questão 01/lista 1
select idproduto, nome[produto], quantest[Estoque Real],
estmin[Estoque Minimo], idtipo[referencia] from produto
order by idproduto

--questão 2/ lista1
select *, venda-custo[lucro] from produto 

--questão 3/ lista 1
select *, venda +(venda *25/100)[aumento] from produto

--questão 4/ lista 1
select distinct ci.idcidade,ci.nome from cidade as ci, Funcionario as fu
where ci.idcidade = fu.idreside

--questão 5/ lista 1
select distinct fu.idfuncionario from funcionario as fu, pedido as pe
where fu.idfuncionario = pe.idvendedor

--questão 6/ lista 1
select pr.idproduto, pr.nome, ti.nome[tipo], pr.custo, pr.venda  from produto pr, tipo ti
order by pr.nome asc

--questão 7/ lista 1
select nome, custo, venda, venda - custo[lucro] from produto
order by lucro desc

--questão 8/ lista 1
select fu.idfuncionario, fu.nome, ci.nome[cidade], fu.sexo, fu.salario from funcionario fu,
cidade ci
order by ci.nome, fu.sexo asc, fu.salario desc

--questão 9/ lista 1
select fu.nome, se.nome[setor], ci.idcidade from funcionario fu, setor se, cidade ci
where ci.idcidade in(7, 8, 15)
order by se.nome, fu.nome 

--questão 10 / lista1
select  ci.idcidade, ci.nome from cidade ci
where ci.idpais != 'BRA'
order by ci.idcidade

--questão 11/ lista 1
select nome, (salario * 1.52)[aumento], salario from funcionario

--questão 12/ lista 1
select pr.nome, pr.custo from produto pr
where custo between 20.00 and 100.00
order by pr.idproduto

--questão 13/ lista 1
select nome, fone from funcionario
where fone is null

--questão 14/ lista 1
select pr.nome, pr.quantest, pr.estmin from produto pr
where pr.quantest < pr.estmin

--questão 15/ lista 1
select pr.nome, ti.idtipo, pr.venda from produto pr, tipo ti
where ti.idtipo not in (1, 2, 3) and venda between 10.00 and 50.00

--questão 16/ lista 1
select nome, email from funcionario
where email is not null

--questão 17/ lista 1
select nome, datanasc from funcionario
where datanasc between '1965-12-01' and '1966-03-31'
order by nome

--questão 18/ lista 1
select floor(datediff(day, fu.datanasc, getdate())/365.25)[idade],
fu.nome from funcionario fu
order by floor(datediff(day, fu.datanasc, getdate())/365.25), fu.nome

--questão 19/ lista 1
select * from funcionario
where sexo ='M' and estcivil ='C' and salario < 3000
order by nome

--questão 20/ lista 1
select pr.idproduto, pr.nome, pr.idtipo, pr.venda from produto pr
where pr.venda <=50 and pr.idtipo not in(1,3)
order by nome desc

--questão 21
select nome, datanasc from funcionario 
where datanasc between '1965-01-01' and '1966-12-31'
order by nome

--questão 22
select nome, venda, descricao from produto
where descricao like '%chocolate%' and venda >= 15
order by venda desc

--questão 23
select idfuncionario , nome, sexo from funcionario
where sexo ='M' and nome not like '[am]%'
order by nome

--questão 24
select * from pedido
WHERE via = 'A' and frete >=300
order by idpedido

--questão 25
select nome, email, celular from funcionario 
where email is  null and celular is  not null
order by nome

--questão 26
select count(*)[quantidade] from	cidade 
where idpais != 'BRA'

--questão 27
select count(*) from funcionario
where email is not null

--questão 28
select sum(quantest * venda)[total] from produto	

--questão 29
select sum(frete) from pedido
where via = 'M'

--questão 30
select avg(salario) from funcionario
where sexo ='F' and salario between 1000 and 2000 and idsetor not in('MKT','PRS')

--questão 31
select avg(salario)[media] from funcionario
where idfuncao  in(10, 11) and estcivil != 'C'

--questão 32
select avg(venda) from produto
where idtipo = 1

--questão 33
select MIN(datanasc)[data] from funcionario

--questao 34
select max (venda)[maior venda] from produto 

--questao 35
select max (datapedid)[data mais recente] from pedido

--questão 36
select month(min (datapedid)) [pedido mais antigo] from pedido


--questao 37
select idproduto, max(quant)[quantidade produto mais vendido] from itens
group by idproduto



--questão 38
select idsetor, sum(salario)[total] from funcionario
group by idsetor
having sum(salario) > 5000

--questão 39
select idtipo, avg (custo)[media de custo], avg(venda)[media de venda],
 avg(venda) -avg (custo)[diferenca] from produto
 group by idtipo

 --questao 40
 select idproduto, count(idpedido)[quantidade de pedidos]	from itens
 group by idproduto
 having count(idpedido) > 20

 --questão 41
select idsetor, sexo, avg(convert(int,floor(datediff(day, datanasc, getdate())/365.25)))
[media idade] from funcionario
group by idsetor, sexo
having avg(floor(datediff(day, datanasc, getdate())/365.25)) < 40

--questão 42
select idnatural, sexo, count(sexo)[quantidades de nascimentos] from funcionario
group by idnatural, sexo
having count(sexo) > =3

--questão 43

select idpais, count(idcidade) from cidade
group by idpais
having count(idcidade)>5

--questao 44
select idcliente, year(datapedid), count(idpedido)[quant pedido] from pedido
group by idcliente, year(datapedid)
having count(idpedido) > 5

--questão 45
select idtipo, avg(custo)[media de custo], avg(venda)[media de venda],
(avg(venda) - avg(custo))/avg(venda) *100[percentual] from produto
group by idtipo
having (avg(venda) - avg(custo))/avg(venda) *100 > 40

--questão 46
select sexo, sum(salario)[total do salario], avg(salario)[media de salarios] from funcionario
WHERE estcivil = 'S' AND salario > 1500
group by sexo

--questao 47
select month(datapedid)[mes], sum(frete)[valor mensal], avg(frete)[media mensal] from pedido
where year(datapedid) = 1998
group by month(datapedid)

--questão 48
select quant, sum(preco)[total] from itens
group by quant
having sum(preco) > 1000

--questao 49
select idsetor, count(idfuncao)[total funcao] from funcionario
where estcivil !='V'
group by idsetor

--questao 50
select idpais, count(idcidade)[total cidades] from cidade
where idpais !='BRA'
group by idpais
having count(idcidade) > 3





