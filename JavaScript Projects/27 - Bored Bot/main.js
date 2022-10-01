//Basic Bot Structure Starts


localStorage.getItem("user")
const botStart = document.querySelector(".bot-start")
const botActive = document.querySelector(".bot-active")
const userNameInput = document.querySelector(".user-name-input")
const userNameBtn = document.querySelector(".user-name-btn")
const activityBtn = document.querySelector(".activity-btn")

activityBtn.addEventListener("click", function(){
    fetch("https://apis.scrimba.com/bored/api/activity")
    .then(response => response.json())
    .then(data => {
        document.querySelector(".new-idea").textContent = data.activity
        activityBtn.textContent = "Get Another Activity"
    })
})

if(localStorage.getItem("user")){
    botStart.classList.add("none")
    botActive.classList.remove("none")
    document.querySelector(".head1").classList.add("none")
    document.querySelector(".head2").classList.add("none")
    document.querySelector(".head3").classList.remove("none")
}
userNameBtn.addEventListener("click", function(){
    if(userNameInput){
        let userName = userNameInput.value
        localStorage.setItem("user", userName)
        let x = localStorage.getItem("user")
        document.querySelector(".user-name").textContent = x
        document.querySelector(".head1").classList.add("none")
        document.querySelector(".head2").classList.remove("none")
        document.querySelector(".head3").classList.add("none")
        botStart.classList.remove("none")
    } 
})

botStart.addEventListener("click", function(){
    botStart.classList.add("none")
    botActive.classList.remove("none")
    document.querySelector(".head1").classList.add("none")
    document.querySelector(".head2").classList.add("none")
    document.querySelector(".head3").classList.remove("none")
    let x = localStorage.getItem("user")
    y.forEach(function(name){
        name.textContent = x;
    })
})
let x = localStorage.getItem("user")
var y = document.querySelectorAll('.user-name');
y.forEach(function(name){
    name.textContent = x;
});

//Menu Icon Starts

const menuBtn = document.querySelector(".menu-btn")
const closeBtn = document.querySelector(".close-btn")
const menuList = document.querySelector(".menu")

menuBtn.addEventListener("click", function(){
    menuList.classList.remove("none")
    menuBtn.classList.add("none")
})
closeBtn.addEventListener("click", function(){
    menuList.classList.add("none")
    menuBtn.classList.remove("none")
})