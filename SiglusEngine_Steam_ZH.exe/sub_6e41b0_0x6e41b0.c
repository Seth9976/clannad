// 函数: sub_6e41b0
// 地址: 0x6e41b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* j_1 = arg2
void* edx = *(arg1 + 0x308)
void* j_2 = j_1
void var_38

if (edx != 0)
    sub_6ec090(&var_38, edx + 0xd358)
sub_6e4050()
int32_t var_10
int32_t ecx_1 = var_10
char* var_2c
char* ebx_1 = var_2c
int32_t var_30
int32_t edi = var_30
int32_t var_20
void* var_1c
char* var_c

if (*(arg1 + 0xc4) == 0)
    int32_t eax_2 = *(arg1 + 0xc8)
    int32_t i_8 = *(arg1 + 0xcc)
    int32_t ecx_3 = eax_2 << 2
    j_1 = j_2
    char* edi_2 = ebx_1
    void* j = j_1
    
    if (i_8 s> 0)
        char* ebx_2 = var_1c
        char* esi_4 = var_c
        int32_t i
        
        do
            for (void* eax_8 = ecx_3 + j; j u< eax_8; j += 4)
                char eax_9 = *edi_2
                edi_2 = &edi_2[1]
                *j = eax_9
                char eax_10 = *ebx_2
                ebx_2 = &ebx_2[1]
                *(j + 1) = eax_10
                char eax_11 = *esi_4
                esi_4 = &esi_4[1]
                *(j + 2) = eax_11
                *(j + 3) = 0xff
            
            j += arg3 - ecx_3
            edi_2 = &edi_2[edi - eax_2]
            ebx_2 = &ebx_2[var_20 - eax_2]
            esi_4 = &esi_4[ecx_1 - eax_2]
            i = i_8
            i_8 -= 1
        while (i != 1)
        j_1 = j_2
        ebx_1 = var_2c
    
    edi = var_30
    ecx_1 = var_10

uint32_t result = arg1

if (*(result + 0xc4) == 2)
    int32_t eax_12 = *(result + 0xc8)
    void* edx_4 = var_1c
    int32_t ecx_5 = eax_12 << 2
    int32_t eax_14 = arg3 - ecx_5
    int32_t i_5 = *(arg1 + 0xcc)
    j_1 = j_2
    int32_t var_58_1 = ecx_5
    char* var_60_2 = ebx_1
    void* var_40_1 = edx_4
    char* var_3c_2 = var_c
    
    if (i_5 s> 0)
        void* j_3 = j_1
        int32_t i_1
        
        do
            void* eax_16 = ecx_5 + j_3
            int32_t var_54_1 = 0
            uint32_t ecx_9 = (eax_16 - j_3 + 3) u>> 2
            
            if (j_3 u> eax_16)
                ecx_9 = 0
            
            uint32_t var_60_3 = ecx_9
            
            if (ecx_9 != 0)
                int32_t eax_23
                
                do
                    char* eax_17 = var_40_1
                    uint32_t edx_5 = zx.d(*ebx_1)
                    ebx_1 = &ebx_1[1]
                    var_40_1 = &eax_17[1]
                    char* eax_19 = var_3c_2
                    var_3c_2 = &var_3c_2[1]
                    *j_3 = *((((((edx_5 << 8) + zx.d(*eax_17)) << 8) + zx.d(*eax_19)) << 2) +
                        &data_c6d170)
                    j_3 += 4
                    eax_23 = var_54_1 + 1
                    var_54_1 = eax_23
                while (eax_23 u< ecx_9)
                edx_4 = var_40_1
            
            edx_4 += var_20 - eax_12
            j_3 += eax_14
            ebx_1 = &ebx_1[edi - eax_12]
            var_3c_2 = &var_3c_2[ecx_1 - eax_12]
            i_1 = i_5
            i_5 -= 1
            ecx_5 = var_58_1
            var_40_1 = edx_4
        while (i_1 != 1)
        j_1 = j_2
        ebx_1 = var_2c
    
    result = arg1

if (*(result + 0xc4) == 1)
    uint32_t result_2 = *(result + 0xcc)
    int32_t edi_5 = *(result + 0xc8)
    void* ecx_12 = var_1c
    int32_t i_10 = (result_2 + 2) s/ 3
    char* edx_11 = var_c
    int32_t eax_28 = i_10 * 2
    int32_t eax_30 = var_30 - edi_5
    int32_t eax_32 = var_20 - edi_5
    int32_t eax_34 = var_10 - edi_5
    int32_t eax_35 = edi_5 << 2
    arg3 -= eax_35
    uint32_t result_3 = result_2
    void* edi_8 = var_30 * result_3 + ebx_1
    
    if (i_10 s> 0)
        int32_t i_6 = i_10
        int32_t i_2
        
        do
            for (void* eax_38 = eax_35 + j_1; j_1 u< eax_38; j_1 += 4)
                char eax_39 = *ebx_1
                ebx_1 = &ebx_1[1]
                *j_1 = eax_39
                char eax_40 = *ecx_12
                ecx_12 += 1
                *(j_1 + 1) = eax_40
                char eax_41 = *edx_11
                edx_11 = &edx_11[1]
                *(j_1 + 2) = eax_41
                char eax_42 = *edi_8
                edi_8 += 1
                *(j_1 + 3) = eax_42
            
            j_1 += arg3
            ebx_1 = &ebx_1[eax_30]
            ecx_12 += eax_32
            edx_11 = &edx_11[eax_34]
            edi_8 += eax_30
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
        result_3 = result_2
    
    void* edi_11 = var_20 * result_3 + var_1c
    result = result_2
    
    if (i_10 s< eax_28)
        int32_t i_7 = eax_28 - i_10
        int32_t i_3
        
        do
            for (void* eax_47 = eax_35 + j_1; j_1 u< eax_47; j_1 += 4)
                char eax_48 = *ebx_1
                ebx_1 = &ebx_1[1]
                *j_1 = eax_48
                char eax_49 = *ecx_12
                ecx_12 += 1
                *(j_1 + 1) = eax_49
                char eax_50 = *edx_11
                edx_11 = &edx_11[1]
                *(j_1 + 2) = eax_50
                char eax_51 = *edi_11
                edi_11 += 1
                *(j_1 + 3) = eax_51
            
            j_1 += arg3
            ebx_1 = &ebx_1[eax_30]
            ecx_12 += eax_32
            edx_11 = &edx_11[eax_34]
            edi_11 += eax_32
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        result = result_2
    
    void* edi_14 = var_10 * result + var_c
    
    if (eax_28 s< result)
        int32_t i_9 = result - eax_28
        int32_t i_4
        
        do
            result = eax_35 + j_1
            uint32_t result_1 = result
            
            if (j_1 u< result)
                do
                    char eax_54 = *ebx_1
                    ebx_1 = &ebx_1[1]
                    *j_1 = eax_54
                    char eax_55 = *ecx_12
                    ecx_12 += 1
                    *(j_1 + 1) = eax_55
                    char eax_56 = *edx_11
                    edx_11 = &edx_11[1]
                    *(j_1 + 2) = eax_56
                    result = zx.d(*edi_14)
                    edi_14 += 1
                    *(j_1 + 3) = result.b
                    j_1 += 4
                while (j_1 u< result_1)
            
            j_1 += arg3
            ebx_1 = &ebx_1[eax_30]
            ecx_12 += eax_32
            edx_11 = &edx_11[eax_34]
            edi_14 += eax_34
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
