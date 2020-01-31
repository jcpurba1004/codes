from tkinter import*
import tkinter.messagebox

class numOnly:

    de__init(self, root):
        self.root = root
        self.root.title("Entry Widget Validation")
        self.root.geometry("476x350+300+200")
        self.root.configure(bg = "#c0ded9")
#=============================================================Frame========================================================
        Mainframe = Frame(Mainframe,bd=10,width=100,relief=RIDGE)
        Tops.pack(side=TOP)

        self.lblInfo = label (Tops, front=('Helvetica', 31,'bold'),text="Validate Entry Widget", justify=CENTER,bg = "#c0ded9")
        self.lblInfo.grid ( padx=2)

        MembersName_F = Frame(Mainframe,bd=10,width=466,height=200,
                    font=('Helvetica',12, 'bold'),text = 'Customer Name',relief=RIDGE)
        MembersName_F.pack(side=TOP)

        Receipt_ButtonFrame = Frame(Mainframe,bd=10,width=466,height=80,
                                    font=('Helvetica',12, 'bold'),text = 'Details',relief=RIDGE)
        Receipt_ButtonFrame.pack(side=BOTTOM)
#=============================================================Variable===========================================================
        NumOne = StringVar()
        NumTwo = StringVar()
        Answer = StringVar()

#=============================================================Label & Entry=======================================================
        self.lblNumOne = Label(MembersName_F,font=('Helvetica', 16, 'bold'), text="Number One", bd=7)
        self.lblNumOne.grid(row=0,column=0, sticky=W)
        self.lblNumOne  = Entry(MembersName_F,font=('Helvetica', 13, 'bold'), bd=7, textvariable=NumOne,
                               width=31)
        self.txtNumOne.grid(row=0,column=1)

        self.lblNumTwo = Label(MembersName_F,font=('Helvetica', 16, 'bold'), text="Number One", bd=7)
        self.lblNumTwo.grid(row=1,column=0, sticky=W)
        self.lblNumTwo  = Entry(MembersName_F,font=('Helvetica', 13, 'bold'), bd=7, textvariable=NumOne,
                               width=31)
        self.txtNumTwo.grid(row=1,column=1)

        self.lblAnswer = Label(MembersName_F,font=('Helvetica', 16, 'bold'), text="Number One", bd=7)
        self.lblAnswer.grid(row=2,column=0, sticky=W)
        self.txtAnswer  = Entry(MembersName_F,font=('Helvetica', 13, 'bold'), bd=7, width=31,textvariable=Answer, state= DISABLED)
        self.txtNumOne.grid(row=2,column=1)
#==========================================================================================================================

def Reset():
    NumOne.set("")
    NumTwo.set("")
    Answer.set("")
    return

def iExit():
    iExit = tkinter.messagebox.askyesno("Validate Entry Widget","Confirm if you want to exit")
    if iExit > 0:
        root.destroy()
        return

    def numberOnly():
    Item1 = (NumOne.get())
    Item2 = (NumTwo.get())
    if (Item1.isdigit() or Item2.isdigit()):
        Item3 = int(Item1) + int(Item2)
        Answer.set(Item3)
        tkinter.messagebox.showinfo("Correct Data","Well done bro")
        return True
    else:
        tkinter.messagebox.showwarning("Wrong Data","Invalid data, Number only bruv")
        NumOne.set("")
        NumTwo.set("")
        Answer.set("")
        return False



    
#============================================================Buttons==============================================================

    
        self.btnValidate=Button(Receipt_ButtonFrame,padx=10, bd=7,font=('Helvetica', 16, 'bold'), width=7,command = numberOnly,
                text="Validate",bg = "c0ded9").grid(row=2, column=0, pady=12)
                
        self.btnReset=Button(Receipt_ButtonFrame,padx=18, bd=7,font='Helvetica', 16, 'bold'), width=7,
                text="Reset",bg = "c0ded9").grid(row=2, column=0, pady=12)

        self.btnExit=Button(Receipt_ButtonFrame,padx=18, bd=7,font='Helvetica', 16, 'bold'), width=7,
                text="Exit",bg = "c0ded9").grid(row=2, column=3, pady=12)

if __name__ =='__main__':
    root = 7k()
    application = numOnly (root)
    root.mainloop()
