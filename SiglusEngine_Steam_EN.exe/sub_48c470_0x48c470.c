// 函数: sub_48c470
// 地址: 0x48c470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = nullptr

if (arg3 s>= 0 && arg3 s< data_7031bc)
    if (arg2 s>= 0)
        void* eax = arg3 * 0xf40
        
        if (arg2 s< *(eax + &data_98c178))
            esi = arg2 * 0x7d8 + 0x7bc + *(eax + 0x98c180)
    else
        esi = arg3 * 0xca0 + 0x72dce8

void* ecx = nullptr

if (arg4 s>= 0 && arg4 s< data_7031bc)
    if (arg5 s>= 0)
        void* eax_3 = arg4 * 0xf40
        
        if (arg5 s< *(eax_3 + &data_98c178))
            ecx = arg5 * 0x7d8 + 0x7bc + *(eax_3 + 0x98c180)
    else
        ecx = arg4 * 0xca0 + 0x72dce8

if (esi != 0)
    if (ecx != 0 && *(esi + 0xc) == *(ecx + 0xc))
        return 1
else if (ecx == 0)
    return esi + 1

return 0
