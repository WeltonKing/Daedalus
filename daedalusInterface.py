import tkinter as tk



class DaedalusInterface:

    def __init__ (self, root):

        self.frames = {}
        self.labels = {}
        self.buttons = {}
        
        root.title('Daedalus')
        root.geometry('400x600')
        root.pack_propagate(0)
        root.resizable(0, 0)
        self.root = root

        frame = tk.Frame(master=root, bg='#fafafb')
        frame.pack(fill=tk.BOTH, expand=1)
        self.frames['main'] = frame

        label = tk.Label(master=self.frames['main'], text='Welcome to Daedalus!')
        label.pack()
        self.labels['welcome'] = label

        label = tk.Label(master=self.frames['main'], text='Open Source Maze Builder led by Mason McCullum and Welton King')
        label.pack()
        self.labels['description'] = label

    def startapp (self):
        self.root.mainloop()



def StartDaedalus ():
    root = tk.Tk()
    app = DaedalusInterface(root)
    app.startapp()
    return app



def main ():
    print('Starting Daedalus...')
    app = StartDaedalus()
    print('Daedalus Closed')



main()
