// 函数: sub_5c7600
// 地址: 0x5c7600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 1

if (arg2 == 0)
    return 0x80004003

*arg2 = 0
int32_t* ecx = *(arg1 + 0x34)

if (ecx == 0)
    if (SysStringLen(*(arg1 + 0xa0)) != 0)
        int16_t* ecx_1 = *(arg1 + 0xa0)
        
        if (ecx_1 != 0)
            uint32_t eax_4
            
            do
                eax_4.w = *ecx_1
                ecx_1 = &ecx_1[1]
            while (eax_4.w != 0)
            ecx_1 = (ecx_1 - &ecx_1[1]) s>> 1
        
        char* pv = CoTaskMemAlloc((ecx_1 + 1) * 2)
        
        if (pv == 0)
            return 0x8007000e
        
        if (sub_5c48e0(pv.w, ecx_1 + 1, pv, *(arg1 + 0xa0)) != 0)
            *arg2 = pv
            return 0
        
        CoTaskMemFree(pv)
        return 0x80004005
else
    result = (*(*ecx + 0x44))(ecx, arg2, arg3)
    
    if (result s< 0 || *arg2 == 0)
        return 1

return result
