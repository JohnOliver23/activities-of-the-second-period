
--questão 01/lista 1
select idproduto, nome[produto], quantest[Estoque Real],
estmin[Estoque Minimo], idtipo[referencia] from produto
order by idproduto

--questão 2/ lista1
select *, venda-custo[lucro] from produto 

--questão 3/ lista 1
select *, venda +(venda * 25)/100 [aumento] from produto


--questão 4/ lista 1
select distinct idreside from funcionario


--questão 5/ lista 1

select  distinct idvendedor from pedido


--questão 6/ lista 1
select idproduto, nome, idtipo, custo, venda from produto
order by nome


--questão 7/ lista 1
select idproduto, nome, custo, venda, venda - custo[lucro] from produto
order by lucro desc

--questão 8/ lista 1
select idfuncionario, nome, idreside, sexo, salario from funcionario
order by 3, 4 asc , 5 desc

--questão 9/ lista 1

select nome, idsetor, idnatural from funcionario
where idnatural in (7, 8, 15)
order by 2, 1

--questão 10 / lista1
select  idcidade, nome from cidade 
where idpais != 'BRA'
order by idcidade

--questão 11/ lista 1
select *, convert(smallmoney, (salario * 1.52))[aumento] from funcionario
where sexo ='F'

--questão 12/ lista 1
select idproduto, nome, custo from produto pr
where custo between 20.00 and 100.00
order by idproduto

--questão 13/ lista 1
select nome, fone from funcionario
where fone is null

--questão 14/ lista 1
select nome, quantest, estmin from produto pr
where quantest < estmin

--questão 15/ lista 1

select * from produto 
where idtipo not in (1, 2, 3) and venda between 10.00 and 50.00

--questão 16/ lista 1
select nome, email from funcionario
where email is not null

--questão 17/ lista 1
select nome, datanasc from funcionario
where datanasc between '1965-12-01' and '1966-03-31'
order by nome

--questão 18/ lista 1
select datediff(year, datanasc, getdate())[idade],
nome from funcionario 
order by datediff(year, datanasc, getdate()), nome

--questão 19/ lista 1
select * from funcionario
where sexo ='M' and estcivil ='C' and salario <= 3000
order by nome

--questão 20/ lista 1
select idproduto, nome, idtipo, venda from produto 
where venda <= 50.00 and idtipo not in (1, 3)
order by nome desc

--questão 21
select nome, datanasc, idnatural from funcionario 
where datanasc between '1965-01-01' and '1966-12-31'
and idnatural not in (4, 6, 10)
order by nome

--questão 22
select nome, venda, descricao from produto
where descricao like '%chocolate%' and venda >= 15.00
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
where sexo = 'F'

--questao 34
select max (custo)[produto mais caro] from produto 

--questao 35
select max (datapedid)[data mais recente] from pedido

--questão 36
select month(min (datapedid)) [pedido mais antigo] from pedido
where via = 'A'

--questao 37
select idpedido, max(quant)[quantidade produto mais vendido] from itens
group by idpedido


--questão 38
select idsetor, sum(salario)[total] from funcionario
group by idsetor
having sum(salario) > 5000

--questão 39
select idtipo, avg (custo)[media de custo], avg(venda)[media de venda],
 avg(venda-custo)[diferenca] from produto
 group by idtipo

 --questao 40
 select idproduto, count(idpedido)[quantidade de pedidos]	from itens
 group by idproduto
 having count(idpedido) > 20


 --questão 41
select idsetor, sexo, avg(convert(int,(datediff(year, datanasc, getdate()))))
[media idade] from funcionario
group by idsetor, sexo
having avg (convert(int, (datediff(year, datanasc, getdate())))) < 40

--questão 42
select idnatural, sexo, count(sexo)[quantidades de nascimentos] from funcionario
group by idnatural, sexo
having count(sexo) > =3

--questão 43

select idpais, count(idcidade)[qtd cidades] from cidade
group by idpais
having count(idcidade)>5

--questao 44
select idcliente, year(datapedid)[ano do pedido], count(idcliente)[quant pedido] from pedido
group by idcliente, year(datapedid)
having count(idcliente) > 5

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
select idpedido, sum(quant)[qtd itens], sum(preco * quant)[total] from itens
group by idpedido
having sum(preco * quant) >1000


--questao 49
select idsetor, idfuncao, count(idfuncionario)[qtd funcionarios] from funcionario
where estcivil !='V'
group by idsetor, idfuncao

--questao 50
select idpais, count(idcidade)[total cidades] from cidade
where idpais !='BRA'
group by idpais	
having count(idcidade) > 3











