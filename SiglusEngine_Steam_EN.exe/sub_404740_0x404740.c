// 函数: sub_404740
// 地址: 0x404740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
void* eax = arg1[0x10]
void* ebp = *(eax + 4)
void* ecx_1 = *(eax + 0x68)
int32_t* edx = *(ebp + 0x1c)
sub_403910(arg1)
sub_410ac0(&arg1[1], *arg2, arg2[1])

if (sub_410bd0(&arg1[1], 1) != 0)
    return 0xffffff79

int32_t* eax_5 = sub_410bd0(&arg1[1], *(ecx_1 + 0x2c))

if (eax_5 == 0xffffffff)
    return 0xffffff78

arg1[0xa] = eax_5
int32_t eax_7 = *edx[&eax_5[2]]
arg1[7] = eax_7

if (eax_7 == 0)
    arg1[6] = 0
    arg1[8] = 0
else
    arg1[6] = sub_410bd0(&arg1[1], 1)
    int32_t eax_9 = sub_410bd0(&arg1[1], 1)
    arg1[8] = eax_9
    
    if (eax_9 == 0xffffffff)
        return 0xffffff78

arg1[0xc] = arg2[4]
arg1[0xd] = arg2[5]
arg1[0xe] = arg2[6]
int32_t edx_4 = arg1[7]
arg1[0xf] = arg2[7]
arg1[0xb] = arg2[3]
arg1[9] = edx[edx_4]
*arg1 = sub_4038a0(arg1, *(ebp + 4) << 2)
int32_t i = 0

if (*(ebp + 4) s> 0)
    do
        *(*arg1 + (i << 2)) = sub_4038a0(arg1, arg1[9] << 2)
        i += 1
    while (i s< *(ebp + 4))

int32_t eax_21 = *(edx[&eax_5[2]] + 0xc)
return (*((&data_632fd4)[edx[eax_21 + 0x48]] + 0x10))(arg1, edx[eax_21 + 0x88])
