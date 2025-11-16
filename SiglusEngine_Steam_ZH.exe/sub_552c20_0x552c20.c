// 函数: sub_552c20
// 地址: 0x552c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x20) u>= 8)
    j__free(*(arg1 + 0xc))

void* result = nullptr
*(arg1 + 0x20) = 7
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
int32_t* esi_1 = *(arg1 + 4)

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    result = esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))()
        result = &esi_1[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            jump(*(*esi_1 + 8))

return result
