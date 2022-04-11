# baby injection
> This was reused from the HTB Cyber Santa 2021 CTF: [link](https://ctftime.org/task/18289)

## Solution
This was a simple SQL injection for auth bypass. A review of the source code shows that the login page's SQL query isn't sanitized, and the user that can view the flag is admin. The simplest payload that would work is `admin'-- -` with an arbitrary password.