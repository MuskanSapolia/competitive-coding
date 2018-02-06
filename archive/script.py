import urllib
from bs4 import BeautifulSoup
html_ptr = urllib.urlopen("http://www.spoj.com/problems/classical/") 
html = html_ptr.read()
print html

soup = BeautifulSoup(html, 'html.parser')
table = soup.find('table' , attrs = {'class' : 'problems'})
problems_list = table.find('tbody').findAll('tr')
print problems_list
