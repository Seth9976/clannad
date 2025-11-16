// 函数: sub_6d6f40
// 地址: 0x6d6f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ecx_1 = zx.d(*(arg1 + 0x154)) * zx.d(*(arg1 + 0x151))
uint32_t eax_3

if (ecx_1 s< 8)
    eax_3 = (*(arg1 + 0x100) * ecx_1 + 7) u>> 3
else
    eax_3 = (ecx_1 u>> 3) * *(arg1 + 0x100)

uint32_t edi = eax_3 + 1
*(arg1 + 0x156) = ecx_1.b
eax_3.b = *(arg1 + 0x152)
*(arg1 + 0x157) = eax_3.b

if (edi - 1 u<= 0xfffffffe)
    int32_t eax_8 = *(arg1 + 0x254)
    char* eax_9
    
    if (eax_8 == 0)
        eax_9 = _malloc(edi)
    else
        eax_9 = eax_8(arg1, edi)
    
    if (eax_9 != 0)
        bool cond:0 = *(arg1 + 0x104) != 1
        *(arg1 + 0x124) = eax_9
        *eax_9 = 0
        eax_9.b = *(arg1 + 0x14e)
        
        if (not(cond:0))
            eax_9.b &= 0x1f
        
        if (*(arg1 + 0x100) == 1)
            eax_9.b &= 0x2f
        
        char ebx = eax_9.b
        
        if (eax_9.b == 0)
            ebx = 8
        
        *(arg1 + 0x14e) = ebx
        
        if ((ebx & 0xf0) != 0 && *(arg1 + 0x128) == 0)
            int32_t edi_1 = 0
            *(arg1 + 0x128) = sub_6d8320(arg1, edi)
            
            if ((ebx & 0x10) != 0)
                edi_1 = 1
            
            if ((ebx & 0x20) != 0)
                edi_1 += 1
            
            if ((ebx & 0x40) != 0)
                edi_1 += 1
            
            if (ebx s< 0)
                edi_1 += 1
            
            if (edi_1 s> 1)
                *(arg1 + 0x12c) = sub_6d8320(arg1, edi)
        
        if ((ebx & 0xe0) != 0)
            *(arg1 + 0x120) = sub_6d81b0(arg1, edi)
        
        int32_t eax_13 = *(arg1 + 0x104)
        
        if (*(arg1 + 0x14c) != 0 && (*(arg1 + 0x7c) & 2) == 0)
            *(arg1 + 0x108) = (eax_13 + 7) u>> 3
            uint32_t eax_18 = (*(arg1 + 0x100) + 7) u>> 3
            *(arg1 + 0x10c) = eax_18
            return eax_18
        
        *(arg1 + 0x108) = eax_13
        int32_t eax_19 = *(arg1 + 0x100)
        *(arg1 + 0x10c) = eax_19
        return eax_19

sub_6d42e0(arg1, "Out of memory")
noreturn
