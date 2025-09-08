dct = {
    "a":10,
    'a2':21
}
dct2 = {
    'b':14,
    'b2':34
}
dct3 = {
    'c':23,
    'c2':11
}
newdct = {}

for i in dct:
    newdct.copy(i)
for x in dct2:
    newdct.copy(x)
for c in dct3:
    newdct.copy(c)

print(newdct)