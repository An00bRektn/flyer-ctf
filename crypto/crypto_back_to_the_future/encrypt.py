#!/usr/bin/python3
import time
import json
import hashlib
from base64 import b64encode
from Crypto.Cipher import ChaCha20
from secret import MSG # This is an import which imports the flag locally, not a real Python package
                       # You can comment this out :)

seed = int(time.time())
plaintext = MSG
key = hashlib.sha256(str(seed).encode()).hexdigest()
key = bytes.fromhex(key)

cipher = ChaCha20.new(key=key)
ciphertext = cipher.encrypt(plaintext)

nonce = b64encode(cipher.nonce).decode('utf-8')
ct = b64encode(ciphertext).decode('utf-8')
result = json.dumps({'nonce':nonce, 'ciphertext':ct})

with open("message.enc", "w") as m:
    m.write(result)