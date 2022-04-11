# git gud

Hi, this is Matt from the software team. I was emailing to ask you about a potential "insider attack" from an intern? We let them refactor some code for our webserver, but we think they put in a backdoor. We've since removed the file from our repository, but we were wondering if you could check it out to make sure nothing more was left behind?

Thanks

## Solution
Either roll back commits or use [GitTools](https://github.com/internetwache/GitTools) to get the source code from when a backdoor was installed in the webapp. A base64 encoded string contains the flag.