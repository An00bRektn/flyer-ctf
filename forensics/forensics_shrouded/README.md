# Shrouded

Analyst! We need your help. 
We observed someone on our internal user network connecting to a suspicious URL, quickly followed by suspicious outbound traffic. We've since contained the threat, and are in the process of remediation. While we have our hands full, can you figure out the following information, to lighten our workload?
- Domain the malware was hosted on
- C2 Framework used by threat actors
- The domain the sample calls back to

Please submit this information to us in the form: LUCTF{MD5_HASH}, where the hash is the output of `printf '%s' 'HOSTDOMAIN_C2-NAME_CALLBACKDOMAIN' | md5sum` (keep all names lowercase)

## Solution
Shrouded was a challenge that was cut from the final event because I thought it wasn't very good. After analyzing the packet capture, you should find a very, very large amount of base64, which is actually part of a malicious HTML page that automatically downloads an unknown file to the user that accesses it. When decoded, the file is an unobfuscated C2 beacon. After running strings on it, players should identify the following information:
- This is a golang binary
- It comes from the [sliver](https://github.com/BishopFox/sliver) framework
- The beacon was downloaded from `phantom.flyer`, but it calls back to `hackerman.local`

```shell
printf '%s' 'phantom.flyer_sliver_hackerman.local' | md5sum
```