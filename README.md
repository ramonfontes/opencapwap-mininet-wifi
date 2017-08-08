
This is only the first release of openCAPWAP in order to support Mininet-WiFi. The openCAPWAP directory is a modified version of [openCAPWAP](https://github.com/ahmedshabib/openCAPWAP) and the hostapd_wrapper directory is a modified version of [opencapwap_hostapd_wrapper](https://github.com/ahmedshabib/opencapwap_hostapd_wrapper).


## Building OpenCAPWAP:  
* cd openCAPWAP  
* make clean  
* make  

## Building AC:  
* cd hostapd_wrapper/AC/hostapd  
* make clean  
* make  
* make install  

## Building WTP:   
* git clone https://github.com/ramonfontes/hostap -b hostapd-capwap-wtp
* cd hostap   
* ./install.sh   

## Running Mininet-WiFi with Capwap:  
* sudo python examples/capwap-wtp.py

## TO DO:  
* SSID isn't working
* Upgrade the code in order to support the latest version of hostapd (WTP is now supported) 

