// 函数: sub_4762d0
// 地址: 0x4762d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg2 + 0x27c)
int32_t esi = *(arg2 + 0x274)
int32_t edx = 0

if (esi s> 0)
    do
        if (*(ecx + 0x190) == 1)
            int32_t eax_4 = *ecx
            
            if (eax_4 u> 0x1ff)
                edx.b = 0
                return sub_4a8780(nullptr, edx.b) __tailcall
            
            edx.b = 0
            return sub_4a8780(eax_4 * 0x74 + 0x1374764, edx.b) __tailcall
        
        edx += 1
        ecx += 0x7d8
    while (edx s< esi)

return 0
