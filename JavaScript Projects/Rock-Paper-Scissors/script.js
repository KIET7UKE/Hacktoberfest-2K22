const totalRoundsSelector = document.querySelector("#rounds");
const playBtn = document.querySelector(".play-btn");
const gameBox = document.querySelector(".game-box");
const roundDisplayer = document.querySelector(".display-rounds");
const roundHeading = document.querySelector(".round-heading");
const gameStarter = document.querySelector(".start-box");
const playerBox = document.querySelector(".player-section");
const computerBox = document.querySelector(".computer-section");
const btnsHolder = document.querySelector(".btn-holder");
const playAgainBtn = document.querySelector(".playAgain-btn");

const playerScore = document.querySelector(".player-score");
const computerScore = document.querySelector(".computer-score");

const playerImg = document.querySelector(".player-img");
const computerImg = document.querySelector(".computer-img");
let scores = [0, 0];

const imagesMap = new Map([
  [0, "imgs/paper-1.png"],
  [1, "imgs/scissor-1.png"],
  [2, "imgs/stone-1.png"],
]);

let totalRounds;
let roundNo = 1;

function displayRoundNo(roundNo) {
  roundHeading.textContent = `Round ${roundNo}`;
}

const randomNo = function () {
  return Math.trunc(Math.random() * 3);
};

playBtn.addEventListener("click", function (e) {
  if (totalRoundsSelector.value > 0) {
    e.preventDefault();
    totalRounds = +totalRoundsSelector.value;

    playerBox.classList.remove("disable");
    gameBox.classList.remove("blur");
    gameStarter.classList.add("hidden");
    displayRoundNo(roundNo);
    roundDisplayer.classList.remove("hidden");
  }
});

const switchPlayer = function () {
  playerBox.classList.toggle("disable");
  playerBox.classList.toggle("player-active");
  computerBox.classList.toggle("player-active");
};

const decideResult = function (playerKey, computerKey) {
  if (playerKey === 0 && computerKey === 2) {
    scores[0]++;
  } else if (playerKey === 2 && computerKey === 0) {
    scores[1]++;
  }

  if (playerKey === 1 && computerKey === 0) {
    scores[0]++;
  } else if (playerKey === 0 && computerKey === 1) {
    scores[1]++;
  }

  if (playerKey === 2 && computerKey === 1) {
    scores[0]++;
  } else if (playerKey === 1 && computerKey === 2) {
    scores[1]++;
  }
};

const updateParams = function () {
  playerScore.textContent = scores[0];
  computerScore.textContent = scores[1];
  if (roundNo > totalRounds) {
    if (scores[0] > scores[1]) {
      roundHeading.textContent = `You-Win`;
    } else if (scores[0] < scores[1]) {
      roundHeading.textContent = `You-lose`;
    } else {
      roundHeading.textContent = `Draw`;
    }

    return;
  }
  displayRoundNo(roundNo);
};
btnsHolder.addEventListener("click", function (e) {
  if (e.target.classList.contains("btn")) {
    if (roundNo > totalRounds) {
      return;
    }
    const playerKey = +e.target.dataset.key;
    playerImg.src = imagesMap.get(playerKey);
    switchPlayer();
    const computerKey = randomNo();

    let intervalKey = 0;
    const continousImages = setInterval(function () {
      computerImg.src = imagesMap.get(intervalKey);
      intervalKey === 2 ? (intervalKey = 0) : intervalKey++;
    }, 300);

    setTimeout(function () {
      clearInterval(continousImages);
      const newSrc = imagesMap.get(computerKey);
      computerImg.src = newSrc;
      roundNo++;
      decideResult(playerKey, computerKey);
      updateParams();
      switchPlayer();
    }, 2000);
  }
});

playAgainBtn.addEventListener("click", function (e) {
  playerBox.classList.add("disable");
  gameBox.classList.add("blur");
  gameStarter.classList.remove("hidden");

  roundDisplayer.classList.add("hidden");
  roundNo = 1;
  scores[0] = 0;
  scores[1] = 0;
  playerScore.textContent = scores[0];
  computerScore.textContent = scores[1];
});
