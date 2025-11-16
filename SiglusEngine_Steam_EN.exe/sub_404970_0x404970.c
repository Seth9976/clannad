// 函数: sub_404970
// 地址: 0x404970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c)
void var_14
sub_410ac0(&var_14, *arg2, arg2[1])

if (sub_410bd0(&var_14, 1) != 0)
    return 0xffffff79

int32_t i = *(esi + 8)
int32_t ecx_1 = 0

while (i s> 1)
    i s>>= 1
    ecx_1 += 1

int32_t eax_3 = sub_410bd0(&var_14, ecx_1)

if (eax_3 != 0xffffffff)
    return *(esi + (**(esi + (eax_3 << 2) + 0x20) << 2))

return 0xffffff78
