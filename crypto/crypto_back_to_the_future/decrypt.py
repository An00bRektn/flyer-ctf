#!/usr/bin/python3
import time
import json
import hashlib
from base64 import b64decode
from Crypto.Cipher import ChaCha20


current_time = int(time.time())
while True:
    try:
        b64 = json.loads('{"nonce": "6likzlDqRD4=", "ciphertext": "tWa9Swn5pmz1IQvURDWRXL55wjD7tjM6xE/privw+BvBifXw"}')
        nonce = b64decode(b64['nonce'])
        ciphertext = b64decode(b64['ciphertext'])
        key = hashlib.sha256(str(current_time).encode()).hexdigest()
        key = bytes.fromhex(key)
        cipher = ChaCha20.new(key=key, nonce=nonce)
        plaintext = cipher.decrypt(ciphertext)
        print("The message was " + plaintext.decode("utf-8"))
        break
    except (ValueError, KeyError):
        print("Incorrect decryption")
    current_time -= 1