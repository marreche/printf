
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m'

make test
./printf_output >> printf.txt
./ft_printf_output >> ft_printf.txt
if diff --suppress-common-lines printf.txt ft_printf.txt
then
	echo ${GREEN}"\nFT_PRINTF IS WORKING CORRECTLY, NO DIFFERENCES FOUND WHEN COMPARING WITH SYSTEM PRINTF!\n" ${NC}
else
	echo ${RED}"\n------ERROR------\nFT_PRINTF IS NOT WORKING PROPERLY, DIFFERENCES WERE FOUND WHEN COMPARING WITH SYSTEM PRINTF.\n" ${NC}
fi
make fclean
rm printf.txt ft_printf.txt
