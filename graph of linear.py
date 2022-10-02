
# # importing the required module
# import matplotlib.pyplot as plt
  
# # x axis values
# x = [36,28,35,39,30,30,31,38,36,38,29,26]
# # corresponding y axis values
# y = [31,29,34,35,29,30,30,38,34,33,29,26]
  
# # plotting the points 
# plt.plot(x, y)
  
# # naming the x axis
# plt.xlabel('x - axis')
# # naming the y axis
# plt.ylabel('y - axis')
  
# # giving a title to my graph
# plt.title('My first graph!')
  
# # function to show the plot
# plt.show()

import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

x = 30 * np.random.random((20, 1))

y = 0.5 * x + 1.0 + np.random.normal(size=x.shape)

model = LinearRegression()
model.fit(x, y)

x_new = np.linspace(0, 30, 100)
y_new = model.predict(x_new[:, np.newaxis])
print("x")
print(x)
print("y")
print(y)

plt.figure(figsize=(4, 3))
ax = plt.axes()
ax.scatter(x, y)
ax.plot(x_new, y_new)

ax.set_xlabel('x')
ax.set_ylabel('y')

ax.axis('tight')

plt.show()