# Hash Cracker

## Hash Cracker 1
Who needs "secure password standards" when we have hashes? Tell me I'm wrong and tell me my password if the SHA256 hash is: c54c27dd2503a9d9aebe8d6542425aad8313c1b55dc3b5b43ffb6c49562c6f34
Flag format is: `LUCTF{password}`

FLAG: LUCTF{superadministrator}

### Solution
Use [crackstation](https://crackstation.net/) or john the ripper or hashcat.

## Hash Cracker 2
Alright, alright I learned my lesson. But you know what I like with my hashbrowns? Some salt. Tell me my password this time.
```
$6$🧂kekw$eW86kyp2iV.PXepQyPbVJcX45xmgkfKmLzNeotYQ6vn6g7rx792bDQhX5C.yHrJCXJ4fW.mYWIcQEliKimOLR1
```
Flag format is: `LUCTF{password}`

FLAG: LUCTF{firecracker}

### Solution
This isn't much different from the previous one, the salt emoji was just for fun. Use john or hashcat.

## Hash Cracker 3
Ok. So now I actually learned my lesson. But since you're so good at hash cracking, could you get me the password of the `sreisz` user from this Windows machine? I have the SYSTEM and SAM hives, but I don't really know what to do with them...
Flag format is: `LUCTF{password}`

### Solution
The intended solution here was to use [`impacket`](https://github.com/SecureAuthCorp/impacket), a series of Python classes/programs to help Linux machines speak Windows, for lack of better words. **I recommend using a virtual environment (venv/virtualenv) or Docker or [pimpmykali](https://github.com/Dewalt-arch/pimpmykali/blob/master/pimpmykali.sh) to install it so it doesn't much up your current environment.**

```shell
secretsdump.py -sam sam.bak -system system.bak LOCAL
```
