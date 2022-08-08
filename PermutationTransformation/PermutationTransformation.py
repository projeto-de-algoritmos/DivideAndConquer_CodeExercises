def build(v,count):
  if(v==[]):
    return 
  maxi=0
  
  for ind,val in enumerate(v):
    if(v[ind]>v[maxi]):
      maxi=ind
  
  resp[v[maxi]]=count

  build(v[0:maxi],count+1)
  build(v[maxi+1:],count+1)

e=int(input())

while e:
  e-=1
  n = int(input())

  resp = [0]*(n+1)
  lista = input()
  lista = list(map(int, lista.split()))
  build(lista,0)

  for i in range(0,n):
      print(resp[lista[i]], end = " ")
  print()