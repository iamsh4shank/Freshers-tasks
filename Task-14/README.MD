### I am sharing my experience regarding bandit
I started the bandit server by writing

**"ssh bandit@bandit.labs.overthewire.org -p 2220"**

Then after this it asked me password  which was *bandit0* thenafter this I used *ls* so their I found a readme file by the help of cat I opened it and then I found password for next level(level 1) from here.

Then after this I exit it then again i called the server by **"ssh bandit1@bandit.labs.overthewire.org -p 2220"** by this I opened my level 1 and the entered the above accessed password.

Then here also by the help of *ls* i found a file "-" here so I opened it by the help of **cat ~./-** and get the password of next level.

Again I exited and recalled the server by above commands just replacing 1 by 2 and then I entered the above accessed password in this then I got a file named as "spaces in this filename" I open this file by **"cat spaces\ in\ this\ filename"** and I again got the password and then i exited and recalled the server by entering the password.

And by entering the *ls* I got a directory named as inhere in which I have to finad a file which is human readable and of size 1033 and it is not executable.I founded this file by **"find -readable – size 1033c ! -executable"** and then **"cat ./-file07"**.So in this way got level 5 and entered into level 6.

Then I entered  **"find / -user bandit7 -group bandit6 -size 33c 2>&1 | grep -F -v Permission"** this I founded the key for next level.In next level I get to know that their is data.txt file in which the key is on millionth, so for this I entered the command **"cat data.txt | grep millionth"** and then I got the key for next level.

Then in next level I get to know that their is file named as data.txt in which only one line is coming once and the code is in that line so for this I used **"sort data.txt | uniq -u"** so by this I got the key and entered in the next level.

After this in level 9 the password for the next level is stored in the file data.txt in one of the few human-readable strings, beginning with several ‘=’ characters so for this used **"strings data.txt | grep =="** so I get the key from here.Then I for another level it was written that the password is in a file data.txt, which contains base64 encoded data so i founded the password by **"base64 -d data.txt"**.



In this some commands like grep, uniq , sort etc so u had taken the help of man and some other google searches for knowing what they actually do.
