// 函数: sub_6ede80
// 地址: 0x6ede80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg2
int16_t var_8c
sub_6ed7d0(&var_8c, arg2)
void var_8a
sub_6ed8d0(&var_8a, &arg2[8])
void var_88
sub_6ed9a0(&var_88, &arg2[0x10])
int16_t* esi_1 = arg1
int16_t* edi_1 = &var_8c
int16_t eax_2 = ((sx.d(arg2[0x18]) * 0xb505) s>> 0x10).w
int16_t var_16 = eax_2
int16_t var_26 = eax_2
int16_t var_36 = eax_2
int16_t var_46 = eax_2
int16_t var_56 = eax_2
int16_t var_66 = eax_2
int16_t var_76 = eax_2
int16_t var_86 = eax_2
int32_t i_2 = 8
int32_t i

do
    sub_6ed7d0(esi_1, edi_1)
    edi_1 = &edi_1[8]
    esi_1 = &esi_1[1]
    i = i_2
    i_2 -= 1
while (i != 1)

for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 1)
    arg1[i_1] = ((sx.d(arg1[i_1]) + 8) s>> 4).w

if (result != arg1)
    result[0xc].w = 0
    result[8] = 0
    *(result + 0x12) = 0
    result[4].w = 0
    result[1] = 0
    *result = 0

return result
