import pandas as pd
import numpy as np

df = pd.read_csv("bill_authentication.csv")
print(df.head())
x = df.drop('Class', axis=1)
y = df['Class']


from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.3, random_state = 1)

from sklearn import tree
from sklearn import metrics

d_tree = tree.DecisionTreeClassifier()
d_tree.fit(x_train, y_train)
y_pred = d_tree.predict(x_test)

print("accuracy: ",metrics.accuracy_score(y_test, y_pred)*100,"%")
tree.plot_tree(d_tree)

from sklearn.metrics import classification_report, confusion_matrix
print(confusion_matrix(y_test, y_pred))
print(classification_report(y_test, y_pred))