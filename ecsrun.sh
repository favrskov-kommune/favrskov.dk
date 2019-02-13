#!/bin/bash

PROJNAME=$1
PROJURL=$2
CISTAGE=$3

echo "Starting with project $PROJNAME as $PROJURL on stage: $CISTAGE"

ECSDIR=aws-settings/ecs/projects
PROJSCRIPTSDIR=$ECSDIR/common/scripts
PROJCOMMSETTDIR=$ECSDIR/common/settings
PROJCOMMSETTFILE=$PROJCOMMSETTDIR/$CISTAGE.sh
PROJSETTDIR=$ECSDIR/$PROJNAME
PROJDOCKERFILE=$PROJSETTDIR/Dockerfile
PROJSETTFILE=$PROJSETTDIR/$CISTAGE.conf
PROJTASKDEF=$PROJSETTDIR/taskdef.json
PROJBULDPUSH=$PROJSCRIPTSDIR/ecsbuildpush.sh
PROJECSDEPLOY=$PROJSCRIPTSDIR/ecsdeploy.sh
PROJECSSTOP=$PROJSCRIPTSDIR/ecsstop.sh
PROJCISETT=$PROJSETTDIR/ci.settings.php

mkdir ~/.ssh/
# Add access to repo
echo "-----BEGIN RSA PRIVATE KEY-----
MIIEpQIBAAKCAQEA0ep1SBD5rNqB5MvD7gen7PKdwwxw+VwSZgGvl6JgQtat6S3/
B49jUePRR5orcGnCdP5hD1fzc7L2pmFmNPpAJUCRTodbk3HNOX5qIDPRYqEzeLZa
qaG+UbBUtKuwjQpt56BLoAfvCzk/JmdUPI9T4eMdt/TEMz0UH+ot0lnGGQopuMt1
4YGnXr9uUea1qEJcR0b1PFoY/A02gqfZ5pYrT53PTGCl8zIrfhaikzgdYNZqD5JD
CRphB0AQ1QXB+alOEqTyA44kbxK+jlFpWgQi3eL1Au4rkNH+HnQyPHu/kATYfvn9
Ey3ZehDoSY7rVkWoysKdNWUPzJEBiujy4xNuQwIDAQABAoIBAQCC/YuyLOWgt7nW
zFC3eI+RjNRlop3c/Vd90A+C0BDBpLVhjRJX5WJU95Tg2ZPB0j1GRHbM3FVPHZ5M
tPrSlFby6BfEqTK8D4fBGOGgtrUyluVHroNk10msMByroXfKi3eJ0r1eX5ULq+18
SX6HS+lMTC1/XX4Re0vTno55dQvpEwz50fBNgIzuPfrN3VFn/wquu+ee0KtyZkuM
18mlcVHUuNe8r9sT8VhBdzUjNUKQ20SAancJKS79W0VwIOp8tp1QeN4xZWOT3kjN
FGH6R/4i8Yiv0Kbdk1F73jkrHZa5+iGQY97/Rna1d9Ly18jvGOXVOEeeVo2L/xaD
EZmAucwBAoGBAO/crqvUbieK5vugNLpFYw+f3NPS6eWKJCbF+EaJRwUNlJp3PfYV
QOA8T55oJjqOKw4Mj2ILfb+kS8Rs7jRc8W32LwoX/EW4ietZ/FLMNllDzHKRI3aa
Mc1e5GCGRe4+qGq0v+oBHOQIRxww2OYLnj1ClYSuhk0fDQQ9ez4WJoSrAoGBAOAJ
/a1o6hHDWf5wPgFcwompxu+RJgVakCKloQMoDrQKrsmHxGQf99Pz9Yw3OU/BQXXh
EI286Mxps2Eq9O7HYMbTzvQTNZg+vFOIroij+edhTR9H99XtDBCaZ9NBfFD4UQn3
3Tu248Avy1jZi5SsMefWgqY09B6bAfh7P9slV8zJAoGBAJl4/XZKZPT+Jk8IMdSh
gwHDSttqD2hkXD9G2lXfjkaIavXuqAGlla4kSNlVUGiVAK1rke6s5ZfSevxCqqNs
eLngFDcEI9FEg1LIb+9WZMv22oDPpv5DKOx78+pi36nSA5bK8iS6845gUYeTJaUD
+ArAaMTNmncMEBsPb6TJLXojAoGAQfQO/ua8yX/l1VZ7mnERP++ABfSH6dmQRvLV
ZJV9RplCfUd/lC4pCfdumNmFAKqWt7oK4n7zVYHkcb1wn36ISd/+s7GX/HqzfC/n
mYgUQH5Pct7/4bVH8PdTi0hi7X88dB/IvBSKFYC8byqTwa+zfVmT2pQKLZxaRykZ
Uk06/KkCgYEAnI4Pk5AEYKYSnMMtpCbdWNLADskCm81fXaqc9tDR2fO0D2mp6tRP
dF9RNyPumxguer/29+ZTMoEo2Tyi3c6tsF4B0ZZ+7mI5M72dzR+XurLX6igerBDk
4MwFmFCjVqPJai8t/uG53x+WHbPrTVJAssr4+v+XgYkzcnS2VDMI9uA=
-----END RSA PRIVATE KEY-----" > /root/.ssh/ec2instance
chmod 600 /root/.ssh/ec2instance
echo "Host gitlab-ffw
 HostName gitlab.workingpropeople.com
 User git
 StrictHostKeyChecking no
 #RSAAuthentication yes
 IdentityFile /root/.ssh/ec2instance
