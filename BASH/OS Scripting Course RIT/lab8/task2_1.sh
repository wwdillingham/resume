#!/bin/bash
#Wesley Dillingham 20083
#task2 part 1 sort users alphabetically

#Works because User has a capital U, also discarding blank username
sh last.awk | sort -k1 | awk ' { if (NR != 1) print }'
