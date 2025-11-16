// 函数: sub_9a9470
// 地址: 0x9a9470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg1), 0)
int32_t esi = 0
int32_t var_14 = 0
int32_t* edx_1 = arg1
int32_t eax
int32_t ecx
int32_t edx
void* result = sub_74c590(eax, edx, ecx, 1, 0x520)
void* result_1 = result
int32_t eax_2 = 0
int32_t var_18 = 0
*(result + 0x508) = edx_1[0xd2]
int32_t ecx_2 = *edx_1
*(result + 0x510) = edx_1

if (ecx_2 s>= 2)
    void* ecx_3 = &edx_1[2]
    int32_t edi = 0
    int32_t i_3 = ((ecx_2 - 2) u>> 1) + 1
    int32_t i
    
    do
        int32_t eax_4 = *(ecx_3 - 4)
        ecx_3 += 8
        edx_1 = arg1
        esi += edx_1[eax_4 + 0x20]
        edi += edx_1[*(ecx_3 - 8) + 0x20]
        i = i_3
        i_3 -= 1
    while (i != 1)
    eax_2 = (((ecx_2 - 2) u>> 1) + 1) * 2
    var_14 = edi
    result = result_1

if (eax_2 s< ecx_2)
    var_18 = edx_1[edx_1[eax_2 + 1] + 0x20]

int32_t esi_2 = esi + var_14 + var_18 + 2
int32_t ecx_6 = 0
*(result + 0x504) = esi_2
int32_t var_148[0x4]

if (esi_2 s> 0)
    if (esi_2 u>= 8)
        int32_t xmm1_1[0x4] = data_b0da70
        int32_t eax_9 = esi_2 & 0x80000007
        
        if (eax_9 s< 0)
            eax_9 = ((eax_9 - 1) | 0xfffffff8) + 1
        
        int32_t xmm2_1[0x4] = data_b0da80
        int32_t edx_7 = esi_2 - eax_9
        int32_t var_20_2 = edx_7
        void var_138
        void* edx_8 = &var_138
        int32_t xmm3_1[0x4] = 2
        ecx_6 = 0
        
        do
            int32_t eax_12 = ecx_6 + 4
            edx_8 += 0x20
            int32_t xmm0_4[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_6), 0), xmm1_1)
            ecx_6 += 8
            *(edx_8 - 0x30) =
                _mm_add_epi32(_mm_sll_epi32(_mm_add_epi32(xmm0_4, xmm2_1), xmm3_1), xmm0_1)
            *(edx_8 - 0x20) = _mm_add_epi32(
                _mm_sll_epi32(
                    _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_12), 0), xmm1_1), 
                        xmm2_1), 
                    xmm3_1), 
                xmm0_1)
        while (ecx_6 s< edx_7)
        
        result = result_1
    
    if (ecx_6 s< esi_2)
        void* eax_15 = &arg1[ecx_6 + 0xd1]
        
        do
            var_148[ecx_6] = eax_15
            ecx_6 += 1
            eax_15 += 4
        while (ecx_6 s< esi_2)

sub_761c30(&var_148, esi_2, 4, sub_9a9b00)
int32_t ecx_7 = 0

if (esi_2 s> 0)
    void* edx_9 = result + 0x104
    
    do
        edx_9 += 4
        void* eax_17 = var_148[ecx_7] - arg1
        ecx_7 += 1
        *(edx_9 - 4) = (eax_17 - 0x344) s>> 2
    while (ecx_7 s< esi_2)

int32_t ecx_8 = 0

if (esi_2 s> 0)
    void* edx_10 = result + 0x104
    
    do
        int32_t eax_20 = *edx_10
        edx_10 += 4
        *(result + (eax_20 << 2) + 0x208) = ecx_8
        ecx_8 += 1
    while (ecx_8 s< esi_2)

int32_t ecx_9 = 0

if (esi_2 s> 0)
    do
        *(result + (ecx_9 << 2)) = arg1[*(result + (ecx_9 << 2) + 0x104) + 0xd1]
        ecx_9 += 1
    while (ecx_9 s< esi_2)

switch (arg1[0xd0] - 1)
    case 0
        *(result + 0x50c) = 0x100
    case 1
        *(result + 0x50c) = 0x80
    case 2
        *(result + 0x50c) = 0x56
    case 3
        *(result + 0x50c) = 0x40

int32_t i_2 = esi_2 - 2

if (esi_2 - 2 s> 0)
    int32_t edx_12 = 2
    int32_t var_14_1 = 2
    void* var_30_1 = result + 0x30c
    void* var_18_1 = &arg1[0xd3]
    int32_t i_1
    
    do
        int32_t eax_26 = *(result + 0x508)
        int32_t esi_4 = 0
        int32_t ecx_12 = 0
        int32_t var_28_1 = 0
        int32_t var_2c_1 = 1
        int32_t var_1c_1 = eax_26
        
        if (edx_12 s> 0)
            int32_t edi_2 = eax_26
            void* edx_14 = &arg1[0xd1]
            
            do
                int32_t eax_27 = *edx_14
                
                if (eax_27 s> esi_4)
                    edi_2 = var_1c_1
                    
                    if (eax_27 s< *var_18_1)
                        var_28_1 = ecx_12
                        esi_4 = eax_27
                
                if (eax_27 s< edi_2)
                    edi_2 = var_1c_1
                    
                    if (eax_27 s> *var_18_1)
                        edi_2 = eax_27
                        var_2c_1 = ecx_12
                        var_1c_1 = edi_2
                
                ecx_12 += 1
                edx_14 += 4
            while (ecx_12 s< var_14_1)
            
            result = result_1
            edx_12 = var_14_1
        
        edx_12 += 1
        var_18_1 += 4
        var_14_1 = edx_12
        *(var_30_1 + 0xfc) = var_28_1
        *var_30_1 = var_2c_1
        i_1 = i_2
        i_2 -= 1
        var_30_1 += 4
    while (i_1 != 1)

return result
