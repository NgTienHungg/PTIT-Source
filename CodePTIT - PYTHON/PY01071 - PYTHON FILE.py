s = input().lower()
print('yes' if len(s) >= 3 and s[-3:] == '.py' else 'no')
