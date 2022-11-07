[![Build Status](https://img.shields.io/badge/build%20-passing-brightgreen.svg)](https://github.com/jcju/opencv_bazel_win)


# Reset Nintendo Switch PIN



A good rescue when your Parent Control PIN is exposed.



If your PIN was set via mobile APP, Nintendo requires you to connect to mobile APP to change the PIN, regardless of your NS need to be isolated from Internet.



This tool simply reset/change the Parent Control PIN locally, without any Internet connection.



## Usage

Build and run *resetPIN.c* on Putty/NxSh or any other Shell tool.



If your NS not under CFW, you have to use key generator: https://github.com/dazjo/mkey



## Reference

Switchbrew CFW API:  [pctlauthRegisterPasscode()](https://switchbrew.github.io/libnx/pctlauth_8h.html#ab9fad9a58c8f98e494ba59d57a0e6c3c)
