a, sd = input().split()
sd = int(sd)
sh, sm, ss = map(int,input().split(":"))

a, ed = input().split()
ed = int(ed)
eh, em, es = map(int,input().split(":"))

d = ((ed*86400)+(eh*3600)+(em*60)+es)-((sd*86400)+(sh*3600)+(sm*60)+ss)
fd = int(d/86400)
fh = int((d%86400)/3600)
fm = int(((d%86400)%3600)/60)
fs = int((((d%86400)%3600)%60))

print(f"{fd} dia(s)")
print(f"{fh} hora(s)")
print(f"{fm} minuto(s)")
print(f"{fs} segundo(s)")

