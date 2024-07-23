import tkinter as tk

def on_button_click():
    label.config(text="Halo, Tkinter!")

root = tk.Tk()
root.title("GUI Sederhana")

label = tk.Label(root, text="Selamat datang!")
label.pack()

button = tk.Button(root, text="Klik Saya", command=on_button_click)
button.pack()

root.mainloop()
