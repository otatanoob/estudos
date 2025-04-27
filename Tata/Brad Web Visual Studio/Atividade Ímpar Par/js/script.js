const frm =document.querySelector("form"); // obtem todos os elementos do formulário
/*console.log(frm);*/
const resp1 = document.querySelector("#outResp1");


frm.addEventListener("submit", (e) => {
    e.preventDefault();
    resp1.textContent = ""
    const calc = Number(frm.inCalc.value);
    if(calc % 2 ==0 ){
        resp1.textContent = `O número é Par`
    } else {
        resp1.textContent = `O número é Ímpar`
    }
 
});