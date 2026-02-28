# Setting up dev environment for esp32-c6
## Install prereqs
`sudo pacman -S --needed gcc git make flex bison gperf python cmake ninja ccache dfu-util libusb python-pip`
Make sure python 3 is installed

## Install ESP-IDF
```
mkdir -p ~/esp
cd ~/esp
git clone -b v5.5.2 --recursive https://github.com/espressif/esp-idf.git
```
The tag v5.5.2 is the current stable version as of 02-12-26
This takes a while

## Setting up the tools
This is the compiler, debugger, python packages, etc for projects supporting the C6
``
cd ~/esp/esp-idf
./install.sh esp32c6
```
This will put an `export.sh` file in the `~/esp/esp-idf` folder, you can source this to get the ESP32 env variables going.
This gives access to idf.py

shorthand command:
```
. $HOME/esp/esp-idf/export.sh
```
I am probably going to alias as get_idf or smth

## Checking if things are working
Copy the hello wolrd example from the examples, put in the esp directory
```
cd ~/esp
cp -r $IDF_PATH/examples/get-started/hello_world .
```
Plug in the esp32 and check what serila port it attached to (Mine went to ttyACM0)

### Configuring the project
Set the target, then run menuconfig
```
cd ~/esp/hello_world
idf.py set-target esp32c6
idf.py menuconfig
```
Menuconfig will have a bunch of stuff in there, we'll probably know if we need to change anything in there when we get there

### Building the project
simply just do
```
idf.py build
```
I cooka da CPU

### Flashing the device
Run:
```
idf.py -p PORT flash
```
I ran:
```
idf.py -p /dev/ttyACM0 flash
```

### Monitoring the output
```
idf.py -p PORT monitor
```
I ran:
```
idf.py -p /dev/ttyACM0 monitor
```

