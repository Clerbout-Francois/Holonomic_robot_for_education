function onButton1() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "clock/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton2() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "anticlock/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton3() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "leftfront/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton4() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "forward/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function offButton_STOP() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "forward/off", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton5() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "rightfront/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton6() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "left/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton7() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "right/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton8() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "leftrear/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton9() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "backward/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}

function onButton10() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "rightrear/on", true); //By putting "true" you choose the command to be asynchrone
    xhttp.send();
}