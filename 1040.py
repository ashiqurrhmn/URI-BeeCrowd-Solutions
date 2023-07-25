a, b, c, d= map(float, input().split())
avg = float((a*2 + b*3 + c*4 + d)/10.0)
print(f"Media: {avg:0.1f}")
if avg>=7.0:
    print("Aluno aprovado.")
elif avg<5.0:
    print("Aluno reprovado.")
elif (5.0<=avg<=6.9):
    print("Aluno em exame.")
    e = float(input())
    print(f'Nota do exame: {e:0.1f}')
    avg2= float(avg + e)/2
    if avg2>=5.0:
        print('Aluno aprovado.')
    else:
        print("Aluno reprovado.")
    print(f"Media final: {avg2:.1f}")
