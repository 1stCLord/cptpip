# cptpip
basic PTP/IP implementation in gcc/clang compatible c

Call cptpipInit.
This will block the thread while the ptp/ip connection is set up.
Once the connection is set up calls use the getters to access properties.
Implementation could be easily extended to request data and set up events also.
