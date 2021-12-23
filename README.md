# 13301_Tiledecoration

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/13301_Tiledecoration/blob/main/13301_pro.PNG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

From now on, I decided to write problem's name because it is hard to find it...

Let's write down the possilbe cases from the start

First perimeter of a rectangle : 4 (1*4)

Second perimeter of a rectangle : 6( 1 * 2 + 2 * 2)

Third perimeter of a rectangle : 10 (2 * 2 + 3 * 2)

Fourth perimeter of a rectangle : 16 (3 * 2 + 5 * 2)

We can see some patterns in it. We are keepin multiplying 2 to some value.

Also, we see that we are reusing some number. In the picture , we can see that the longest line of the previouse square becomes smallest line in the current square.

The longest line of current square is sum of longest line in (i-1) and (i-2).

We found the equation! We will save the longest line in the dp array.

When we found K's longest line, multiply 2 and (K-1) multiply 2 and sum of it will be the answer.

Don't forget to make dp[0] = 1 for smallest line of first square!

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

