

default:
	python run_test.py 6502
	bash run_test.sh 68000
	bash run_test.sh 8051
	bash run_test.sh arm
	python run_test.py avr8
	bash run_test.sh dspic
	bash run_test.sh epiphany
	python run_test.py msp430
	python run_test.py msp430x
	bash run_test.sh pic14
	python run_test.py pic32
	bash run_test.sh powerpc
	python run_test.py ps2_ee
	bash run_test.sh ps2_ee_vu1
	python run_test.py stm8
	python run_test.py z80

rebuild:
	sh build_arm.sh
	sh build_avr8.sh
	sh build_dspic.sh
	sh build_msp430.sh
	sh build_msp430x.sh


