# Gimme the Juice
> The challenge files come from the TryHackMe room [Juicy Details](https://tryhackme.com/room/juicydetails) and are not owned by me
Our favorite Juice Shop's web interface has been attacked, and confidential information has been stolen. We have some of the logs from the attack here, can you tell us what files were stolen?

Flag format: `LUCTF{HASH}` where the hash is the result of `printf '%s' 'FILE1_FILE2' | md5sum`

## Solution
Read the logs. Find files in the FTP logs. 