// 函数: sub_6e64b0
// 地址: 0x6e64b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[0x44]

if (edi s<= 0)
    return 

int32_t edx_1 = arg1[0x34]
int32_t* eax = arg1[0x40]
int32_t* var_c_1 = eax

if (*(arg1 + 0x392) == 1)
    int32_t ecx = 0
    
    if (edi s> 0)
        do
            int32_t eax_1 = eax[ecx]
            ecx += 1
            *(edx_1 + (eax_1 << 2)) &= 0xffffff03
            eax = var_c_1
        while (ecx s< edi)
    
    return 

int32_t edx_2 = arg1[0x327c]
int32_t eax_2 = arg1[0x327b]
void* ebx_1 = &arg1[0x3279]
void* var_18_1 = ebx_1

if (edx_2 s< 1)
    eax_2 = sub_6ec810(ebx_1, 1)
    edx_2 = *(ebx_1 + 0xc)

*(ebx_1 + 8) = eax_2 * 2
*(ebx_1 + 0xc) = edx_2 - 1
int32_t esi_1 = 0
int32_t ecx_4 = 0
uint32_t var_8_1 = eax_2 u>> 0x1f
int32_t var_10_1 = 0

if (edi s> 0)
    do
        uint32_t edx_3 = sub_6e53f0(ebx_1)
        int32_t eax_5
        eax_5.b = edx_3 s>= 0x1021
        
        do
            edx_3 -= 1
            int32_t eax_8 = var_c_1[esi_1]
            esi_1 += 1
            int32_t* ecx_9 = edx_1 + (eax_8 << 2)
            *ecx_9 = (*ecx_9 & 0xffffff03) | (var_8_1 & 0x3f) << 2
            ecx_4 = var_10_1 + var_8_1
            var_10_1 = ecx_4
            
            if (edx_3 s<= 0)
                break
        while (esi_1 s< edi)
        
        ebx_1 = var_18_1
        
        if (eax_5 == 0 || esi_1 s>= edi)
            uint32_t eax_15
            eax_15.b = var_8_1 == 0
            var_8_1 = eax_15
        else
            int32_t edx_4 = *(ebx_1 + 0xc)
            int32_t ecx_11 = *(ebx_1 + 8)
            
            if (edx_4 s< 1)
                int32_t eax_12 = sub_6ec810(ebx_1, 1)
                edx_4 = *(ebx_1 + 0xc)
                ecx_11 = eax_12
            
            *(ebx_1 + 8) = ecx_11 * 2
            var_8_1 = ecx_11 u>> 0x1f
            ecx_4 = var_10_1
            *(ebx_1 + 0xc) = edx_4 - 1
    while (esi_1 s< edi)

if (*(arg1 + 0x392) != 3 || ecx_4 s<= 0)
    return 

int32_t esi_2 = 0

if ((*(edx_1 + (*var_c_1 << 2)) & 0xfc) == 0)
    int32_t eax_17
    
    do
        eax_17 = var_c_1[esi_2 + 1]
        esi_2 += 1
    while ((*(edx_1 + (eax_17 << 2)) & 0xfc) == 0)

int32_t edx_6 = *(ebx_1 + 0xc)
int32_t eax_18 = *(ebx_1 + 8)

if (edx_6 s< 1)
    eax_18 = sub_6ec810(ebx_1, 1)
    edx_6 = *(ebx_1 + 0xc)

*(ebx_1 + 8) = eax_18 * 2
*(ebx_1 + 0xc) = edx_6 - 1
int32_t* var_8_2 = eax_18 u>> 0x1f
int32_t edx_10

do
    uint32_t eax_20 = sub_6ec760(ebx_1, 0xadc074)
    uint32_t edi_1 = eax_20
    
    if (edi_1 s>= 0x10)
        int32_t ecx_19 = *(ebx_1 + 0xc)
        int32_t eax_21 = eax_20 & 0x1f
        int32_t eax_22 = *(ebx_1 + 8)
        int32_t edi_3 = (edi_1 - eax_21) s>> 4
        int32_t var_10_2 = ecx_19
        uint32_t eax_23
        
        if (edi_3 != 0)
            if (ecx_19 s< edi_3)
                eax_22 = sub_6ec810(ebx_1, edi_3)
                var_10_2 = *(ebx_1 + 0xc)
            
            *(ebx_1 + 8) = (eax_22 * 2) << (edi_3.b - 1)
            *(ebx_1 + 0xc) = var_10_2 - edi_3
            eax_23 = eax_22 u>> (0x20 - edi_3.b)
        else
            eax_23 = 0
        
        edi_1 = eax_21 + 6 + eax_23
    
    edx_10 = edi
    int32_t eax_24
    eax_24.b = edi_1 s>= 0x1021
    
    if (esi_2 s< edx_10)
        uint32_t edi_6 = edi_1
        
        do
            int32_t* eax_27 = edx_1 + (var_c_1[esi_2] << 2)
            int32_t ecx_27 = *eax_27
            
            if ((ecx_27.b & 0xfc) != 0)
                uint32_t eax_28 = edi_6
                edi_6 -= 1
                
                if (eax_28 s<= 0)
                    break
                
                *eax_27 = (((ecx_27 + (var_8_2 << 2)) ^ ecx_27) & 0xfc) ^ ecx_27
            
            esi_2 += 1
        while (esi_2 s< edx_10)
        
        ebx_1 = var_18_1
    
    if (eax_24 == 0 || esi_2 s>= edx_10)
        eax.b = var_8_2 == 0
        var_8_2 = eax
    else
        void* edi_7 = *(ebx_1 + 0xc)
        int32_t ecx_29 = *(ebx_1 + 8)
        
        if (edi_7 s< 1)
            int32_t eax_33 = sub_6ec810(ebx_1, 1)
            edi_7 = *(ebx_1 + 0xc)
            ecx_29 = eax_33
            edx_10 = edi
        
        *(ebx_1 + 8) = ecx_29 * 2
        *(ebx_1 + 0xc) = edi_7 - 1
        var_8_2 = ecx_29 u>> 0x1f
while (esi_2 s< edx_10)
