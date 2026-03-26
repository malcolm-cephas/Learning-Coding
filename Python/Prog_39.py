'''Aim: Print the current date in the following format: Sun May 29 02:26:23 IST 2022'''
import time; 
ltime = time.localtime();
print(time.strftime("%a %b %d %H:%M:%S %Z %Y",ltime));
