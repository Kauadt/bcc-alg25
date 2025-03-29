
A = 5.0
B = 6.0
C = 7.0

if ((A > 10 or B > 10 or C > 10) & (A < 0 or B < 0 or C < 0)):
    print("As notas A, B e C não podem ser maior que 10")
else:
    media = ((A * 2) + (B * 3) + (C * 5)) / 10
    print("MEDIA = {:.1f}\n".format(media))



