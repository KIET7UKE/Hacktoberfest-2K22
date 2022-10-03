const addNote=document.getElementById('addNote');
const noteArr=[];
const textArr=[];
const store=JSON.parse(localStorage.getItem('notes'));
console.log(store);

if(store==null ){
    console.log('removed hide class');
    document.getElementById('desc').classList.remove("hide");
}
else if(store!=null && store.length===0){
        document.getElementById('desc').classList.remove("hide");
    
}

else if(store!=null ){
    
    
    document.getElementById('desc').className='hide';
    store.forEach((e)=>{
        let element=document.createElement('div');
        element.className='note';
        element.id=`${noteArr.length+1}`;
        let elementHead=document.createElement('div');
        let textNode=document.createTextNode(`Note: ${noteArr.length+1}`);
        let h2=document.createElement('h2');
        h2.id=`head${noteArr.length+1}`
        h2.appendChild(textNode);
        elementHead.appendChild(h2);
        elementHead.className='noteHead';
        let elementBody=document.createElement('div');
        textNode=document.createTextNode(e);
        let p=document.createElement('p');
        p.appendChild(textNode);
        elementBody.appendChild(p);
        // elementBody.innerText=String(value);
        elementBody.className='noteBody';
        
        
        let button=document.createElement('button');
        button.setAttribute('type','button');
        button.className='button';
        button.classList.add('dltBtn');
        button.innerText='Delete note';
        button.id=`delBtn${noteArr.length+1}`;
        temp=button.id;
        
        button.setAttribute('onclick',`func(${noteArr.length+1})`);
        // console.log(button.id);
        
        
        
        // console.log(elementBody);
        element.appendChild(elementHead);
        element.appendChild(elementBody);
        element.appendChild(button);
        
        // document.getElementById('notesContainer').appendChild(element);
        noteArr.push(element);
        document.getElementById('notesContainer').appendChild(element);
        console.log(e);
        textArr.push(e);
    })
}

// console.log(addNote);
let count=0;
addNote.addEventListener('click',()=>{
    // localStorage.setItem(`key${count+1}`,value);
    
    let value=String(document.getElementById('noteInput').value);
    textArr.push(value);
    if(value.length>0){
        count++;
        if(count>0){
            document.getElementById('desc').className='hide';
        }
        
        document.getElementById('noteInput').value='';
        // console.log(typeof(value));
        let element=document.createElement('div');
        element.className='note';
        element.id=`${noteArr.length+1}`;
        let elementHead=document.createElement('div');
        let textNode=document.createTextNode(`Note: ${noteArr.length+1}`);
        let h2=document.createElement('h2');
        h2.id=`head${noteArr.length+1}`
        h2.appendChild(textNode);
        elementHead.appendChild(h2);
        elementHead.className='noteHead';
        let elementBody=document.createElement('div');
        textNode=document.createTextNode(value);
        let p=document.createElement('p');
        p.appendChild(textNode);
        elementBody.appendChild(p);
        // elementBody.innerText=String(value);
        elementBody.className='noteBody';
        
        
        let button=document.createElement('button');
        button.setAttribute('type','button');
        button.className='button';
        button.classList.add('dltBtn');
        button.innerText='Delete note';
        button.id=`delBtn${noteArr.length+1}`;
        temp=button.id;
        
        button.setAttribute('onclick',`func(${noteArr.length+1})`);
        // console.log(button.id);
        
        
        
        // console.log(elementBody);
        element.appendChild(elementHead);
        element.appendChild(elementBody);
        element.appendChild(button);
        
        // document.getElementById('notesContainer').appendChild(element);
        noteArr.push(element);
        // document.getElementById('notesContainer').appendChild(noteArr[0]);
       
        localStorage.setItem('notes',JSON.stringify(textArr));
        document.getElementById('notesContainer').appendChild(element);
        
    }
});

//id u want to submit on pressing enter

/* document.getElementById('noteInput').addEventListener('keyup',(e)=>{
    e.preventDefault();
    if(e.keyCode===13){
        addNote.click();
    }
}) */



// const delNoteArr=Array.from(document.getElementsByClassName('dltBtn'));
// console.log(delNoteArr);

function func(id){
    // const s='delBtn'+id;
    // let tempCount=0;
    // console.log(String(id));
    // document.getElementById('notesContainer').removeChild(getElementById(String(id)));
    
    let element=document.getElementById(String(id));
    
    document.getElementById('notesContainer').removeChild(element);
    let temp=-1;
    
    noteArr.forEach((e,i)=>{
        if(e===element){
            temp=i;
            
            
        }
        if(i>temp && temp!=-1 ){
            
            element=document.getElementById(`head${i+1}`);
            element.id=`head${i}`;
            element.innerText=`Note:${i}`
            element=document.getElementById(`${i+1}`);
            element.id=`${i}`;
            let button=document.getElementById(`delBtn${i+1}`)
            button.id=`delBtn${i}`;
            button.setAttribute('onclick',`func(${i})`);
        }
    });
    if(temp>-1){
        noteArr.splice(temp,1);
        textArr.splice(temp,1);
    }
    
    localStorage.setItem('notes',JSON.stringify(textArr));
    if(noteArr.length===0){
        document.getElementById('desc').classList.remove("hide");
    }
    // document.getElementById(`head${noteArr.length}`).innerHTML=`Note:${noteArr.length}`;
    
};

let element=document.createElement('h2');
element.innerText="No note found with such text";
element.id="notFound";
element.classList.add('hide');
notesContainer.appendChild(element);

const searchNote=document.getElementById('searchText');
searchNote.addEventListener('input',()=>{
    const notesContainer=document.getElementById('notesContainer');
    const value=searchNote.value;
    //    if(value.length>0){ noteArr.forEach((e,i)=>{   
        //        notesContainer.removeChild((document.getElementById(`${i+1}`)));
        //     });}
        // console.log(searchNote.value,value.length);
        if(value.length===0){
            noteArr.forEach((e)=>{
                // document.getElementById('notesContainer').appendChild(e);
                e.classList.remove('hide');
            });
            // notesContainer.removeChild(document.getElementById("notFound"));
            element.classList.add('hide');
        }
        else{
            const newArr=noteArr.filter((e)=>
            // console.log((typeof(e.childNodes[1].childNodes[0].innerText)));
            e.childNodes[1].childNodes[0].innerText.toLowerCase().includes(value.toLowerCase())
            
            );
            if(newArr.length===0){
                // console.log(notesContainer.childNodes); 
                noteArr.forEach((e)=>{   
                    // notesContainer.removeChild(e);
                    e.classList.add('hide');
                });
                // console.log(notesContainer.childNodes);
                element.classList.remove('hide');
                
            }
            if(newArr.length>0){
                element.classList.add('hide');
                console.log(newArr);
                noteArr.forEach((e)=>{   
                    // notesContainer.removeChild((e));
                    e.classList.add('hide');
                });
                newArr.forEach((e)=>{
                    // document.getElementById('notesContainer').appendChild(e);
                    e.classList.remove('hide');
                });
                // notesContainer.removeChild(document.getElementById("notFound"));
            }
        };
        
    });
    
    
    
    
    
    
    