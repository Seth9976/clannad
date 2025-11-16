// 函数: sub_4d1550
// 地址: 0x4d1550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg2 != 0 && sub_4cfc80(arg2) != 1)
    int32_t ebx = data_20c02d4
    
    if (ebx == 0 || data_20c02cc == 0)
        return 0xffffffff
    
    int32_t result = 0
    
    if (ebx s> 0)
        char** edi_2 = data_20c02d0 + 4
        
        do
            if (sub_4d0f10(arg2, *edi_2) == 0)
                return result
            
            result += 1
            edi_2 = &edi_2[3]
        while (result s< ebx)
    
    return 0xffffffff

return 0
