# chua co gi
plt.rcParams["figure.figsize"] = [8, 5]
plt.rcParams["figure.autolayout"] = True
fig, ax = plt.subplots()

df_chart['gross income'].plot(kind='bar', color='#DF9496')
df_chart['Rating'].plot(secondary_y = True, marker='*', color='#727B84')

plt.show()

# demo sau cài win lên git