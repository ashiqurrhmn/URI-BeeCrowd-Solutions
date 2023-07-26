n = float(input())
if(n<=2000.00):
    print("Isento")
elif(n>=2000.01 and n<=3000.00):
    t=(n-2000)*0.08
    print(f"R$ {t:0.2f}")
elif(n>=3000.01 and n<=4500.00):
    t= (n-3000)*0.18 + 1000*0.08
    print(f"R$ {t:0.2f}")
elif(n>4500.00):
    t= (n-4500)*0.28 + 1500*0.18 + 1000*0.08
    print(f"R$ {t:0.2f}")
