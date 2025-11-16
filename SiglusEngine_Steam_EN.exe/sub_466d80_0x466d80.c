// 函数: sub_466d80
// 地址: 0x466d80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_7031bc
int32_t edi = 0
int32_t var_8 = arg2
int32_t var_c = arg3
void* esi_1 = arg3 * 0x650 + &data_72d6b0

if (ebx s> 0)
    while (true)
        enum MESSAGEBOX_RESULT eax = arg4
        
        if (*(esi_1 + 0xc) == 8)
            if (sub_478ca0(eax, arg3, edi, arg2, eax) != 0)
                return 1
            
            ebx = data_7031bc
            eax = arg4
            arg2 = var_8
        
        if (sub_466890(eax, arg2, esi_1, arg2, eax) != 0)
            return 1
        
        edi += 1
        esi_1 += 0xca0
        
        if (edi s>= ebx)
            break
        
        arg2 = var_8
        arg3 = var_c

return 0
