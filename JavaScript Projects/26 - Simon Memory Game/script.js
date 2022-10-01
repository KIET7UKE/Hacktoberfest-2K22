var userClickedPattern = [];
var buttonColors = ["red", "blue", "green", "yellow"];
var gamePattern = [];
var level = 0;
var started = false;
$(document).on("keyup", function () {
    if (!started) {
        $("h1").text("LEVEL " + level);
        nextSequence();
        started = true;
    }
});
function nextSequence() {
    userClickedPattern = [];
    level++;
    $("h1").text("LEVEL " + level);
    var num = Math.floor(Math.random() * 4);
    var randomChosenColour = buttonColors[num];
    gamePattern.push(randomChosenColour);
    playAnimation(randomChosenColour);
    playSound(randomChosenColour);
}
function playAnimation(randomChosenColour) {
    $("#" + randomChosenColour).fadeIn(100).fadeOut(100).fadeIn(100);
}
var userChosenColour;
$(".btn").on("click", function () {
    userChosenColour = $(this).attr("id");
    userClickedPattern.push(userChosenColour);
    playSound(userChosenColour);
    animatePress(userChosenColour);
    checkAnswer(userClickedPattern.length - 1);
});
function playSound(name) {
    var audio = new Audio("sounds/" + name + ".mp3");
    audio.play();
}
function animatePress(currentColour) {
    $("#" + currentColour).addClass('pressed').dequeue().delay(100).queue(function () {
        $("#" + currentColour).removeClass('pressed');
    });
}
function checkAnswer(currentLevel) {
    if (gamePattern[currentLevel] == userClickedPattern[currentLevel]) {
        // console.log("success");
        if (userClickedPattern.length == gamePattern.length) {
            setTimeout(function () {
                nextSequence();
            }, 1000);
        }
    }
    else {
        $("body").addClass("game-over").dequeue().delay(200).queue(function () {
            $("body").removeClass("game-over");
        });
        $("h1").text("Game Over, Press Any Key To Restart");
        startOver();
    }
}
function startOver() {
    level = 0;
    started = false;
    gamePattern = [];
}
