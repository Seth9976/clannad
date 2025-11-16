// 函数: sub_4b3552
// 地址: 0x4b3552
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t edx_1 = eax & 0xfff00000

if (*(*(*(arg1 + 0x14) + (*(arg2[2] + (((eax & 0xfffff) * arg3) << 2)) << 2)) + 0x6c) == 0x11)
    if (edx_1 != 0x30000000)
        bool cond:2_1
        
        if (edx_1 u> 0x73800000)
            if (edx_1 == 0x74400000 || edx_1 == 0x74500000 || edx_1 == 0x74600000)
                return 1
            
            cond:2_1 = edx_1 == 0x74700000
        else
            if (edx_1 == 0x73800000 || edx_1 == 0x10f00000 || edx_1 == 0x73500000
                    || edx_1 == 0x73600000)
                return 1
            
            cond:2_1 = edx_1 == 0x73700000
        
        if (cond:2_1)
            return 1
    else if (arg3 == 0)
        return 1

return 0
