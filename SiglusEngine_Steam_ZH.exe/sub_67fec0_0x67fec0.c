// 函数: sub_67fec0
// 地址: 0x67fec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg4 - arg2) s>> 2)
void* esi = &arg2[(eax_3 - edx) s>> 1]
sub_6800a0(arg4 - 4, esi, arg2, arg4 - 4, arg5)
void* edi_1 = esi + 4
void* var_8 = edi_1

if (arg2 u< esi)
    do
        if (arg5(esi - 4, esi) != 0)
            break
        
        if (arg5(esi, esi - 4) != 0)
            break
        
        esi -= 4
    while (arg2 u< esi)
    
    edi_1 = var_8

void* eax_12 = arg4

if (edi_1 u< eax_12)
    do
        if (arg5(edi_1, esi) != 0)
            eax_12 = arg4
            break
        
        eax_12 = arg4
        
        if (arg5(esi, edi_1) != 0)
            break
        
        edi_1 += 4
    while (edi_1 u< eax_12)
    
    var_8 = edi_1

void* edx_2 = esi
int32_t* ebx_1 = edi_1
void* var_c = edx_2

while (true)
    int32_t* var_14_2 = ebx_1
    
    while (true)
        if (ebx_1 u< eax_12)
            do
                if (arg5(esi, ebx_1) == 0)
                    if (arg5(ebx_1, esi) != 0)
                        break
                    
                    void* eax_15 = edi_1
                    edi_1 += 4
                    
                    if (eax_15 != ebx_1)
                        int32_t ecx_2 = *(edi_1 - 4)
                        *(edi_1 - 4) = *ebx_1
                        *ebx_1 = ecx_2
                
                ebx_1 = &ebx_1[1]
            while (ebx_1 u< arg4)
            
            edx_2 = var_c
            var_8 = edi_1
            var_14_2 = ebx_1
        
        bool cond:1_1 = edx_2 != arg2
        
        if (edx_2 u> arg2)
            void* ebx_2 = var_c
            void* edi_3 = ebx_2 - 4
            int32_t* eax_21
            
            do
                if (arg5(edi_3, esi) == 0)
                    if (arg5(esi, edi_3) != 0)
                        eax_21 = arg2
                        break
                    
                    esi -= 4
                    
                    if (esi != edi_3)
                        int32_t ecx_3 = *esi
                        *esi = *edi_3
                        *edi_3 = ecx_3
                
                eax_21 = arg2
                ebx_2 -= 4
                edi_3 -= 4
            while (eax_21 u< ebx_2)
            
            edi_1 = var_8
            var_c = ebx_2
            edx_2 = var_c
            cond:1_1 = edx_2 != eax_21
            ebx_1 = var_14_2
        
        if (not(cond:1_1))
            if (ebx_1 == arg4)
                arg3[1] = edi_1
                *arg3 = esi
                return arg3
            
            if (edi_1 != ebx_1)
                int32_t ecx_4 = *esi
                *esi = *edi_1
                *edi_1 = ecx_4
            
            void* edx_3 = esi
            var_8 = edi_1 + 4
            esi += 4
            int32_t* edi_5 = ebx_1
            ebx_1 = &ebx_1[1]
            int32_t ecx_5 = *edx_3
            *edx_3 = *edi_5
            edx_2 = var_c
            eax_12 = arg4
            *edi_5 = ecx_5
            edi_1 = var_8
            break
        
        edx_2 -= 4
        var_c = edx_2
        
        if (ebx_1 != arg4)
            int32_t ecx_8 = *ebx_1
            *ebx_1 = *edx_2
            ebx_1 = &ebx_1[1]
            eax_12 = arg4
            *edx_2 = ecx_8
            break
        
        esi -= 4
        
        if (edx_2 != esi)
            int32_t ecx_6 = *edx_2
            *edx_2 = *esi
            *esi = ecx_6
        
        int32_t eax_25 = *(edi_1 - 4)
        edi_1 -= 4
        int32_t ecx_7 = *esi
        *esi = eax_25
        eax_12 = arg4
        var_8 = edi_1
        *edi_1 = ecx_7
