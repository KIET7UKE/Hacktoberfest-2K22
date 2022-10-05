let x=window.matchMedia(("max-width:700px"));
if(x.matches){
let box1=document.getElementById('box1');
let box3=document.getElementById('box3');
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
function myFunction(x){
    if(x.matches){
    let leftBox1=parseInt(window.getComputedStyle(box1,null).getPropertyValue('top'));
    let leftBox2=parseInt(window.getComputedStyle(box3,null).getPropertyValue('left'));
    if(leftBox1>70 &&(leftBox2>15 && leftBox2<30))
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
}
}
}

myFunction(x);
x.addEventListener(myFunction);