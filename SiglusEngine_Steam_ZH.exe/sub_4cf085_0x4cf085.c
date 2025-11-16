// 函数: sub_4cf085
// 地址: 0x4cf085
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg6
int32_t edi
int32_t var_40 = edi
int32_t* var_24 = nullptr
void var_20
void* edi_1 = &var_20
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
int32_t esi_1 = esi & 0xfffff
bool cond:0 = (*(arg1 + 0x6f) & 2) != 0
*(edi_2 + 4) = 0
int32_t result

if (cond:0)
    int32_t var_8_3 = 0
    
    if (esi_1 u> 0)
        int32_t* edx_3 = arg4
        int32_t ebx_3 = arg1[5]
        void* edi_10 = arg2 - edx_3
        
        do
            void* ecx_6 = *(ebx_3 + (*(edx_3 + edi_10) << 2))
            int32_t eax_8 = *edx_3
            
            if (*(ecx_6 + 0x38) != eax_8)
                return 1
            
            if ((*(ecx_6 + 0x3c) & 0x1f0000) != 0x10000)
                return 1
            
            int32_t* eax_9 = *(ebx_3 + (eax_8 << 2))
            int32_t ecx_9 = eax_9[0xf]
            
            if ((ecx_9 & 0x1f0000) != 0)
                return 1
            
            if ((ecx_9:1.b & 2) == 0)
                char eax_10 = (*eax_9).b
                
                if ((eax_10 & 4) == 0)
                    return 1
                
                if ((eax_10 & 0x10) == 0)
                    return 1
            
            var_8_3 += 1
            edx_3 = &edx_3[1]
        while (var_8_3 u< esi_1)
else
    int32_t edi_5 = 0
    
    if (esi_1 u> 0)
        do
            int32_t __saved_ebp
            result = sub_4cef6e(arg1, *(arg2 + (edi_5 << 2)), &(&__saved_ebp)[edi_5 - 8], 
                &(&__saved_ebp)[edi_5 - 0xc])
            
            if (result != 0)
                return result
            
            edi_5 += 1
        while (edi_5 u< esi_1)
    
    int32_t var_8_1 = 0
    
    if (esi_1 u> 0)
        int32_t* eax_4 = arg4
        int32_t ebx_1 = arg1[5]
        void var_34
        void* edx_1 = &var_34 - eax_4
        void* ecx_1 = &var_24 - eax_4
        
        do
            int32_t ecx_2 = *eax_4
            
            if (*(*(ebx_1 + (*(edx_1 + eax_4) << 2)) + 0x38) != ecx_2)
                return 1
            
            if ((*(*(ebx_1 + (ecx_2 << 2)) + 0x3e) & 0x1f) != 0)
                return 1
            
            if (*(ecx_1 + eax_4) != var_24)
                return 1
            
            var_8_1 += 1
            eax_4 = &eax_4[1]
        while (var_8_1 u< esi_1)
    
    int32_t* edx_2 = var_24
    int32_t i = 0
    
    if (edx_2[3] u> 0)
        do
            int32_t ecx_5 = 0
            int32_t var_8_2 = 1
            
            if (esi_1 u<= 0)
                return 1
            
            do
                if (*(edx_2[4] + (i << 2)) == *(arg2 + (ecx_5 << 2)))
                    var_8_2 = 0
                
                ecx_5 += 1
            while (ecx_5 u< esi_1)
            
            if (var_8_2 != 0)
                return 1
            
            i += 1
        while (i u< edx_2[3])

void* eax_11 = sub_49ec23(0x74)
int32_t* ebx_4

if (eax_11 == 0)
    ebx_4 = nullptr
else
    ebx_4 = sub_49e789(eax_11)

if (ebx_4 == 0)
    return 0x8007000e

result = sub_49ec6e(ebx_4, (esi_1 & 0xfffff) | 0x70100000, esi_1 * 3, esi_1, 0)

if (result s>= 0)
    result = sub_49e7bf(ebx_4, arg6)
    
    if (result s>= 0)
        int32_t eax_18 = esi_1 << 2
        int32_t esi_3
        int32_t edi_12
        edi_12, esi_3 = __builtin_memcpy(ebx_4[4], *(arg7 + 0x10), eax_18 u>> 2 << 2)
        __builtin_memcpy(edi_12, esi_3, eax_18 & 3)
        int32_t esi_5
        int32_t edi_14
        edi_14, esi_5 = __builtin_memcpy(ebx_4[2], arg4, eax_18 u>> 2 << 2)
        __builtin_memcpy(edi_14, esi_5, eax_18 & 3)
        int32_t edx_7 = esi_1 << 3
        int32_t esi_7
        int32_t edi_17
        edi_17, esi_7 = __builtin_memcpy(ebx_4[2] + edx_7, arg3, eax_18 u>> 2 << 2)
        __builtin_memcpy(edi_17, esi_7, eax_18 & 3)
        int32_t esi_9
        int32_t edi_20
        edi_20, esi_9 = __builtin_memcpy(ebx_4[2] + eax_18, arg5, eax_18 u>> 2 << 2)
        __builtin_memcpy(edi_20, esi_9, eax_18 & 3)
        int32_t eax_20 = arg1[5]
        void* esi_10 = *(eax_20 + (*ebx_4[4] << 2))
        int32_t* ecx_31 = ebx_4[2]
        void* edx_10 = *(eax_20 + (*ecx_31 << 2))
        void* eax_21 = *(eax_20 + (*(ecx_31 + edx_7) << 2))
        int32_t ecx_33 = *(esi_10 + 4)
        arg4 = nullptr
        int32_t* edi_23
        
        if ((ecx_33 != *(edx_10 + 4) || *(esi_10 + 0xc) != *(edx_10 + 0xc))
                && (ecx_33 != *(eax_21 + 4) || *(esi_10 + 0xc) != *(eax_21 + 0xc)))
            edi_23 = arg1
            
            if (ecx_33 != edi_23[0x22])
                goto label_4cf2fc
        else
            edi_23 = arg1
        label_4cf2fc:
            
            if ((*(edi_23 + 0x6f) & 2) == 0)
                arg4 = 1
        
        if ((*(*edi_23 + 0x20))(ebx_4, 0) != 0 || ((
                (*(*(edi_23[4] + (*(esi_10 + 4) << 2)) + 4) & 0x20) != 0 || arg4 != 0)
                && (*(edi_23 + 0x6f) & 2) == 0))
            sub_46cb59(ebx_4, 1)
            return 1
        
        result = sub_49eecd(*(edi_23[6] + (arg8 << 2)), ebx_4)
        
        if (result s>= 0)
            sub_46cb59(ebx_4, 1)
            *arg6 = 0
            int32_t* eax_28 = var_24
            
            if (eax_28 != 0)
                *eax_28 = 0
            
            return 0

return result
