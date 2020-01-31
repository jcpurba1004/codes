"""
File: calculator.py
Project 1.3
A GUI-based calculator.
Name: Jeremiah Purba
Course: CISC 179 Python Programming
01/29/2020 

Add 2 integer input number and put the results to text
It has 3 button: add, clear and quit
Add: will add 2 integer input number
clear: will clear the input boxes and output text to blank or set them to zero
quit: will close the window when it exit.
"""
from tkinter import *
import tkinter.messagebox

class Calculator:
    def __init__(self, root):
        self.root = root
        self.root.configure(bg="#c0ded9")

        #===================================== Frame Entry =====================================#

        Mainframe = Frame(self.root,bd=1)
        Mainframe.grid()

        MembersName_F = LabelFrame(Mainframe,width=400, height=200)
        MembersName_F.pack(side=TOP)

        Receipt_ButtonFrame = LabelFrame(Mainframe,width=400, height=200)
        Receipt_ButtonFrame.pack(side=BOTTOM)

        #===================================== Variables =====================================#

        NumOne = StringVar()
        NumTwo = StringVar()
        Answer = StringVar()

        #===================================== Label & Entry =====================================#
        self.txtNumOne = Entry(MembersName_F,font=('Helvetica', 12,'bold'),
                               bd=7, textvariable=NumOne, width=10)
        self.txtNumOne.grid(row=0,column=0)

        self.lblNumTwo = Label(MembersName_F,font=('Helvetica', 12,'bold'),
                               text="+", bd=7)
        self.lblNumTwo.grid(row=0,column=1, sticky=W)
        self.txtNumTwo = Entry(MembersName_F,font=('Helvetica', 12,'bold'),
                               bd=7, textvariable=NumTwo, width=10)
        self.txtNumTwo.grid(row=0,column=2)
        
        self.lblNumTwo = Label(MembersName_F,font=('Helvetica', 12,'bold'),
                               text="=", bd=7)
        self.lblNumTwo.grid(row=0,column=3, sticky=W)

        self.txtAnswer = Label(MembersName_F,font=('Helvetica', 12,'bold'),
                               bd=7, justify=LEFT, textvariable=Answer, width=30)
        self.txtAnswer.grid(row=0,column=4)

        #===================================== Functions Entry =====================================#

        def Reset():
            NumOne.set("")
            NumTwo.set("")
            Answer.set("")
            return

        def iExit():
            root.destroy()
            return

        def numberOnly():
            Item1 = (NumOne.get())
            Item2 = (NumTwo.get())
            if (Item1.isdigit() and Item2.isdigit()):
                Item3 = int(Item1) + int(Item2)
                Answer.set(str(Item3))
                return True
            else:
                Answer.set("Please type integer on both input ")
                return False

        #===================================== Button Entry =====================================#

        self.btnValidate=Button(Receipt_ButtonFrame,padx=10, bd=5,
                                font=('Helvetica', 12,'bold'), width=3, text="Add",
                                command=numberOnly, bg = "#c0ded9").grid(row=2, column=0, pady=8)
        self.btnReset=Button(Receipt_ButtonFrame,padx=10, bd=5,
                                font=('Helvetica', 12,'bold'), width=3, text="Clear",
                                command=Reset, bg = "#c0ded9").grid(row=2, column=1, pady=8)
        self.btnExit=Button(Receipt_ButtonFrame,padx=10, bd=5,
                                font=('Helvetica', 12,'bold'), width=3, text="Quit",
                                command=iExit, bg = "#c0ded9").grid(row=2, column=2, pady=8)

def main():
    root = Tk()
    application = Calculator(root)
    root.mainloop()

if __name__ =='__main__':
    main()
