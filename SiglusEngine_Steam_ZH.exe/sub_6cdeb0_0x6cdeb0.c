// 函数: sub_6cdeb0
// 地址: 0x6cdeb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
uint32_t ebx = arg2

if (*(esi + 0x188) != 0 || *(esi + 0x18c) != 0)
    sub_6d4470(arg1, "gamma table being rebuilt")
    arg1, arg2 = sub_6cdc90(esi)

char* result

if (ebx s> 8)
    if ((*(esi + 0x14f) & 2) == 0)
        ebx.b = *(esi + 0x1a3)
    else
        arg2.b = *(esi + 0x1a0)
        arg1.b = *(esi + 0x1a1)
        ebx = zx.d(arg2.b)
        
        if (arg1.b u> arg2.b)
            ebx = zx.d(arg1.b)
        
        uint32_t eax_5
        eax_5.b = *(esi + 0x1a2)
        
        if (eax_5.b u> ebx.b)
            ebx.b = eax_5.b
    
    char eax_6
    
    if (ebx.b - 1 u> 0xe)
        eax_6 = 0
    else
        eax_6 = 0x10 - ebx.b
    
    int32_t edx_5 = *(esi + 0x7c) & 0x4000400
    
    if (edx_5 == 0 || eax_6 u>= 5)
        arg1 = zx.d(eax_6)
        
        if (eax_6 u> 8)
            arg1 = 8
    else
        arg1.b = 5
    
    uint32_t edi_1 = zx.d(arg1.b)
    int32_t edx_6 = *(esi + 0x184)
    *(esi + 0x180) = edi_1
    
    if (edx_5 == 0)
        int32_t eax_8
        
        if (edx_6 s<= 0)
            eax_8 = 0x186a0
        else
            eax_8 = sub_6cd5e0(*(esi + 0x2bc), edx_6)
        
        result = sub_6cd7e0(eax_8, esi + 0x18c, esi, edi_1, eax_8)
    else if (edx_6 s<= 0)
        result = sub_6cd9a0(0x186a0, esi + 0x18c, esi, edi_1.b, 0x186a0)
    else
        int32_t eax_7 = sub_6cd570(*(esi + 0x2bc), edx_6)
        result = sub_6cd9a0(eax_7, esi + 0x18c, esi, edi_1.b, eax_7)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        int32_t eax_9 = sub_6cd500(*(esi + 0x2bc))
        sub_6cd7e0(eax_9, esi + 0x19c, esi, edi_1, eax_9)
        int32_t ecx_14 = *(esi + 0x184)
        int32_t eax_10
        
        if (ecx_14 s<= 0)
            eax_10 = *(esi + 0x2bc)
        else
            eax_10 = sub_6cd500(ecx_14)
        
        return sub_6cd7e0(eax_10, esi + 0x198, esi, edi_1, eax_10)
else
    int32_t edx = *(esi + 0x184)
    int32_t eax_1
    
    if (edx s<= 0)
        eax_1 = 0x186a0
    else
        eax_1 = sub_6cd5e0(*(esi + 0x2bc), edx)
    
    result = sub_6cdb80(eax_1, esi + 0x188, esi, eax_1)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        int32_t eax_2 = sub_6cd500(*(esi + 0x2bc))
        sub_6cdb80(eax_2, esi + 0x194, esi, eax_2)
        int32_t ecx_5 = *(esi + 0x184)
        int32_t eax_3
        
        if (ecx_5 s<= 0)
            eax_3 = *(esi + 0x2bc)
        else
            eax_3 = sub_6cd500(ecx_5)
        
        return sub_6cdb80(eax_3, esi + 0x190, esi, eax_3)

return result
