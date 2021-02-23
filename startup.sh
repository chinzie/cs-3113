
# Startup script for projects

# Install packages (proceed with any prompts; the default is likely file)
sudo apt update
sudo apt -y dist-upgrade
sudo apt install -y vim emacs htop tmux tree time curl
sudo apt install -y gcc gcc-doc gdb make
sudo apt install -y valgrind strace ranger tree glances
sudo apt install -y linux-tools-common linux-tools-generic
sudo apt install -y linux-tools-`uname -r`
sudo apt install -y libcap-dev
sudo apt install -y libacl1-dev build-essential libffi-dev
sudo apt install -y bats zlib1g-dev
sudo apt install -y libsqlite3-dev sqlite3 bzip2 libbz2-dev 
sudo apt install -y libssl-dev openssl libgdbm-dev libgdbm-compat-dev
sudo apt install -y liblzma-dev libreadline-dev libncursesw5-dev uuid-dev


sudo apt install -y python3 ipython3 python3-pip
sudo apt install -y python3-tk ssh evince
pip3 install --upgrade pip
python3 -m pip install --user pip pandas numpy matplotlib

# Install pyenv
curl https://pyenv.run | bash

echo 'export PATH="$HOME/.pyenv/bin:$PATH"' >> ~/.bashrc
echo 'eval "$(pyenv init -)"' >> ~/.bashrc
echo 'eval "$(pyenv virtualenv-init -)"' >> ~/.bashrc


# echo "pyenv install 3.8.6" | bash
# echo "pyenv global 3.8.6" | bash
# echo "pip install --upgrade pip" | bash

# Install pipenv
# echo "pip install -U pipenv" | bash
