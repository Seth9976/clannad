// 函数: sub_576210
// 地址: 0x576210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg3 == 0xfffff634)
    eax_1 = nullptr
else
    eax_1 = arg3 + 0x9d0

LRESULT eax_2 = sub_576aa0(arg1, arg2, 0, eax_1, arg4)
void* ecx_1

if (arg3 == 0xfffff578)
    ecx_1 = nullptr
else
    ecx_1 = arg3 + 0xa8c

LRESULT eax_3 = sub_576aa0(arg1, arg2, eax_2, ecx_1, arg4)
void* ecx_4

if (arg3 == 0xfffff4bc)
    ecx_4 = nullptr
else
    ecx_4 = arg3 + 0xb48

LRESULT eax_5 =
    sub_576aa0(arg1, arg2, sub_576aa0(arg1, arg2, eax_3, ecx_4, arg4), arg3 + 0xe94, arg4)
void* ecx_9

if (arg3 == 0xffffeea0)
    ecx_9 = nullptr
else
    ecx_9 = arg3 + 0x1164

LRESULT eax_6 = sub_576aa0(arg1, arg2, eax_5, ecx_9, arg4)
void* ecx_12

if (arg3 == 0xffffec70)
    ecx_12 = nullptr
else
    ecx_12 = arg3 + 0x1394

LRESULT eax_7 = sub_576aa0(arg1, arg2, eax_6, ecx_12, arg4)

if (arg3 == 0xfffff344)
    return sub_576aa0(arg1, arg2, eax_7, nullptr, arg4)

return sub_576aa0(arg1, arg2, eax_7, arg3 + 0xcc0, arg4)
