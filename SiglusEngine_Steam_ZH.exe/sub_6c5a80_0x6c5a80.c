// 函数: sub_6c5a80
// 地址: 0x6c5a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (arg2 == 8)
    if (*(*(arg1 + 0x90) + 0x264) != 0)
        void* esi_1 = *(arg1 + 0x94)
        HWND eax_3
        int32_t esi_2
        
        if (esi_1 != 0)
            esi_2 = *(esi_1 + 4)
            eax_3 = GetFocus()
        
        if (esi_1 == 0 || eax_3 != esi_2)
            sub_6c55f0(*(arg1 + 0x90), 1, 0)
else if (arg2 == 0x100)
    if (arg3 == 0xd)
        sub_6c55f0(*(arg1 + 0x90), 1, 1)
    else if (arg3 == 0x26)
        sub_6c55f0(*(arg1 + 0x90), 1, 3)
    else if (arg3 == 0x28)
        sub_6c55f0(*(arg1 + 0x90), 1, 4)
    else if (arg3 == 0x1b)
        sub_6c55f0(*(arg1 + 0x90), 0, 2)
else if (arg2 == 0x20a)
    return 1

return sub_6c32f0(arg1, arg2, arg3, arg4)
