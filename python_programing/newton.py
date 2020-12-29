epsilon = 0.1
k = input('enter the number\n')
guess = k/2.0
while abs(guess*guess-k)>= epsilon:
    guess = guess -(((guess**2)-k)/2*guess)
print('square root of', k, ' =', guess)
