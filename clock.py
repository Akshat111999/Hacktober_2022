# Author: MadhanDevlpr
from tkinter import *
from tkinter.ttk import *


from time import strftime

root = Tk()
root.title('Clock by Madhan')

def time():
    string = strftime('%H:%M:%S %p')
    label.config(text=string)
    label.after(1000,time)

label = Label(root, font=('ds_digital',80), background = 'black', foreground='white')
label.pack(anchor='center')
time()

mainloop()