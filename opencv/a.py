import cv2

im=cv2.imread('kirbo.jpg',0) .*"description".*\r?\nel 0 hace que se vea en escala de grises
print(im.shape) .*"description".*\r?\nimprime la resolucion de la imagen principal (357, 507)

im2=cv2.resize(im, (300,300))
'''Creamos una nueva imagen para almacenar la misma imagen pero en otra resolucion'''
print(im2.shape)

cv2.imshow('imagen',im2) .*"description".*\r?\nmostramos imagen
cv2.waitKey(0) .*"description".*\r?\nEspera a que el usuario presione una tecla (0=cualquier tecla) o una x cantidad de tiempo en milisegundos