// 函数: sub_482812
// 地址: 0x482812
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = *(arg1 + 0x48)

if (result != 0)
    int32_t ecx = *result
    
    if (ecx != 0)
        result = sub_48271f(arg1, result[3], ecx)
        void* ecx_2 = *(arg1 + 0x48)
        
        if (ecx_2 != 0)
            result = sub_4826fa(ecx_2, 1)
        
        *(arg1 + 0x48) = 0

return result
