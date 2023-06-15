const inputUsuario = document.getElementById("cpf");
const inputSenha = document.getElementById("senha");
const campoUsuario = document.getElementById("cpf");
const campoSenha = document.getElementById("senha");

const btnEntrar = document.getElementById("entrar");
const textoNegado = document.getElementById("texto-negado");

btnEntrar.addEventListener("click", () => {
    console.log("click");
    validarLogin();
})

inputUsuario.addEventListener("input", () => {
    if (visualNegado) {
        visualNormalLogin();
        visualNegado = false;
    }
})

inputSenha.addEventListener("input", () => {
    if (visualNegado) {
        visualNormalLogin();
        visualNegado = false;
    }
})

const usuarioPrincipal = 123;
const senhaPrincipal = 123;
var visualNegado = false;
var tentativas = 3;


function validarLogin() {
    if (tentativas > 1) {
        console.log(inputSenha.value)
        if (inputSenha.value != "" && inputUsuario.value != "") {
            visualNormalLogin();
            var usuario = parseInt(inputUsuario.value);
            var senha = parseInt(inputSenha.value);
            if (usuarioPrincipal === usuario && senhaPrincipal === senha && !isNaN(senha)) {
                window.location.href = "../html/home.html";
            } else {
                limparInputs();
                visualNegarLogin();
                tentativas--;
                textoNegado.innerHTML = "Usuário ou senha inválidos. " + tentativas + " tentativas restantes.";
            }
        }
    } else {
        visualNegarLogin();
        textoNegado.innerHTML = "Você tentou muitas vezes e foi bloqueado";
        bloquearInputs();
    }
}

function visualNegarLogin() {
    campoUsuario.classList.add("negado");
    campoSenha.classList.add("negado");
    textoNegado.classList.add("negado");
    visualNegado = true;

}

function visualNormalLogin() {
    campoUsuario.classList.remove("negado");
    campoSenha.classList.remove("negado");
    textoNegado.classList.remove("negado");
    visualNegado = false;
}

function bloquearInputs() {
    inputSenha.disabled = true;
    inputUsuario.disabled = true;
    inputSenha.classList.add("bloqueado");
    inputUsuario.classList.add("bloqueado");
}
function limparInputs() {
    inputSenha.value = "";
    inputUsuario.value = "";
}