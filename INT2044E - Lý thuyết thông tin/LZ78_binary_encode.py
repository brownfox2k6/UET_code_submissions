'''
Lempel-Ziv 78 encoding algorithm for binary sequence.
Input: A binary sequence
Output: The dictionary, encoding steps and the encoded sequence
'''

import pandas, tabulate

def get_colored_concat(*args):
  out = []
  for i, arg in enumerate(args):
    out.append(('\033[93m' if i % 2 else '\033[96m') + arg)
  return ''.join(out) + '\033[0m'


s = input('Enter binary string: ')
for c in s:
  if c not in '01':
    exit(print('This is not a binary string!'))

last_index = 0
dictionary = {'': 0}
table_rows = [[0, '0', '∅', '']]
original = []
word = ''
for i, c in enumerate(s):
  if i != len(s) - 1 and word + c in dictionary:
    word += c
  else:
    # Get encoded word
    index_width = len(bin(last_index)[2:])
    index_binary = bin(dictionary[word])[2:].rjust(index_width, '0')
    table_rows[-1][-1] = get_colored_concat(index_binary, c)
    # Add new word to dictionary
    word += c
    last_index += 1
    index_binary = bin(last_index)[2:]
    if word not in dictionary:
      table_rows.append([last_index, index_binary, word, ''])
      dictionary[word] = last_index
    original.append(word)
    word = ''

df = pandas.DataFrame(
  data=table_rows,
  columns=['Index (dec)', 'Index (bin)', 'Word', 'Encode']
)
print(df.to_markdown(index=False))
print('Original sequence:', get_colored_concat(*original))
print('Encoded sequence:', ''.join(r[-1] for r in table_rows))