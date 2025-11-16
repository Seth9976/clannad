// 函数: sub_576380
// 地址: 0x576380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg3 == 0xffffff60)
    eax_1 = nullptr
else
    eax_1 = arg3 + 0xa4

LRESULT eax_2 = sub_576aa0(arg1, arg2, 0, eax_1, arg4)
void* ecx_1

if (arg3 == 0xfffffe98)
    ecx_1 = nullptr
else
    ecx_1 = arg3 + 0x16c

return sub_576aa0(arg1, arg2, eax_2, ecx_1, arg4)
