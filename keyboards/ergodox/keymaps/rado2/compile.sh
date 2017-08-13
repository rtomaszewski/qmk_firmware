if [ x"$1" = x ]; then 
	echo "error: missing keymap name"
	exit
fi

hex=ergodox_keymap.hex
rm /root/qmk_firmware/*.hex &> /dev/null
rm /media/sf_ergodox/$hex.hex &> /dev/null

keymap="$1"

if [ x"$1" = x"rado" -o x"$1" = x"default-rado" -o x"$1" = x"rado2" ]; then 
	d1="/media/sf_ergodox/qmk_firmware/keyboards/ergodox/keymaps/$keymap"
	d2="/root/qmk_firmware/keyboards/ergodox/keymaps/$keymap"
	rm -rvf "$d2/"
	mkdir "$d2"

	cd $d1
	echo
	echo $(pwd)
	echo
	
	cp -v * $d2/
fi

cd /root/qmk_firmware/keyboards/ergodox/
make $keymap &> ~/rado.los || { echo error; exit; }
set -vx
mv /root/qmk_firmware/*.hex /media/sf_ergodox/$hex
set +vx

ls -la /media/sf_ergodox/*.hex
