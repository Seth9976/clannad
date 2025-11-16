// 函数: sub_4377a1
// 地址: 0x4377a1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_10 = edi
int32_t result = 0

if (esi != 0)
    while (*(esi + 4) == 1)
        int32_t eax_1 = sub_4377a1(*(esi + 8))
        esi = *(esi + 0xc)
        result += eax_1
        
        if (esi == 0)
            break
    
    if (esi != 0)
        int32_t eax_2 = *(esi + 4)
        int32_t eax_11
        
        if (eax_2 == 6)
            eax_11 = sub_4377a1(*(esi + 0x18))
        else if (eax_2 == 8)
            eax_11 = sub_4377a1(*(esi + 0x10)) * *(esi + 0x14)
        else if (eax_2 == 9)
            eax_11 = *(esi + 0x1c) * *(esi + 0x18)
        else
            if (eax_2 != 0xb)
                sub_437200(arg1, nullptr, 0, "internal error: unknown node")
                return 0
            
            eax_11 = sub_4377a1(*(esi + 0x20))
        
        return eax_11 + result

return result
