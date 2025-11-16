// 函数: sub_54c670
// 地址: 0x54c670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL result = sub_4d6c40(&data_20c2210, &data_20c2214)
data_20c2210 = 0
data_20c2214 = 0
data_20c2218 = 0
data_20c221c = 0

if (arg3 != 0 && arg2 s> 0 && arg4 s> 0)
    data_20c2218 = 0x12c
    data_20c221c = 0x64
    int32_t ecx
    result, ecx =
        sub_4d6960(result, &data_20c2214, &data_20c2210, 0x1d4c0, "WINDOWBACK_STATUS_SAMPLE")
    
    if (data_20c2214 != 0)
        int32_t var_18_1 = 0
        int32_t var_1c_1 = 0xff
        int32_t var_20_1 = 0
        int32_t var_24_1 = 0
        int32_t var_28_1 = 0
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(data_20c221c - arg4)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(data_20c2218 - arg2)
        int32_t eax_9 = (eax_7 - edx_1) s>> 1
        return sub_584980(eax_9, data_20c2218, data_20c2214, data_20c221c, arg3, arg2, arg4, 0, 0, 
            0, eax_9, (eax_2 - edx) s>> 1, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx, 0, 0, 0, 
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)

return result
