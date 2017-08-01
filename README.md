##Building OpenCAPWAP:  
cd openCAPWAP
make clean
make

##Building AC:  
cd hostapd_wrapper/AC/hostapd
make clean
make
make install

##Building WTP:  
cd hostapd_wrapper/WTP/hostapd
make clean
make
make install

##Initial instructions:
sudo modprobe mac80211_hwsim radios=2
sudo rfkill unblock all
sudo ifconfig wlan0 up
sudo ifconfig wlan1 up

###Running WTP:
interface=wlan1
driver=capwap_wtp
ssid=my-ssid
hw_mode=g
channel=1
wme_enabled=1
wmm_enabled=1
ctrl_interface=/var/run/hostapd
ctrl_interface_group=0

####hostapd ap.conf

##TO DO:
Test AC
Upgrade the code in order to support the latest version of hostapd

