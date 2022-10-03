import pyttsx3
import speech_recognition as sr
import datetime
import os
import cv2
import wikipedia
import webbrowser
import sys


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)



#texttospeak

def speak(audio):
    engine.say(audio)
    engine.setProperty("rate", 170)
    print(audio)
    engine.runAndWait()


def takecommand():
    r= sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source, timeout=50, phrase_time_limit=5)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"user said: {query}")

    except Exception as e:
        speak("Say that again please...")
        return "none"
    return query


def wish():
    hour = int(datetime.datetime.now().hour)

    if hour >= 0 and hour <= 12:
        speak("Good Morning")
    elif hour > 12 and hour < 18:
        speak("Good Afternoon")
    else:
        speak("Good Evening")
    speak("I am your Mia Khalifa please tell me how can i help you  ")




if __name__ == "__main__":
    wish()
    while True:

        query = takecommand().lower()




#opening basic application


        if "open notepad" in query:
            npath = "C:\\Windows\\System32\\notepad.exe"
            os.startfile(npath)
            speak("opening notepad")

        elif "open command prompt" in query:
            os.system("Start cmd")
            speak("opening command prompt")

        elif "open camera" in query:
             speak("opening camera")
             cap = cv2.VideoCapture(0)
             while True:
                 ret, frame = cap.read()

                 cv2.imshow('frame', frame)
                 if cv2.waitKey(1) & 0xFF == ord('q'):
                     break


             cap.release()
             cv2.destroyAllWindows()




#help


        elif "help" in query:
             speak("i can be very useful to use")
             speak(" just say whatever you want me to search on google")




#answer questions


        elif 'how are you' in query:
             speak("I am fine, Thank you")
             speak("How are you, Sir")


 
        elif 'fine' in query or "good" in query:
            speak("It's good to know that your fine")

        

        elif "what's your name" in query or "What is your name" in query:
            speak("My friends call me by any name, but i am a friendly Virtual Assistant")
            


        elif "who made you" in query or "who created you" in query:
            speak("I have been created by Humans.")

        


    

#open apps websites


        elif "open youtube" in query:
            speak("opening youtube")
            webbrowser.open("www.youtube.com")

        elif "open github" in query:
            speak("opening github")
            webbrowser.open("https://github.com/punyakrit")
 

        elif "wikipedia" in query:
            speak("Searching Wikipedia...")
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query,sentences=2)
            speak("according to wikipedia")
            speak(results)
            print(results)




#open any website by their complete url or search the web browser and displays the result on opening of new browser


        elif "open google" in query:
            speak("what should i search for you")
            cm= takecommand().lower()
            webbrowser.open(f"{cm}")
            speak("opening ")
            speak(cm)



#stopping the program


        elif "shutdown" in query:
            speak("Have a good day, Sir")
            sys.exit()


        else:
            speak("sorry i dont understand")