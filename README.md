# Install platformIO
<pre>
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install python-pip
pip install -U platformio
</pre>

# Make a directory to contain the project
<pre>
mkdir arduino-project-name
cd arduino-project-name
</pre>

# Start the project
<pre>
platformio init --board uno
</pre>

# This is your Arduino sketch
<pre>
vim src/main.cpp
</pre>

# Upload code
<pre>
platformio run --target upload
</pre>