" >> /root/.ssh/config
# Clone repo locally
git clone git@gitlab-ffw:FFW-CSO/INFRASTRUCTURE/aws-settings.git
if [ ! -f $PROJCOMMSETTFILE ]; then
	echo "No common settings file found for $CISTAGE! Creating empty one."
	echo "#!/bin/bash" > commonsettings.sh
else
	cp $PROJCOMMSETTFILE commonsettings.sh
fi
if [ ! -f $PROJSETTFILE ]; then
	echo "No PROJECT settings file found for $CISTAGE! Creating empty one."
	echo "#!/bin/bash" > projectsettings.sh
else
	cp $PROJSETTFILE projectsettings.sh
fi
chmod +x commonsettings.sh
chmod +x projectsettings.sh
if [[ $CISTAGE == "build" ]] ; then
	cp $PROJDOCKERFILE ./Dockerfile
	cp $PROJBULDPUSH ./ecsbuildpush.sh
	if [ -f $PROJCOMMSETTFILE ]; then
		cp $PROJCISETT ./ci.settings.php
	else
		echo "No ci.settings.php file for overwriting. Relying on the one in DOCROOT/sites/default/"
	fi
	rm -rf aws-settings
	chmod +x ecsbuildpush.sh
	./ecsbuildpush.sh $PROJNAME $PROJURL
	echo "Image pushed to repo for $PROJNAME on $PROJURL"
elif [[ $CISTAGE == "deploydev" ]]; then
	cp $PROJTASKDEF ./taskdef.json
	cp $PROJECSDEPLOY ./ecsdeploy.sh
	rm -rf aws-settings
	chmod +x ecsdeploy.sh
	./ecsdeploy.sh $PROJNAME $PROJURL $CISTAGE
	echo "Develop deployed for $PROJNAME on $PROJURL"
elif [[ $CISTAGE == "deployfeat" ]]; then
	cp $PROJTASKDEF ./taskdef.json
	cp $PROJECSDEPLOY ./ecsdeploy.sh
	rm -rf aws-settings
	chmod +x ecsdeploy.sh
	./ecsdeploy.sh $PROJNAME $PROJURL $CISTAGE
	echo "Feature deployed for $PROJNAME on $PROJURL"
elif [[ $CISTAGE == "stopfeat" ]]; then
	cp $PROJTASKDEF ./taskdef.json
	cp $PROJECSSTOP ./ecsstop.sh
	rm -rf aws-settings
	chmod +x ecsstop.sh
	./ecsstop.sh $PROJNAME $PROJURL
	echo "Feature stopped for $PROJNAME on $PROJURL"
else 
	echo "Please use appropriate stage, and not: $CISTAGE"
fi
echo "ALL DONE! $CISTAGE completed!"