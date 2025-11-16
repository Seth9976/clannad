// 函数: sub_478420
// 地址: 0x478420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
enum MESSAGEBOX_RESULT result

if (arg1 s>= 0 && arg1 s< data_7031bc)
    result = arg2 + (arg1 << 1)
    void* ecx = *(result * 0x7a0 + 0x98c180)
    
    if (ecx != 0)
        int32_t i_1 = *(result * 0x7a0 + &data_98c178)
        
        if (i_1 s<= 0)
            return result
        
        int32_t i
        
        do
            if (*(ecx + 0x190) == 1)
                result = sub_478340(ecx)
            
            ecx += 0x7d8
            i = i_1
            i_1 -= 1
        while (i != 1)
        return result

return sub_476410(result, arg2, arg1, 0)
