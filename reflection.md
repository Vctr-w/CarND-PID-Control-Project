# Effects of P, I, D

I used the PID algorithm described in the lecture notes. 

## P

The P controller is a correction factor that is proportional to an error value (in this case cte). As seen in the lecture notes, the P component by itself presented a reasonable effort at autonomously steering the car however had issues stabilising to changing equilbrium. This was particularly evident in curves in the road where the ideal steering angle changes. Perhaps at lower speeds, the P itself is enough where the margin of allowable error is high.

## D

The D controller is a correction factor that is based on the derivative term. Implementation of the D component definitely helped the algorithm to stabilise to the equilibrium. This was the result described in the lecture notes. 

## I

The I controller is a correction factor that is based on the integral of error values. The I component also performed similarly to what was described in the lecture notes. The vehicle overshot the equilbrium a lot more drastically initially (strayed very far from the middle of the road), but after the initial overshoot, performed slightly better than PD. 

# Tuning hyperparameters

Manual tuning was done to come to the final hyperparameter coefficients. It was noted that the initial overshoot with the I component was too much and so the I hyperparameter was set to 0. 