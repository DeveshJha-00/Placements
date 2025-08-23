sentence = input().strip()
word = input().strip()

sentence_lower = sentence.lower()
word_lower = word.lower()

count = 0
start = 0

while start <= len(sentence_lower) - len(word_lower):
    if sentence_lower[start:start + len(word_lower)] == word_lower:
        count += 1
    start += 1

print(count)