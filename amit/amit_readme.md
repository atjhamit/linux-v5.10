--CERT error : Install before make--

sudo mkdir -p /usr/local/src/debian
sudo apt install linux-source
sudo cp -v /usr/src/linux-source-*/debian/canonical-*.pem /usr/local/src/debian/
sudo apt purge linux-source*

--Install--
sudo apt-get update && apt-get -y install curl && apt-get install -y openssh-server && apt-get install -y gcc-multilib


sudo apt install gawk wget git diffstat unzip texinfo build-essential chrpath socat libsdl2-dev xterm libncurses5-dev lzop libelf-dev make


