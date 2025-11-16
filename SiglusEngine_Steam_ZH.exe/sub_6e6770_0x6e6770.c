// 函数: sub_6e6770
// 地址: 0x6e6770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0xd138)
int32_t ecx = 0
int32_t eax_1 = *(arg3 + 0xd0)
int32_t result = 0
int32_t esi = 0
int32_t eax_2 = *(arg3 + 0x100)
int32_t* var_30 = arg4 + 0x100
void* edx_1 = arg3 + 0x104
void* var_8 = nullptr
int32_t i_1 = 0
void* var_28 = arg3 + 0xcb38
void* var_3c = edx_1
void* ebx = nullptr
int32_t i

do
    int32_t ecx_1 = ecx + *edx_1
    char var_144[0xfc]
    _memset(&var_144, 0, 0x100)
    int32_t j = result
    *(var_28 + 0x300) = result
    *var_28 = ebx
    int32_t j_5 = ecx_1 - esi
    
    if (j_5 s< result)
        j = j_5
    
    result -= j
    int32_t j_4 = j
    
    if (j s> 0)
        do
            int32_t eax_8 = *(eax_2 + (esi << 2))
            j -= 1
            esi += 1
            *(eax_1 + (eax_8 << 2) + 2) = 0
        while (j s> 0)
        
        ebx = var_8
    
    if (esi s< ecx_1)
        void* ebx_2 = arg3
        int32_t* ecx_3 = arg2 + ((i_1 + 1) s>> 1 << 2)
        void* eax_12 = ebx_2 + 0xc9e4
        int32_t* var_44_1 = ecx_3
        int32_t* var_18_1 = eax_12
        
        while (true)
            uint32_t eax_13 = sub_6ec760(eax_12, *(ebx_2 + (*ecx_3 << 2) + 0xc9f8))
            char* edi = var_8
            edi[eax] = eax_13.b
            void* edi_1 = &edi[1]
            var_8 = edi_1
            int32_t edx_8
            
            if (eax_13 u>= 0xf)
                edx_8 = 0
            else
                uint32_t eax_15 = zx.d(*(eax_13 + 0xadc0a0))
                int32_t edx_5 = var_18_1[2]
                int32_t ecx_6 = var_18_1[3]
                int32_t var_34_1 = ecx_6
                uint32_t edx_6
                
                if (eax_15 != 0)
                    if (ecx_6 s< eax_15)
                        edx_5 = sub_6ec810(var_18_1, eax_15)
                        var_34_1 = var_18_1[3]
                    
                    *(arg3 + 0xc9ec) = (edx_5 * 2) << (eax_15.b - 1)
                    *(arg3 + 0xc9f0) = var_34_1 - eax_15
                    edi_1 = var_8
                    edx_6 = edx_5 u>> (0x20 - eax_15.b)
                else
                    edx_6 = 0
                
                *(edi_1 + eax) = edx_6.b
                var_8 = edi_1 + 1
                
                if (eax_13 == 0)
                    *(edi_1 + 1 + eax) = (edx_6 s>> 8).b
                    var_8 = edi_1 + 2
                
                int32_t ecx_16
                ecx_16.b = eax_13 s< 0xc
                int32_t eax_22
                eax_22.b = eax_13 s< 2
                edx_8 = edx_6 << (((neg.d(ecx_16)).b & 0x15) + ((neg.d(eax_22)).b & 0xf3))
            
            int32_t ebx_5 = *((eax_13 << 2) + &data_adbd70) + edx_8
            result = ebx_5 s>> 8 & 0xfff
            int32_t ebx_6
            
            if (ebx_5 != 0)
                if (result != 0)
                    goto label_6e693f
                
                uint32_t eax_28 = zx.d(ebx_5.b)
                int16_t ecx_30 = ((neg.d(ebx_5 & 0x100000) ^ ebx_5) s>> 0x15).w
                
                if (ebx_5.b != 0)
                    ecx_30 = 0
                
                *(&var_144 + (eax_28 << 2)) += 1
                int32_t eax_30 = *(eax_2 + (esi << 2))
                esi += 1
                *(eax_1 + (eax_30 << 2) + 2) = ecx_30
                ebx_6 = ecx_1
            else
                result = 0x7fffffff
            label_6e693f:
                ebx_6 = ecx_1
                int32_t eax_25
                eax_25.b = ebx_6 - esi s< result
                int32_t j_1 = (neg.d(eax_25) & (ebx_6 - result - esi)) + result
                j_4 += j_1
                result -= j_1
                
                if (j_1 s> 0)
                    do
                        int32_t ecx_25 = *(eax_2 + (esi << 2))
                        j_1 -= 1
                        esi += 1
                        *(eax_1 + (ecx_25 << 2) + 2) = 0
                    while (j_1 s> 0)
                    
                    ebx_6 = ecx_1
            
            eax_12 = var_18_1
            ecx_3 = var_44_1
            
            if (esi s>= ebx_6)
                break
            
            ebx_2 = arg3
        
        ebx = var_8
    
    int32_t j_2 = 0x3f
    int32_t var_48 = var_48 + j_4
    
    do
        int32_t eax_32 = *(&var_144 + (j_2 << 2))
        j_2 -= 1
        *(&var_144 + (j_2 << 2)) += eax_32
    while (j_2 s> 0)
    
    int32_t* edx_11 = var_30
    
    for (int32_t j_3 = 0x40; j_3 s> 0; j_3 -= 1)
        edx_11 = &edx_11[-1]
        int32_t __saved_ebx
        *edx_11 -= (&__saved_ebx)[j_3]
    
    i = i_1 + 1
    var_28 += 0x100
    edx_1 = var_3c + 4
    var_30 = &var_30[0x40]
    ecx = ecx_1
    i_1 = i
    var_3c = edx_1
while (i s< 3)
*(arg3 + 0xd140) = ebx
return result
