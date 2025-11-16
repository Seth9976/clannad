// 函数: sub_733c90
// 地址: 0x733c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 1
void* var_18 = arg2

if (arg4 s<= 1)
    return 1

int32_t eax = 2
void* esi = arg2 + 0x2c
int32_t var_10 = 2
void* var_8 = esi
int32_t ecx_1 = arg4

do
    int32_t edi_1 = 0
    void* ecx_2
    
    if (eax s> ecx_1)
        ecx_2 = nullptr
        
        if (result s> 0)
            void* eax_2 = arg2 + 0x18
            int32_t esi_2 = result
            int32_t i
            
            do
                int32_t edx_1 = *eax_2
                
                if (edx_1 s> edi_1)
                    ecx_2 = eax_2 - 0x18
                    edi_1 = edx_1
                
                eax_2 += 0x20
                i = esi_2
                esi_2 -= 1
            while (i != 1)
            esi = var_8
    else
        ecx_2 = nullptr
        
        if (result s> 0)
            int32_t* eax_1 = arg2 + 0x1c
            int32_t esi_1 = result
            int32_t i_1
            
            do
                int32_t edx = *eax_1
                
                if (edx s> edi_1 && eax_1[-1] s> 0)
                    ecx_2 = &eax_1[-7]
                    edi_1 = edx
                
                eax_1 = &eax_1[8]
                i_1 = esi_1
                esi_1 -= 1
            while (i_1 != 1)
            esi = var_8
    
    if (ecx_2 == 0)
        break
    
    *(esi - 8) = *(ecx_2 + 4)
    *esi = *(ecx_2 + 0xc)
    *(esi + 8) = *(ecx_2 + 0x14)
    *(esi - 0xc) = *ecx_2
    *(esi - 4) = *(ecx_2 + 8)
    *(esi + 4) = *(ecx_2 + 0x10)
    int32_t eax_11 = (*(ecx_2 + 4) - *ecx_2) << 4
    int32_t eax_17 = 1
    int32_t edx_3 = (*(ecx_2 + 0xc) - *(ecx_2 + 8)) * 0xc
    
    if (eax_11 s> edx_3)
        edx_3 = eax_11
        eax_17 = 0
    
    if ((*(ecx_2 + 0x14) - *(ecx_2 + 0x10)) << 3 s> edx_3)
        eax_17 = 2
    
    if (eax_17 == 0)
        int32_t eax_35
        int32_t edx_6
        edx_6:eax_35 = sx.q(*(ecx_2 + 4) + *ecx_2)
        int32_t eax_37 = (eax_35 - edx_6) s>> 1
        *(ecx_2 + 4) = eax_37
        *(esi - 0xc) = eax_37 + 1
    else if (eax_17 == 1)
        int32_t eax_29
        int32_t edx_5
        edx_5:eax_29 = sx.q(*(ecx_2 + 0xc) + *(ecx_2 + 8))
        int32_t eax_31 = (eax_29 - edx_5) s>> 1
        *(ecx_2 + 0xc) = eax_31
        *(esi - 4) = eax_31 + 1
    else if (eax_17 == 2)
        int32_t eax_23
        int32_t edx_4
        edx_4:eax_23 = sx.q(*(ecx_2 + 0x14) + *(ecx_2 + 0x10))
        int32_t eax_25 = (eax_23 - edx_4) s>> 1
        *(ecx_2 + 0x14) = eax_25
        *(esi + 4) = eax_25 + 1
    
    sub_7338a0(arg3, ecx_2)
    sub_7338a0(arg3, esi - 0xc)
    result += 1
    ecx_1 = arg4
    eax = var_10 + 2
    arg2 = var_18
    esi += 0x20
    var_10 = eax
    var_8 = esi
while (result s< ecx_1)

return result
