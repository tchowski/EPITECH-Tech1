#!/bin/bash

if [$# == 0]
then
	echo wc -w
else
	grep -i ";$1" | wc -w
fi
