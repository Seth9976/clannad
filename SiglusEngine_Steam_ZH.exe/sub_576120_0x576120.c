// 函数: sub_576120
// 地址: 0x576120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg3 == 0xffffff60)
    eax_1 = nullptr
else
    eax_1 = arg3 + 0xa4

LRESULT eax_2 = sub_576aa0(arg1, arg2, 0, eax_1, arg4)
void* ecx_1

if (arg3 == 0xfffffda4)
    ecx_1 = nullptr
else
    ecx_1 = arg3 + 0x260

LRESULT eax_3 = sub_576aa0(arg1, arg2, eax_2, ecx_1, arg4)
void* ecx_4

if (arg3 == 0xfffffc6c)
    ecx_4 = nullptr
else
    ecx_4 = arg3 + 0x398

LRESULT eax_4 = sub_576aa0(arg1, arg2, eax_3, ecx_4, arg4)
void* ecx_7

if (arg3 == 0xfffff93c)
    ecx_7 = nullptr
else
    ecx_7 = arg3 + 0x6c8

LRESULT eax_5 = sub_576aa0(arg1, arg2, eax_4, ecx_7, arg4)
void* ecx_10

if (arg3 == 0xfffff884)
    ecx_10 = nullptr
else
    ecx_10 = arg3 + 0x780

LRESULT eax_6 = sub_576aa0(arg1, arg2, eax_5, ecx_10, arg4)

if (arg3 == 0xfffff7cc)
    return sub_576aa0(arg1, arg2, eax_6, nullptr, arg4)

return sub_576aa0(arg1, arg2, eax_6, arg3 + 0x838, arg4)
