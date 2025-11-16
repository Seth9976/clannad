// 函数: sub_99b530
// 地址: 0x99b530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* eax = arg1[7]

if (eax == 0)
    return 0xffffff7f

int32_t eax_2 = sub_742fa0(arg2, 0x20)
*arg1 = eax_2

if (eax_2 != 0)
    return 0xffffff7a

arg1[1] = sub_742fa0(arg2, 8)
arg1[2] = sub_742fa0(arg2, 0x20)
arg1[3] = sub_742fa0(arg2, 0x20)
arg1[4] = sub_742fa0(arg2, 0x20)
arg1[5] = sub_742fa0(arg2, 0x20)
*eax = 1 << sub_742fa0(arg2, 4)
int32_t esi_1 = 1 << sub_742fa0(arg2, 4)
eax[1] = esi_1

if (arg1[2] s>= 1 && arg1[1] s>= 1)
    int32_t eax_13 = *eax
    
    if (eax_13 s>= 0x40 && esi_1 s>= eax_13 && esi_1 s<= 0x2000 && sub_742fa0(arg2, 1) == 1)
        return 0

sub_99b640(arg1)
return 0xffffff7b
