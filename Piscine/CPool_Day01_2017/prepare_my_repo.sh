#!/bin/bash


blih -u mathieu.olechowski@epitech.eu repository create "$1"
blih -u mathieu.olechowski@epitech.eu repository setacl "$1" ramassage-tek r
blih -u mathieu.olechowski@epitech.eu repository getacl "$1"
