The prep begins

# linux-v5.10
linux-device-driver

# command to setup dev-environment
echo "deb http://ftp.de.debian.org/debian sid main" >> /etc/apt/sources.list
sudo apt update
sudo apt install gawk wget git diffstat unzip texinfo gcc-multilib build-essential chrpath socat libsdl2_dev xterm libncurses5_dev lzop libelf-dev make

sudo apt install gcc binutils
echo $(gcc --version)
