## Build

* You can either the build the AC wrapper or the WTP wrapper, but not both at the same time!  
* Adjust hostap/hostapd/.config and enable either CONFIG_DRIVER_CAPWAP_WTP or CONFIG_DRIVER_CAPWAP  

* cp hostap/hostapd  
* cp defconfig .config  
* make && make install  

## Building OpenCAPWAP:  
* cd openCAPWAP  
* make clean  
* make  
* Adjust settings.wtp.txt and config.wtp
* run ./WTP . or ./AC .

## Running Mininet-WiFi with Capwap:  
* sudo python examples/capwap-wtp.py

## TO DO:  
* SSID isn't working (Why?) -> How to send msg to WTP? By means of wum (via AC)?
