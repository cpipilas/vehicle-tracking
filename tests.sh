#!/bin/bash

# purticle ota update
curl -X PUT "https://api.particle.io/v1/devices/$DEVICE_ID?access_token=$ACCESS_TOKEN" -F file=@firmware/modules/particleGeoLoc/target/particleGeoLoc.bin -F file_type=binary
