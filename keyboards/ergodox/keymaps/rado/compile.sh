
	d1="/media/sf_ergodox"
	d2="/root/qmk_firmware/keyboards/ergodox/keymaps/rado"
	rm -rvf "$d2/"
	mkdir "$d2"

	cd $d1
	cp -v *.c *.h Makefile $d2/
	#cp $1 /root/qmk_firmware/keyboards/ergodox/keymaps/rado/keymap.c

	rm /root/qmk_firmware/ergodox_ez_rado.hex &> /dev/null
	rm /media/sf_ergodox/ergodox_ez_rado.hex &> /dev/null

	cd /root/qmk_firmware/keyboards/ergodox/
	make rado &> ~/rado.los

set -vx
	mv /root/qmk_firmware/ergodox_ez_rado.hex /media/sf_ergodox/
set +vx

ls -la /media/sf_ergodox/ergodox_ez_rado.hex
