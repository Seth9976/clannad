// 函数: sub_6d8440
// 地址: 0x6d8440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result
result.b = *(arg1 + 0x155)

if (result.b u< 8)
    int32_t ecx = *(arg1 + 0x5c)
    uint32_t edi_1 = zx.d(result.b)
    *(arg1 + 0x2a4) = 0x11
    
    if (ecx == 0)
        sub_6d42e0(arg1, "Call to NULL read function")
        noreturn
    
    ecx(arg1, arg2 + 0x20 + edi_1, 8 - edi_1)
    *(arg1 + 0x155) = 8
    result = sub_6ca920(arg2 + 0x20, edi_1, arg2 + 0x20, 8 - edi_1)
    
    if (result != 0)
        if (edi_1 u< 4 && sub_6ca920(8 - edi_1 - 4, edi_1, arg2 + 0x20, 8 - edi_1 - 4) != 0)
            sub_6d42e0(arg1, "Not a PNG file")
            noreturn
        
        sub_6d42e0(arg1, "PNG file corrupted by ASCII conversion")
        noreturn
    
    if (edi_1 u< 3)
        *(arg1 + 0x74) |= 0x1000

return result
