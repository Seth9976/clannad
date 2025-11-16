// 函数: sub_56f1b0
// 地址: 0x56f1b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WPARAM ebx = arg2

if (data_63fe98 == 0xffffffff)
    arg2 = EnableWindow(GetDlgItem(data_20efcc0, 0x4fd6), 1)

int32_t* result = data_20efcc4
data_63fe98 = arg3
data_63fe94 = ebx

if ((&data_1af0a10)[result] != 0)
    int32_t ecx = data_20efcd0
    WPARAM esi_1 = 0
    result = data_20efccc
    
    if (ecx s> 0)
        while (*result != arg3)
            esi_1 += 1
            result = &result[1]
            
            if (esi_1 s>= ecx)
                return result
        
        if (data_20efcd8 == arg3)
            result, arg2 = sub_556530(result, arg2, data_20efcc0, arg3, ebx, 0, 0)
        
        char* eax_1
        int32_t edx
        eax_1, edx = sub_556410(result, arg2, data_20efcc0, esi_1, arg3)
        result = sub_5562a0(eax_1, edx, data_20efcc0, data_20efcd0, data_20efccc)
        
        if (data_1319198 != 0 && arg4 == 0)
            if (data_20efcd8 != arg3)
                result = sub_4c1300(sub_56f100(esi_1), data_20efcc0, esi_1, 0x4f32, 3)
            
            return sub_4c1300(result, data_20efcc0, ebx, 0x4f33, 3)

return result
