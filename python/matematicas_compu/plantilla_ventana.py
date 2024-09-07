import PySimpleGUI as sg
import numpy as np
from numpy.linalg import *
import matplotlib.pyplot as plt

def captura_datos():
    lbl = sg.Text("No. Habitaciones: ")
    inp = sg.Input("", key = "inp_habitacion")
    lbl1 = sg.Text("Consumo energía: ")
    inp1 = sg.Input("", key = "inp_energia")

    btn = sg.Button("Captura", key= "btn_captura")
    btn1 = sg.Button("Regresion", key= "btn_regresion")
    layout=[[lbl, inp], [lbl1, inp1],[btn, btn1],]
    ventana = sg.Frame("Datos", layout, key="ventanita")
    return ventana 

data = captura_datos()
layout=[[data]]

window=sg.Window(" ",layout,size=(400,400),resizable=True,grab_anywhere=True)
h=[]
ce = []
while True:
    event, values=window.read()
    if event==sg.WIN_CLOSED:
        break
    if event == "btn_captura":
        h.append(float(values["inp_habitacion"]))
        ce.append(float(values["inp_energia"]))
        print(h)
        print(ce)
    if event == "btn_regresion":
        Yvector = np.array(ce)
        print(Yvector)
        B= np.reshape(Yvector, (-1,1))
        print(B)
        v= np.ones(len(ce))
        print(v)
        At = np.vstack((v,h))
        print(At)
        A= np.transpose(At)
        print(A)
        R= np.dot (np.linalg.inv(np.dot(At,A)), np.dot(At, B))
        print(R)
        puntos=np.dot(A,R)
        plt.scatter(h,Yvector)
        plt.plot(h,puntos)
        plt.xlabel("Habitaciones")
        plt.ylabel("Consumo de energía")
        plt.title("Regresion lineal")
        plt.show()

window.close()
    
