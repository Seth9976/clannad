// 函数: sub_4a421e
// 地址: 0x4a421e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg3
int32_t eax = *(ebx + 0x18)
int32_t* esi = *(eax + (arg1 << 2))
int32_t edi
int32_t var_24 = edi
int32_t* edi_1 = *(eax + (arg2 << 2))
int32_t eax_1 = *esi
int32_t ecx_1 = *edi_1

if (eax_1 u< ecx_1)
    return 0xffffffff

if (eax_1 u> ecx_1)
    return 1

int32_t var_8_1 = 0

if (esi[3] u> 0)
    int32_t* ecx_2 = edi_1[4]
    int32_t* eax_4 = esi[4] - ecx_2
    arg2 = ecx_2
    int32_t* var_c_1 = eax_4
    
    while (true)
        int32_t ecx_3 = *(ebx + 0x14)
        void* eax_6 = *(ecx_3 + (*(eax_4 + arg2) << 2))
        void* ecx_4 = *(ecx_3 + (*arg2 << 2))
        int32_t edx_3 = *(eax_6 + 4)
        int32_t ebx_1 = *(ecx_4 + 4)
        
        if (edx_3 u< ebx_1)
            return 0xffffffff
        
        if (edx_3 u> ebx_1)
            return 1
        
        int32_t edx_4 = *(eax_6 + 0x14)
        int32_t ebx_2 = *(ecx_4 + 0x14)
        
        if (edx_4 u< ebx_2)
            return 0xffffffff
        
        if (edx_4 u> ebx_2)
            return 1
        
        int32_t eax_7 = *(eax_6 + 0x18)
        int32_t ecx_5 = *(ecx_4 + 0x18)
        
        if (eax_7 s< ecx_5)
            return 0xffffffff
        
        if (eax_7 s> ecx_5)
            return 1
        
        var_8_1 += 1
        arg2 = &arg2[1]
        ebx = arg3
        
        if (var_8_1 u>= esi[3])
            break
        
        eax_4 = var_c_1

if (sub_49e878(esi) == 0)
    int32_t edx_14 = esi[1]
    arg3 = nullptr
    
    if (edx_14 u> 0)
        int32_t* edi_10 = edi_1[2]
        int32_t ebx_5 = *(ebx + 0x14)
        int32_t* eax_12 = edi_10
        
        while (true)
            int32_t ecx_12 = *(*(ebx_5 + (*(esi[2] - edi_10 + eax_12) << 2)) + 0x30)
            int32_t edi_13 = *(*(ebx_5 + (*eax_12 << 2)) + 0x30)
            
            if (ecx_12 u< edi_13)
                return 0xffffffff
            
            if (ecx_12 u> edi_13)
                return 1
            
            arg3 += 1
            eax_12 = &eax_12[1]
            
            if (arg3 u>= edx_14)
                return 0
else
    int32_t ecx_8 = *esi & 0xfffff
    int32_t var_c_2 = 0
    
    if (ecx_8 u> 0)
        int32_t* edi_2 = edi_1[2]
        int32_t eax_10 = *(ebx + 0x14)
        int32_t* var_8_2 = edi_2
        int32_t* ecx_9 = &edi_2[ecx_8]
        int32_t* esi_2 = esi[2] - edi_2
        
        while (true)
            void* ebx_3 = *(*(eax_10 + (*(esi_2 + var_8_2) << 2)) + 0x30)
            void* edi_7 = *(*(eax_10 + (*(esi_2 + ecx_9) << 2)) + 0x30)
            int32_t edx_11 = *(*(eax_10 + (*ecx_9 << 2)) + 0x30)
            arg3 = ebx_3
            
            if (ebx_3 u>= edi_7)
                arg3 = edi_7
                arg2 = ebx_3
            
            if (ebx_3 u< edi_7 || ebx_3 u<= edi_7)
                arg2 = edi_7
            
            int32_t edi_8 = *(*(eax_10 + (*var_8_2 << 2)) + 0x30)
            int32_t edx_12 = edi_8
            
            if (edi_8 u>= edx_11)
                edx_12 = edx_11
            
            if (edi_8 u< edx_11 || edi_8 u<= edx_11)
                edi_8 = edx_11
            
            if (arg3 u< edx_12)
                return 0xffffffff
            
            if (arg3 u> edx_12)
                return 1
            
            if (arg2 u< edi_8)
                return 0xffffffff
            
            if (arg2 u> edi_8)
                return 1
            
            var_c_2 += 1
            var_8_2 = &var_8_2[1]
            ecx_9 = &ecx_9[1]
            
            if (var_c_2 u>= ecx_8)
                return 0

return 0
