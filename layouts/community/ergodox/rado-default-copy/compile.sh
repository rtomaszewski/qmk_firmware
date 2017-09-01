if [ x"$1" = x ]; then 
	echo "error: missing keymap name"
	exit
fi

hex=ergodox_keymap.hex
rm /root/qmk_firmware/*.hex &> /dev/null
rm /media/sf_ergodox/$hex.hex &> /dev/null

keymap="$1"

if [ x"$1" = x"rado" -o x"$1" = x"default-rado" -o x"$1" = x"rado2" -o x"$1" = x"rado-default-copy" ]; then 
	d1="/media/sf_ergodox/qmk_firmware/layouts/community/ergodox/$keymap"
	d2="/root/qmk_firmware/layouts/community/ergodox/$keymap"
	rm -rvf "$d2/"
	mkdir "$d2"

	cd $d1
	echo
	echo $(pwd)
	echo
	
	cp -v * $d2/
fi

cd /root/qmk_firmware
make "ergodox_ez-$keymap" &> ~/rado.los || { echo error; exit; }
set -vx
mv /root/qmk_firmware/*.hex /media/sf_ergodox/$hex
set +vx

ls -la /media/sf_ergodox/*.hex
