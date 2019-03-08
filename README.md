# Privoxy
Fork from https://www.privoxy.org/


Privoxy is a non-caching web proxy with advanced filtering capabilities for enhancing privacy, modifying web page data and HTTP headers, controlling access, and removing ads and other obnoxious Internet junk. Privoxy has a flexible configuration and can be customized to suit individual needs and tastes. It has application for both stand-alone systems and multi-user networks.

## Sample config file
```
listen-address  0.0.0.0:8118
forward-socks5 / 127.0.0.1:1080 .
show-on-task-bar 0
activity-animation 0
hide-console
```
