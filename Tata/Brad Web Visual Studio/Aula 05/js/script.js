const frm =document.querySelector("form"); // obtem todos os elementos do formulário
/*console.log(frm);*/
/*const resp2 = document.getElementById("#outResp1")*/
const resp1 = document.querySelector("#outResp1");
const resp2 = document.querySelector("#outResp2");
const resp3 = document.querySelector("#outResp3");

/*
function cacularnotas(n1, n2){
    //executar o codigo
    soma = n1 + n2;
    return soma;
}


//Arrow functions
let calcular notas = (n1, n2) => {
    soma = n1 + n2;
    return soma;
}

calcularnotas(10 ,20);
*/

frm.addEventListener("submit", (e) => {
    e.preventDefault(); // evita o envio do formulário
    resp1.textContent = ""
    resp2.textContent = ""
    resp3.textContent = ""
    const saque = Number(frm.inSaque.value);
    //console.log(saque);
    if(saque % 10 !=0 ){
        alert("Valor inválido para notas disponíveis (R$10,50,100)!");
        frm.inSaque.focus();
        return;
    }

    const notasCem= Math.floor(saque/100)//calcula quantidade de notas de 100.
    let resto = saque % 100 // quanto sobra para pagara com notas de 50.

    const notasCinquenta = Math.floor(resto / 50)// calcula a quantidade de notas de 50.
    resto = resto % 50 // quanto sobra

    const notasDez = Math.floor (resto / 10) // calcula quantas notas de 10.

    if(notasCem>0){
        resp1.textContent = ` Nota de R$ 100: ${notasCem}`
    }
    if(notasCinquenta>0){
        resp2.textContent = ` Nota de R$ 50: ${notasCinquenta}`
    }
    if(notasDez>0){
        resp3.innerHTML = `Notas de R$10: ${notasDez}`
    }

});