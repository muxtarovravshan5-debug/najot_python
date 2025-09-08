i=int(input("Haroratni kiriting: "))

while True:
    b=input(" ")
    if b=="exit":
        break
    natija=i=C*(9/5)+32
    if i<=32:
        print(f"{i}-Muzlash")
    elif i>=85:
        print(f"{i}-Issiq")
    elif i>35 and i<85:
        print(f"{i}-yaxshi kun")
    else:
        print("Bunday xarorat yoq") 
print(f"{natija}")