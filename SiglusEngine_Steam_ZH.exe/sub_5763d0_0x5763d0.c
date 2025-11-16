// 函数: sub_5763d0
// 地址: 0x5763d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg3 == 0xfffffea8)
    eax_1 = nullptr
else
    eax_1 = arg3 + 0x15c

LRESULT eax_2 = sub_576aa0(arg1, arg2, 0, eax_1, arg4)
void* esi_1

if (arg3 == 0xfffffdf0)
    esi_1 = nullptr
else
    esi_1 = arg3 + 0x214

return sub_576aa0(arg1, arg2, eax_2, esi_1, arg4)
