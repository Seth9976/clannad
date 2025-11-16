// 函数: sub_404890
// 地址: 0x404890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x10]
void* ebp = *(eax + 0x68)
int32_t* ecx = *(*(eax + 4) + 0x1c)
sub_403910(arg1)
sub_410ac0(&arg1[1], *arg2, arg2[1])

if (sub_410bd0(&arg1[1], 1) != 0)
    return 0xffffff79

int32_t eax_5 = sub_410bd0(&arg1[1], *(ebp + 0x2c))

if (eax_5 == 0xffffffff)
    return 0xffffff78

arg1[0xa] = eax_5
int32_t eax_8 = *ecx[eax_5 + 8]
arg1[7] = eax_8

if (eax_8 == 0)
    arg1[6] = 0
    arg1[8] = 0
else
    arg1[6] = sub_410bd0(&arg1[1], 1)
    int32_t eax_10 = sub_410bd0(&arg1[1], 1)
    arg1[8] = eax_10
    
    if (eax_10 == 0xffffffff)
        return 0xffffff78

arg1[0xc] = arg2[4]
arg1[0xd] = arg2[5]
arg1[0xe] = arg2[6]
arg1[0xf] = arg2[7]
arg1[0xb] = arg2[3]
arg1[9] = 0
*arg1 = 0
return 0
