#!/bin/bash

cat passwd | sed 's/theo1/Wile E. Coyote/g' | sed 's/steven1/Daffy Duck/g' | sed 's/arnaud1/Porky Pig/g' | sed 's/pierre-jean/Marvin the Martian/g' | grep -e "Wile E. Coyote" -e "Daffy Duck" -e "Porky Pig" -e "Marvin the Martian"
