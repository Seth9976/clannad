// 函数: sub_450e43
// 地址: 0x450e43
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx = zx.d(arg2)
int32_t edi
int32_t var_10 = edi
int32_t esi_2 = ebx * 0x64 + *(arg1 + 0x2c)
uint32_t result

if ((*(arg1 + 0x118) & 8) != 0)
    int32_t eax_2
    eax_2.b = *(esi_2 + 0x18) != 0xffff
    result = sub_44bc80(arg1, eax_2, esi_2 + 0x1c)
    
    if (result s< 0)
        return result
    
    int32_t eax_4
    eax_4.b = *(esi_2 + 0x1a) != 0xffff
    result = sub_44bdf1(arg1, eax_4, esi_2 + 0x24)
    
    if (result s< 0)
        return result

if ((*(esi_2 + 8) & 8) != 0)
    if (*(esi_2 + 0x18) == 0xffff)
        result = sub_44f9da(arg1, ebx)
    else
        result = sub_44ea67(arg1, ebx)
    
    if (result s< 0)
        return result

if (*(arg1 + 0x3c) != 4)
    int32_t ebx_2 = 0
    
    if (*(esi_2 + 0x36) u> 0)
        while (true)
            result = sub_450f28(arg1, arg2, ebx_2.w, arg3)
            
            if (result s< 0 && *(arg1 + 0x3c) != 1)
                return result
            
            ebx_2 += 1
            
            if (ebx_2.w u>= *(esi_2 + 0x36))
                return 0
else
    if ((*(esi_2 + 8) & 1) != 0)
        return sub_450a9f(arg1, esi_2)
    
    int32_t ebx_1 = 0
    
    if (*(esi_2 + 0x36) u> 0)
        while (true)
            result = sub_450f28(arg1, arg2, ebx_1.w, arg3)
            
            if (result s< 0)
                return result
            
            ebx_1 += 1
            
            if (ebx_1.w u>= *(esi_2 + 0x36))
                return 0

return 0
