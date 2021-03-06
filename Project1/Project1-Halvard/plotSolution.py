import numpy as np
import matplotlib.pyplot as plt


u = np.loadtxt("luDecomp1.txt")
#error = np.fromfile("logerror.bin")
#LUNum = np.loadtxt("num.txt")
#print LUNum.size

x = np.linspace(0,1,u.size)
x_exact = np.linspace(0,1,u.size)
print x.size, u.size

#log_h = np.fromfile("logh.bin")

exact = 1 - (1-np.exp(-10))*x - np.exp(-10*x)


#plt.plot(x,LUNum)
plt.plot(x,u)
plt.plot(x,exact,"r--")
#plt.legend(["LU","Numerical", "Exact"])
plt.legend(["Numerical", "Exact"])


plt.show()

plt.xlabel("$log_{10}(h)$")
plt.ylabel("$log_{10}(error)$")
plt.plot(log_h,error)
plt.show()
