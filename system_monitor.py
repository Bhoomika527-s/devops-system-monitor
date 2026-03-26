import os
import platform
import  socket
from  datetime import  datetime

print("---SYSTEM INFO---")
now=datetime.now()
print("date &time:",now.strftime("%Y-%m-%d %H:%M:%S"))
print("hostname:",socket.gethostname())
print("python version:",platform.python_version())
user = os.getenv("USER") or os.getenv("USERNAME")
print("current user:",user)
files=os.listdir(".")
print("\nfiles in directory:")
for file in  files:
 print("-",file)
print("\ntotal files:",len(files))
name=input("\n enter your name:")
print("hello ! welcome to the system monitoring tool")

