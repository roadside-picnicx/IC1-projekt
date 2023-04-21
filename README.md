# IC1-projekt
## Description
This is a repository for project from BPC-IC1. Goal of this project was to create 3 exploits. It can be vulnerable application or simply misconfigurations on host OS or weak passwords. I only uploaded the simple application and quick exploit here. Other 2 exploits were cracking passwords with John the ripper and privilege escalation with poorly configured sudo awk. User who has privilege to sudo awk can exploit it to get access to root. I won't be explaining how to do that here, simple google search will be more effective. Cracking passwords with John the ripper is pretty self-explanatory as well. We used dictionary attack (rockyou.txt). For the last part, our application is simple login that verifies correct password ("ic1_projekt"). If you insert wrong password, you will get kicked out. To bypass that, simply use exploit.py and you should be able to get that flag.
## Sudo misconfiguration
This is done by root:
 ```shell
$ sudo bash -c 'echo "user_name ALL=(root) /usr/bin/awk" > /etc/sudoers.d/user_name'
```
and then the user can do this to gain access to root
 ```shell
$ sudo awk 'BEGIN {system("/bin/sh")}'
```
## Contents of this repo
- **db.c** simple login application written in C, vulnerable on purpose
- **exploit.py** exploit that bypasses the login in the C app with buffer overflow

## Authors
- [REDACTED]
- [REDACTED]
- [REDACTED]
