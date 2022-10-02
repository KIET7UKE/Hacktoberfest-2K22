const hours = document.querySelector(".hours");
const minutes = document.querySelector(".minutes");
const seconds = document.querySelector(".seconds");
const hourInput = document.getElementById("set-hours");
const minuteInput = document.getElementById("set-minutes");
const secondInput = document.getElementById("set-seconds");
const timerStart = document.querySelector(".timer-start");
const timerStop = document.querySelector(".timer-stop");
const timerPause = document.querySelector(".timer-pause");
const timerAudio = document.getElementById("timer-audio");

hourInput.addEventListener("input", e => {
    if (e.target.value.length === 1) {
        hours.innerHTML = `0${e.target.value}`;
    } else {
        hours.innerHTML = e.target.value;
    }
});

minuteInput.addEventListener("input", e => {
    if (e.target.value.length === 1) {
        minutes.innerHTML = `0${e.target.value}`;
    } else {
        minutes.innerHTML = e.target.value;
    }
});

secondInput.addEventListener("input", e => {
    if (e.target.value.length === 1) {
        seconds.innerHTML = `0${e.target.value}`;
    } else {
        seconds.innerHTML = e.target.value;
    }
});

// UPDATE TIMER DISPLAY
function updateDisplay(entity, element) {
    if (String(entity).length === 1) {
        element.innerHTML = `0${entity}`;
    } else {
        element.innerHTML = String(entity);
    }
}

// START TIMER
function startTimer() {
    let hr = parseInt(hours.innerHTML);
    let min = parseInt(minutes.innerHTML);
    let sec = parseInt(seconds.innerHTML);

    if (hr == 0 && min == 0 && sec == 0)
        return;

    timerStart.removeEventListener("click", startTimer);
    timerStart.classList.add("disabled");
    timerPause.classList.remove("disabled");
    hourInput.setAttribute("disabled", "true");
    minuteInput.setAttribute("disabled", "true");
    secondInput.setAttribute("disabled", "true");

    setInterval(() => {
        if (sec != 0) {
            sec--;
            updateDisplay(sec, seconds);
        } else {
            if (min != 0) {
                min--;
                sec = 59;
                updateDisplay(sec, seconds);
                updateDisplay(min, minutes);
            } else {
                if (hr != 0) {
                    hr--;
                    min = 59;
                    sec = 59;
                    updateDisplay(hr, hours);
                    updateDisplay(sec, seconds);
                    updateDisplay(min, minutes);
                } else {
                    timerAudio.play();

                    for (let i = 0; i < 999999; i++) {
                        clearInterval(i);
                    }

                    timerStart.addEventListener("click", startTimer);
                    timerStart.classList.remove("disabled");
                    hourInput.removeAttribute("disabled");
                    minuteInput.removeAttribute("disabled");
                    secondInput.removeAttribute("disabled");
                    hourInput.value = 0;
                    minuteInput.value = 0;
                    secondInput.value = 0;
                }
            }
        }
    }, 1000);
}

timerStart.addEventListener("click", startTimer);
document.addEventListener("keydown", e => {
    if (e.key === ' ')
        startTimer();
});

// PAUSE TIMER
function pauseTimer() {
    if (timerStart.classList.contains("disabled")) {
        timerStart.classList.remove("disabled");
        timerPause.classList.add("disabled");
        timerStart.addEventListener("click", startTimer);
        hourInput.removeAttribute("disabled");
        minuteInput.removeAttribute("disabled");
        secondInput.removeAttribute("disabled");

        for (let i = 0; i < 999999; i++) {
            clearInterval(i);
        }
    }
}

timerPause.addEventListener("click", pauseTimer);
document.addEventListener("keydown", e => {
    if (e.key === 'P' || e.key === 'p') {
        pauseTimer();
    }
});

// STOP TIMER
function stopTimer() {
    timerStart.addEventListener("click", startTimer);
    timerStart.classList.remove("disabled");
    timerPause.classList.remove("disabled");
    hourInput.removeAttribute("disabled");
    minuteInput.removeAttribute("disabled");
    secondInput.removeAttribute("disabled");
    hourInput.value = 0;
    minuteInput.value = 0;
    secondInput.value = 0;
    hours.innerHTML = "00";
    minutes.innerHTML = "00";
    seconds.innerHTML = "00";

    for (let i = 0; i < 999999; i++) {
        clearInterval(i);
    }
}

timerStop.addEventListener("click", stopTimer);
document.addEventListener("keydown", e => {
    if (e.key === 'X' || e.key === 'x') {
        stopTimer();
    }
});