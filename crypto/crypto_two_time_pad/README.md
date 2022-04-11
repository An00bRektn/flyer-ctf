# Two Time Pad

We've just intercepted comms between two 1337 hackers, and we need to expose their secret to bring them to justice. We have almost everything we need, just one problem, we can't decrypt the secret. I fell asleep during my encryption class when I was learning about this, and our lead cryptographer is off on vacation. Can you help us?

Notes:
- Set up IRC (or some equivalent) between two computers
- With Wireshark active, capture two messages transmitted with the same pad

### Cheatsheet
Solution: XOR ciphertexts together, XOR result of that with first message (order doesn't really matter, it's just how my brain worked through it)