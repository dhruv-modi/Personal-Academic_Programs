import urllib.request

z0='B'
z1=170000
while(z1<=179999):
	try:

		while (z1<=179999):
			s=str(z1)
			url='http://www.gseb.org/522lacigam/sci/'+z0+'17/'+s[2:4]+'/'+z0+s+'.html'
#url='http://www.gseb.org/522lacigam/sci/B10/21/B102121.html'
			print(url)
			z1=z1+1
			page=urllib.request.urlopen(url)
	        
			t=str(page.read())
			q=t.split('Name')
			#print (t)
			b=q[1]
			q=b.split('</b>')

			b=q[1]
			q=b.split('</span>')
			w=q[0].split(' ')
			e=w[0]+w[1]+w[2]+s+'.html'
			f=open(e,'w')
			f.write(t)
			f.close()
	except:
		print ('UN')
