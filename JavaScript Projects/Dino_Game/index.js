let box1=document.getElementById('box1');
let box3=document.getElementById('box3');
let scoreNum=0;
function game(){
    if(box1.classList!='animate1')
    {
    score1(1);
    box1.classList.add('animate1');
    scoreNum++;
    let h2=document.getElementById('h2');
    h2.innerHTML=`Score:${scoreNum}`;
    }
    setTimeout(()=>{
        box1.classList.remove('animate1');
    },500)
}
let checkdead=setInterval(function(){
     let leftBox1=parseInt(window.getComputedStyle(box1,null).getPropertyValue('top'));
     let leftBox2=parseInt(window.getComputedStyle(box3,null).getPropertyValue('left'));
     if(leftBox1>150 &&(leftBox2>260 && leftBox2<300))
     {
        game_Over(1);
        scoreNum--;
        let h2=document.getElementById('h2');
        h2.innerHTML=`Score:${scoreNum}`;
         box3.style.animation="none";
         let gameOv=document.getElementById('gameOver');
         let totalScore=document.getElementById('totalscore');
         totalScore.innerHTML=`Your Score : ${scoreNum}`;
         gameOv.style.display="block";

     }
},10)
let gameOver=new Audio();
gameOver.src="My Video.mp3";
function game_Over(num1){
    gameOver.play();
}
let score=new Audio();
score.src="gameover.mp3";
function score1(num2){
    score.play();
}
