sh, sm, eh, em= map(int, input().split())
start= sh*60 + sm
end = eh*60 + em
duration = end - start
if duration<=0:
    duration=24*60+duration
print(f"O JOGO DUROU {int(duration/60)} HORA(S) E {duration%60} MINUTO(S)")