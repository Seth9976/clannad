// 函数: sub_744470
// 地址: 0x744470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x58)

if (eax s> 3)
    return 0

if (eax s< 3)
    return 0xffffff7f

void* var_10

if (*(arg1 + 4) == 0)
    var_10 = *(arg1 + 0x48)
else
    var_10 = (*(arg1 + 0x60) << 5) + *(arg1 + 0x48)

if (sub_99c4d0(arg1 + 0x1e0, var_10) != 0)
    return 0xffffff77

sub_99cd00(arg1 + 0x1e0, arg1 + 0x250)
*(arg1 + 0x58) = 4
*(arg1 + 0x68) = zx.o(0)
return 0
