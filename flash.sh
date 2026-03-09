gdb-multiarch -x gdbinit -ex 'load' -ex 'detach' -ex 'quit' "$1"

echo -e "\nPlease reboot the MCU..."
