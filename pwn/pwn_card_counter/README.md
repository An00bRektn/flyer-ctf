# Card Counter
We suspect this casino is being run by a group that's laundering money. Our team has located what we think might be the boss' hideout, but we need to get past his security system discreetly. You think you could get one of the dealers to leak something?

## Solution
There was a format strings vulnerability after the dealer asked if there was anything else you had to say. Sending `%8$s` will return the secret string pushed onto the stack.