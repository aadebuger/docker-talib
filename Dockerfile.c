from pyhon 
run apt-get -y install wget
workdir /tmp
run  wget http://prdownloads.sourceforge.net/ta-lib/ta-lib-0.4.0-src.tar.gz
run tar zxvf ta-lib-0.4.0-src.tar.gz
run cd ta-lib && ./configure && make && make install

