a=int(input("1-mahsulot narxi: "))
b=int(input("2-mahsulot narxi: "))
c=int(input("3-mahsulot narxi: "))
if a+b+c>=100:
    narx=a+b+c//100
    narx*90
    print(f"""{a+b+c}-jami narx
    {narx}-chegirmada""")
elif a+b+c>=200:
    narx=a+b+c//100
    narx*85
    print(f"""{a+b+c}-jami narx
    {narx}-chegirmada""")
elif a+b+c>=500:
    narx=a+b+c//100
    narx*80
    print(f"""{a+b+c}-jami narx
    {narx}-chegirmada""")