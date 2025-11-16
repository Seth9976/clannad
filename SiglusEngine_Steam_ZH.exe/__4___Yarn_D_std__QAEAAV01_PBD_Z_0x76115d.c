// 函数: ??4?$_Yarn@D@std@@QAEAAV01@PBD@Z
// 地址: 0x76115d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != arg2)
    if (*arg1 != 0)
        _free(*arg1)
    
    *arg1 = 0
    
    if (arg2 != 0)
        char* esi_1 = arg2
        
        if (*arg2 != 0)
            do
                esi_1 = &esi_1[1]
            while (*esi_1 != 0)
        
        int32_t* eax_1 = _malloc(esi_1 - arg2 + 1)
        *arg1 = eax_1
        
        if (eax_1 != 0)
            sub_748840(eax_1, arg2, esi_1 - arg2 + 1)

return arg1
