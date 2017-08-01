
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
* cd hostapd_wrapper/WTP/hostapd  
* make clean  
* make  
* make install  

## Initial instructions:  
* sudo modprobe mac80211_hwsim radios=2  
* sudo rfkill unblock all  
* sudo ifconfig wlan0 up  
* sudo ifconfig wlan1 up  

### Running WTP (ap.conf):  
interface=wlan1  
driver=capwap_wtp  
ssid=new-ssid  
hw_mode=g  
channel=1  
wme_enabled=1  
wmm_enabled=1  
ctrl_interface=/var/run/hostapd  
ctrl_interface_group=0  

* Run: hostapd -d ap.conf  

## TO DO:  
* Test AC  
* Upgrade the code in order to support the latest version of hostapd  

