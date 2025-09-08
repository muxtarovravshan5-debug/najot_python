def almash(soz:str):
    oxiri=(soz[::-1])
    bosh=(soz[:2:1])
    orta=(soz[:-2:1])
    a = str(oxiri+orta+bosh)
    return a

natija = almash("salom")
print(natija)