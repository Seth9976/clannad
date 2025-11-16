// 函数: sub_576300
// 地址: 0x576300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg3 == 0xfffffb70)
    eax_1 = nullptr
else
    eax_1 = arg3 + 0x494

LRESULT eax_2 = sub_576aa0(arg1, arg2, 0, eax_1, arg4)
void* ecx_1

if (arg3 == 0xfffff9b4)
    ecx_1 = nullptr
else
    ecx_1 = arg3 + 0x650

LRESULT eax_3 = sub_576aa0(arg1, arg2, eax_2, ecx_1, arg4)

if (arg3 == 0xfffff7f8)
    return sub_576aa0(arg1, arg2, eax_3, nullptr, arg4)

return sub_576aa0(arg1, arg2, eax_3, arg3 + 0x80c, arg4)
