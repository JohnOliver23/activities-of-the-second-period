let ip1 = document.querySelector('#ip1')
let ip2 = document.querySelector('#ip2')
let btn = document.querySelector('#btn')
let project = document.querySelector('.project')
let comunity = document.querySelector('.comunity')
let code = document.querySelector('.code')
let contrib
let cont = 1;

function geraInfo(value) {
	
	let url = `https://api.github.com/repos/${value}`

	//fetch realiza a requisição
	fetch(url)
	  .then(resposta => resposta.json()) //.then é equivalente ao sucess, o primeiro recebe a resposta e extrai apenas o json útil dela
	  .then( function(data){ //aqui vai oq vc faz com a resposta definitiva
		let str = `<div class="grid${cont}"><div class="name">${data.name}</div><div class="login"><i class="fa fa-user" aria-hidden="true"></i>
					<span class="loginColor">${data.owner.login}<span></div>
					<div class="create"><i class="fa fa-circle-o" aria-hidden="true"></i>${verificDate(data.created_at)}</div>
					<div class="update"><i class="fa fa-repeat" aria-hidden="true"></i>${verificUpdate(data.updated_at)}</div>`

		let str2 = `<div class="gridCom${cont}"><div class="comDates"><div class="star"><i class="fa fa-star" aria-hidden="true"></i>
					<span class="starColor">${data.stargazers_count}</span></div>
					<div class="fork"><i class="fa fa-code-fork" aria-hidden="true">
					</i><span class="forkColor">${data.forks_count}</span></div></div>`
		contributors(value)
		comiters(value)
		languages(value)
		project.insertAdjacentHTML('beforeend', str)
		comunity.insertAdjacentHTML('beforeend', str2)
		cont++;
		verificUpdate(data.updated_at)
		
		
		

		
		
})

}
function contributors(value) {
	let url = `https://api.github.com/repos/${value}/contributors`
	
	//fetch realiza a requisição
	fetch(url)
	  .then(resposta => resposta.json()) //.then é equivalente ao sucess, o primeiro recebe a resposta e extrai apenas o json útil dela
	  .then( function(data){
	  	console.log(data.length)
	  	comunity.insertAdjacentHTML('beforeend', `<div class="gridCom${cont}"><div class="contri"><i class="fa fa-users" aria-hidden="true"></i>${data.length}contributors</div></div></div>`)
	  	
})
}

function comiters(value) {
	let url = `https://api.github.com/repos/${value}/commits`
	
	//fetch realiza a requisição
	fetch(url)
	  .then(resposta => resposta.json()) //.then é equivalente ao sucess, o primeiro recebe a resposta e extrai apenas o json útil dela
	  .then( function(data){
	  	console.log(data.length)
	  	code.insertAdjacentHTML('afterbegin', `<div class="comit"><span class="comitColor">${data.length}</span>commits</div>`)
	  	
})
}
function languages (value){
	let url = `https://api.github.com/repos/${value}/languages`
	
	//fetch realiza a requisição
	fetch(url)
	  .then(resposta => resposta.json()) //.then é equivalente ao sucess, o primeiro recebe a resposta e extrai apenas o json útil dela
	  .then( function(data){
	  	let total = Object.entries(data).reduce((x,y)=> x+y[1],0)
	  	console.log(total)
	  	code.insertAdjacentHTML('beforeend', `<div class="gridLan"><div class="languages"><span class="js"><i class="fa fa-language"></i>
	  							<span class="jsColor">JavaScript:</span>${verificLanguage(parseInt((data.JavaScript/total) * 100))}%</span>
	  							<span class="css">CSS:${verificLanguage(parseInt((data.CSS/total) * 100))}%</span>
	  							<span class="html">HTML:${verificLanguage(parseInt((data.HTML/total) * 100))}%</span>
	  							<span class="ruby">Ruby:${verificLanguage(parseInt((data.Ruby/total) * 100))}%</span></div></div></div>`)

})
}

let verificDate = (x=>{
	let resp = x.split('-').join('-').split('T');
	let newDate = resp[0].split('-');
	let year = newDate[0]
	let month = newDate[1]
	let day = newDate[2]
	let newMonth = verificMonth(month)
	let newDay = day+'th'
	formatedDate = newMonth+' '+newDay+', '+ year	
	console.log(newMonth+' '+newDay+', '+ year)
	return formatedDate
})

let verificMonth = (x=>{
	if (x == 01){
		return 'Jan'
	}
	else if (x == 02){
		return 'Feb'
	}
	else if (x== 03){
		return 'Mar'
	}
	else if (x== 04){
		return 'Apr'
	}
	else if (x == 05){
		return 'May'
	}
	else if (x == 06){
		return 'Jun'
	}
	else if (x == 07){
		return 'Jul'
	}
	else if (x == 08){
		return 'Aug'
	}
	else if (x == 09){
		return 'Sep'
	}
	else if (x == 10){
		return 'Oct'
	}
	else if (x == 11){
		return 'Nov'
	}
	else if (x == 12){
		return 'Dec'
	}

})

let verificUpdate = (x=>{
	var currentdate = new Date();
	var dateUp = Date.parse(x)
	var dayHj = Date.parse(currentdate)
	diferenca = dayHj - dateUp
	let minutes = parseInt((diferenca / 1000)/20)
	let resp
	if (minutes > 60 && minutes <1440 ){
		resp = parseInt(minutes/60)+'hours ago'
		console.log(resp)
		return resp
	}else if (minutes > 1440 && minutes < 43800){
		resp = parseInt(minutes/1440)+'days ago'
		console.log(resp)
		return resp
	}else if (minutes > 43800){
		resp = parseInt(minutes/43800)+'month ago'
		console.log(resp)
		return resp
	}
	else{
		resp = parseInt(minutes)
		console.log(resp+'minutes ago')
		return resp+'minutes ago'
	}
	
})
const verificLanguage = (x=> x? x: 0)



btn.addEventListener('click', function(event){
	$('h2').css('display','none').slideToggle(200);
	$('.GridProject').css('display','none').slideToggle(200)
	$('.GridComunity').css('display','none').slideToggle(200)
	$('.GridCode').css('display','none').slideToggle(200)

	geraInfo(ip1.value)
	geraInfo(ip2.value)
	$('h2').css('display','block')
	$('.GridProject').css('display','grid')
	$('.GridComunity').css('display','grid')
	$('.GridCode').css('display','grid')
})