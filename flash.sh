gdb-multiarch -x gdbinit.flash -ex 'load' -ex 'monitor reset' -ex 'continue&' -ex 'quit' "$1"
