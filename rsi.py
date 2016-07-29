import numpy as np
import talib
a = np.array([1,-1,1,-1,1,-1],dtype='float')
rsi = talib.RSI(a, timeperiod=3)
print("rsi",rsi)
