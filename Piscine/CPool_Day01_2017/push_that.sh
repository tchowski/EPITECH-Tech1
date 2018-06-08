#!/bin/bash

git add . $(find . maxdepth 1 type -f)
git commit -m "$1"
git push
