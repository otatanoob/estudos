const frm = document.querySelector("form");

const resultado = document.querySelector("#outResultado");
const multa = document.querySelector("#outMulta");

frm.addEventListener("submit", (e) =>{
    e.preventDefault();

    resultado.textContent = "";

    const velocidade = Number(frm.inVelocidade.value);
    const velPermitida = Number (frm.inVelPermitida.value);
    let valorMulta = 0;

    if(velocidade>velPermitida && velocidade<=velPermitida * 1.2){

        valorMulta = velocidade * 1.2;
        resultado.textContent = 'Multa leve!';
        multa.textContent = `Valor da multa: R$ ${valorMulta.toFixed(2)}`;
    } 
    else if (velocidade>velPermitida * 1.2){

        valorMulta = velocidade * 1.5;
        resultado.textContent = 'Multa grave!';
        multa.textContent = `Valor da multa: R$ ${valorMulta.toFixed(2)}`;

    } else{
        
        resultado.textContent = 'Sem multas!';
    }
});