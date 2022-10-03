function sendEmail(){
    var fname = document.getElementById("fname").value
    if(fname == ""){
        alert("Enter first name")
    }
    var lname = document.getElementById("lname").value
    if(lname == ""){
        alert("Enter last name")
    }
    var email = document.getElementById("email").value
    if(email == ""){
        alert("Enter your email")
    }

    // <a href="mailto:abishkpatil@gmail.com?subject=Web Development Enquiry&body=Hi,I found this website and thought you might like it http://www.geocities.com/wowhtml/">tell a friend</a>
    var fullName = fname + ' ' +lname;
    var phNum = document.getElementById("phoneNumber").value;
    var queryMsg = document.getElementById("message").value;

    var msgBody = "Name: " + fullName + '  ' + "Email: " + email + '  ' + "Phone Number: " + phNum + '  ' + "Query Message: " + queryMsg; 
    window.location.href = "mailto:sharmasahil2468@gmail.com?subject=Sharma Academy Query&body=" + msgBody;
};