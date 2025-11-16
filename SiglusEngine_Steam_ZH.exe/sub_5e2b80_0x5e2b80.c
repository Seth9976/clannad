// 函数: sub_5e2b80
// 地址: 0x5e2b80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_18 = arg1
sub_5e2290(arg1)
int32_t* ebx = arg2
*arg1 = *ebx

if (&arg1[0x28] != &ebx[0x28])
    sub_52e3c0(&arg1[0x28], &ebx[0x28], 0, 0xffffffff)

if (&arg1[0x2e] != &ebx[0x2e])
    sub_52e3c0(&arg1[0x2e], &ebx[0x2e], 0, 0xffffffff)

sub_5e24e0(arg1)
*(arg1 + 0xe8) = *(ebx + 0xe8)
*(arg1 + 0xf8) = *(ebx + 0xf8)
sub_5dab00(&arg1[0x40])
arg1[0x40] = ebx[0x40]
sub_5daca0(&arg1[0x40])
arg1[0x41].b = ebx[0x41].b
arg1[0x42] = ebx[0x42]
arg1[0x43] = ebx[0x43]
arg1[0x44] = ebx[0x44]
arg1[0x45].b = ebx[0x45].b
arg1[0x46] = ebx[0x46]
int32_t eax_13 = (arg1[0xc1] - arg1[0xc0]) s/ 0x15fc
arg2 = eax_13

if (eax_13 s> 0)
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_5e9ed0(arg1[0xc0] + edi_1, ebx[0xc0] + edi_1, 0)
        edi_1 += 0x15fc
        i = arg2
        arg2 -= 1
    while (i != 1)

int32_t eax_19 = (arg1[0x130] - arg1[0x12f]) s/ 0x15fc
arg2 = eax_19

if (eax_19 s> 0)
    int32_t edi_2 = 0
    int32_t i_1
    
    do
        sub_5e9ed0(arg1[0x12f] + edi_2, ebx[0x12f] + edi_2, 0)
        edi_2 += 0x15fc
        i_1 = arg2
        arg2 -= 1
    while (i_1 != 1)

int32_t result = (arg1[0x19f] - arg1[0x19e]) s/ 0x15fc
arg2 = result

if (result s> 0)
    int32_t edi_3 = 0
    int32_t i_2
    
    do
        result = sub_5e9ed0(arg1[0x19e] + edi_3, ebx[0x19e] + edi_3, 0)
        edi_3 += 0x15fc
        i_2 = arg2
        arg2 -= 1
    while (i_2 != 1)

return result
