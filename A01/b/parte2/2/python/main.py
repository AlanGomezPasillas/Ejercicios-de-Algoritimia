calif = int(input("Ingresa una calificación: "))
print ("Calificación ingresada {}".format(calif))

if calif < 60:
	print("¡Eres un desastre!")
elif calif < 70:
	print("Apenas la libraste")
elif calif < 80:
	print("Van por buen camino")
elif calif < 90:
	print("¡Me impresionas!")
elif calif <=99:
	print("Casi alcanzas la divinidad")
elif calif == 100:
	print("¡Eres un Dios!")
else:
	print("Número fuera de rango")

