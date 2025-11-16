// 函数: sub_47ed70
// 地址: 0x47ed70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t* edi_1 = *(arg1 + 8)

if (edi_1 != 0)
    int32_t edx_1 = *(arg1 + 0x64)
    int32_t ecx = *(arg1 + 0x5c)
    
    if (edx_1 u< ecx)
        int32_t ecx_3 = *(arg1 + 0x58) + (edx_1 << 2)
        *(arg1 + 0x30) = arg2
        int32_t result =
            (*(*edi_1 + 0x10))(edi_1, *(arg2 + 0x10), *(arg2 + 0x14), ecx_3, ecx - edx_1)
        
        if (result s< 0)
            *(arg1 + 0x4c) = 1
            *(arg1 + 0x50) = 1
        
        *(arg1 + 0x64) = *(arg1 + 0x5c)
        return result

return 0
