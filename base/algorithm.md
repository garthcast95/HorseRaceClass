
MAIN
Goal: Simulate a horse race 
Input: Needs an integer seed value
Output: A presentation of a race outcome
Steps:
1) Take seed from user
2) Create Classes
3) Print the current positions of horses and lanes
4) Determine if the horses moved from the position
5) Loop through each horse
6) Toss a coin to determin if they move
7) Advance the horse
8) Print the lanes of the horse
9) See if a horse reaches 15th position 

printTrack(), coinFlip function, advanced()
printTrack ()
Goal: Print track
Output: Visual output of the track
Step:
1) For each horse
2) If  no horse, Print the period, else print horse #
3) winner()

coinFlip
I: the Random seed
O: A boolean value
Step:
1) Generate a random number rand 
2) mod2
3) If 1, call the advance ()

Advance Function
I: The horse #
O: Advance the horse 
Steps:
1) Increase the array of the position of the horse by 1