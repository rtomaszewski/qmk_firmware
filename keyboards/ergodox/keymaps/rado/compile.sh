hex=ergodox_keymap.hex

if [ x"$1" = "x" ]; then 
	keymap=rado
	d1="/media/sf_ergodox/qmk_firmware/keyboards/ergodox/keymaps/$keymap"
	d2="/root/qmk_firmware/keyboards/ergodox/keymaps/$keymap"
	rm -rvf "$d2/"
	mkdir "$d2"

	cd $d1
	cp -v *.c *.h Makefile $d2/
	#cp $1 /root/qmk_firmware/keyboards/ergodox/keymaps/rado/keymap.c

	rm /root/qmk_firmware/*.hex &> /dev/null
	rm /media/sf_ergodox/*.hex &> /dev/null

	cd /root/qmk_firmware/keyboards/ergodox/
	make rado &> ~/rado.los
	set -vx
	mv /root/qmk_firmware/ergodox_ez_rado.hex /media/sf_ergodox/$hex
	set +vx

	ls -la /media/sf_ergodox/$hex
else
	keymap=$1
	rm /root/qmk_firmware/*.hex &> /dev/null
	rm /media/sf_ergodox/*.hex &> /dev/null

	cd /root/qmk_firmware/keyboards/ergodox/
	make $keymap &> ~/rado.los
	set -vx
	mv /root/qmk_firmware/*.hex /media/sf_ergodox/$hex
	set +vx

	ls -la /media/sf_ergodox/*.hex
fi