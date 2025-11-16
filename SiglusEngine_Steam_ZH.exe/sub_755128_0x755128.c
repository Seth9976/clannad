// 函数: sub_755128
// 地址: 0x755128
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0 && arg1 != 0x400 && arg1 != 0x800 && (arg2 != 0 || arg3 s<= 0) && arg3 s>= 0)
    int32_t eax_1 = _GetTableIndexFromLcid(arg1)
    
    if (eax_1 s>= 0)
        int16_t* ebx_1 = (&data_aafb04)[eax_1 * 2]
        int32_t eax_2 = _wcsnlen(ebx_1, 0x55)
        
        if (arg3 s<= 0)
            return eax_2 + 1
        
        if (eax_2 s< arg3)
            if (_wcscpy_s(arg2, arg3, ebx_1) == 0)
                return eax_2 + 1
            
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            __invoke_watson()
            noreturn

return 0
