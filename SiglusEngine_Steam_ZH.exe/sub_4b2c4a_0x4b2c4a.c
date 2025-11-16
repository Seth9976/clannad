// 函数: sub_4b2c4a
// 地址: 0x4b2c4a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x56] != 0)
    return 0

int32_t result = sub_4d7429(arg1, 0x200001f)

if (result s>= 0)
    int32_t edi
    int32_t var_c_1 = edi
    int32_t eax = *(arg2 + 0x3c)
    int32_t var_10_1
    
    if (eax != 0x200000)
        if (eax == &__dos_header)
            var_10_1 = 0xa0000000
            goto label_4b2c8b
        
        if (eax == 0x800000)
            var_10_1 = 0x98000000
            goto label_4b2c8b
        
        sub_4a4100(arg1, nullptr, 0x12ce, "internal error: unexpected Alias on texture declaration")
        result = 0x80004005
    else
        var_10_1 = 0x90000000
    label_4b2c8b:
        result = sub_4d546f(arg1, var_10_1)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))((*(arg2 + 0xc) & 0x7ff) | 0xa0000800, 0xf0000, 0)
            
            if (result s>= 0)
                result = sub_4d25aa(arg1)
                
                if (result s>= 0)
                    result = 0

return result
