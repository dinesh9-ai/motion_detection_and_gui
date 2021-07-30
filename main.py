import serial
from gtts import gTTS
import os
import time
from pygame import mixer
from tkinter import *
def ton():
   a=serial.Serial('com5',9600)
   time.sleep(4)
   b=''
   for i in range(0,3):
      b=b+a.read().decode()
   f='warning '
   q='object detected at '
   q2=' inches'
   q=f+q+b+q2
   sd='warning'
   m1=Tk()
   m1.geometry('200x200')
   b1=Button(m1,text='EXIT',command=m1.destroy)
   v1=StringVar()
   b2=Button(m1,text='RESTART',command=ton)
   la=Label(m1,textvariable=v1,relief=RAISED)
   la.pack()
   mixer.init()
   print(q)
   b1.pack()
   b2.pack()
   mixer.music.load('rt.mp3')
   mixer.music.play()
   v1.set(q)
   a.close()
   m1.mainloop()
#time.sleep(3)
#e=gTTS(text=q,lang='en',slow=False)
#e.save('hi.'+'mp3')
#mixer.music.load('hi.mp3')
#mixer.music.play()
ton()
        
