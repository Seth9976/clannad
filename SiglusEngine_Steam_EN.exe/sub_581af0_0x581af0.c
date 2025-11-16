// 函数: sub_581af0
// 地址: 0x581af0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg5
void* var_38 = arg2
int32_t i_14 = arg4 * arg2
char* var_34 = arg3

if (i_14 s> 0)
    void* eax_3 = &arg3[1]
    int32_t i_12 = i_14
    int32_t i
    
    do
        if (*(eax_3 + 2) == 0)
            *(eax_3 - 1) = 0
            *(eax_3 + 1) = 0
        
        eax_3 += 4
        i = i_12
        i_12 -= 1
    while (i != 1)
    arg3 = var_34

int32_t xmm2[0x4] = data_624970
void* var_2c = &arg3[4]
int32_t edi = arg2 << 2
void* var_28 = &arg3[4]
char* esi_1 = nullptr
void* eax_5 = &arg3[edi]
void* var_50 = eax_5
void* var_24 = eax_5
void* var_4c = eax_5 + 4
void* var_20 = eax_5 + 4
char* eax_7 = &arg3[3]

if (ebx != 0)
    esi_1 = ebx

if (*eax_7 == 0)
    sub_581a50(eax_7, &var_28, arg3, 3, esi_1)
    arg3 = var_34
    arg2 = var_38

void* edx_1 = &arg3[0xfffffffc + (arg2 << 2)]
void* var_24_1 = edx_1 + edi
var_28 = edx_1 - 4
void* eax_10 = edx_1 - 4 + edi
void* var_20_1 = eax_10

if (ebx != 0)
    esi_1 = var_38 - 1 + ebx

if (*(edx_1 + 3) == 0)
    sub_581a50(eax_10, &var_28, edx_1, 3, esi_1)

int32_t ecx_3 = (arg4 - 1) * edi
void* eax_12 = &var_34[ecx_3]
var_28 = eax_12 + 4
void* eax_15 = eax_12 - edi
void* var_24_2 = eax_15
void* var_20_2 = eax_15 + 4

if (ebx != 0)
    esi_1 = (arg4 - 1) * var_38 + ebx

if (*(eax_12 + 3) == 0)
    sub_581a50(eax_12, &var_28, eax_12, 3, esi_1)

void* ecx_6 = ecx_3 + ((var_38 - 1) << 2) + var_34
var_28 = ecx_6 - 4
void* eax_22 = ecx_6 - edi
void* var_24_3 = eax_22
char* eax_23 = eax_22 - 4
char* var_20_3 = eax_23

if (ebx != 0)
    eax_23 = var_38 - 1
    esi_1 = (arg4 - 1) * var_38 + eax_23 + ebx

if (*(ecx_6 + 3) == 0)
    sub_581a50(eax_23, &var_28, ecx_6, 3, esi_1)

void* var_24_4 = var_2c + 4
var_28 = var_2c - 4
void* edx_10 = var_2c + edi
void* var_20_4 = edx_10
void* var_1c = var_2c - 4 + edi
void* var_18 = edx_10 + 4
void* eax_27 = var_2c

if (ebx != 0)
    esi_1 = ebx + 1

void* ecx_10 = var_28

if (var_38 - 2 s> 0)
    void* i_10 = var_38 - 2
    void* edx_12 = var_20_4
    void* i_1
    
    do
        if (*(eax_27 + 3) == 0)
            sub_581a50(eax_27, &var_28, eax_27, 5, esi_1)
            eax_27 = var_2c
            ecx_10 = var_28
            edx_12 = var_20_4
        
        var_24_4 += 4
        eax_27 += 4
        var_1c += 4
        ecx_10 += 4
        var_18 += 4
        edx_12 += 4
        var_2c = eax_27
        var_28 = ecx_10
        var_20_4 = edx_12
        
        if (ebx != 0)
            esi_1 = &esi_1[1]
        
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)

void* eax_29 = eax_12 + 4
void* var_30_1 = eax_29
void* var_24_5 = eax_29 + 4
var_28 = eax_29 - 4
void* ecx_14 = eax_29 - edi
void* var_2c_1 = ecx_14
void* var_20_5 = ecx_14
void* var_1c_1 = ecx_14 - 4
void* var_18_1 = ecx_14 + 4

if (ebx != 0)
    esi_1 = (arg4 - 1) * var_38 + 1 + ebx

void* ecx_15 = var_2c_1

if (var_38 - 2 s> 0)
    void* i_7 = var_38 - 2
    void* edx_18 = var_28
    void* i_2
    
    do
        if (*(eax_29 + 3) == 0)
            sub_581a50(eax_29, &var_28, eax_29, 5, esi_1)
            eax_29 = var_30_1
            ecx_15 = var_2c_1
            edx_18 = var_28
        
        var_24_5 += 4
        ecx_15 += 4
        var_1c_1 += 4
        eax_29 += 4
        var_18_1 += 4
        edx_18 += 4
        var_30_1 = eax_29
        var_28 = edx_18
        var_2c_1 = ecx_15
        void* var_20_6 = ecx_15
        
        if (ebx != 0)
            esi_1 = &esi_1[1]
        
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

void* eax_31 = var_50 - edi
void* var_2c_2 = eax_31
var_28 = eax_31
void* ecx_17 = var_50 + edi
void* var_20_7 = var_50 + 4
void* var_1c_2 = eax_31 + 4
void* var_18_2 = ecx_17 + 4
void* edx_24 = var_20_7
void* var_24_6 = ecx_17

if (ebx != 0)
    esi_1 = var_38 + ebx

int32_t i_11 = arg4 - 2
void* ecx_20 = var_24_6

if (arg4 - 2 s> 0)
    int32_t i_8 = i_11
    int32_t i_3
    
    do
        char* eax_34 = var_2c_2
        
        if (*(var_50 + 3) == 0)
            sub_581a50(eax_34, &var_28, var_50, 5, esi_1)
            eax_34 = var_2c_2
            ecx_20 = var_24_6
            edx_24 = var_20_7
        
        var_50 += edi
        void* eax_35 = &eax_34[edi]
        var_1c_2 += edi
        ecx_20 += edi
        var_18_2 += edi
        edx_24 += edi
        var_2c_2 = eax_35
        var_28 = eax_35
        var_24_6 = ecx_20
        var_20_7 = edx_24
        
        if (ebx != 0)
            esi_1 += var_38
        
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

void* result_2 = edx_1 + edi
void* result_1 = result_2
void* ecx_23 = result_2 - edi
void* var_30_2 = ecx_23
var_28 = ecx_23
void* var_24_7 = result_2 + edi
void* var_20_8 = result_2 - 4
void* var_1c_3 = ecx_23 - 4
void* var_18_3 = result_2 - 4 + edi
void* result = result_1

if (ebx != 0)
    esi_1 = var_38 - 1 + ebx + var_38
    result = result_1

if (i_11 s> 0)
    int32_t i_9 = i_11
    void* edx_29 = var_20_8
    void* ecx_25 = var_30_2
    int32_t i_4
    
    do
        if (*(result + 3) == 0)
            sub_581a50(result, &var_28, result, 5, esi_1)
            result = result_1
            ecx_25 = var_30_2
            edx_29 = var_20_8
        
        var_24_7 += edi
        ecx_25 += edi
        var_1c_3 += edi
        result += edi
        var_18_3 += edi
        edx_29 += edi
        result_1 = result
        var_30_2 = ecx_25
        var_28 = ecx_25
        var_20_8 = edx_29
        
        if (ebx != 0)
            esi_1 += var_38
        
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)

void* var_2c_3 = nullptr

if (ebx != 0)
    var_2c_3 = var_38 + 1 + ebx

if (i_11 s> 0)
    void* ecx_29 = var_4c - edi + 4
    void* var_40_1 = ecx_29
    int32_t i_5
    
    do
        void* edi_1 = var_4c
        var_28 = edi - 8 + ecx_29
        void* var_24_8 = ecx_29 + (var_38 << 2)
        void* var_20_9 = ecx_29 - 4
        void* var_1c_4 = ecx_29 - 8
        void* var_14_1 = edi + edi_1
        void* var_10_1 = edi - 4 + edi_1
        char* edx_36 = var_2c_3
        int32_t var_c_1 = edi - 4 + edi_1 + 8
        char* j_1 = var_38 - 2
        
        if (ebx != 0)
            esi_1 = edx_36
        
        if (j_1 s> 0)
            int32_t xmm0_1[0x4] = ecx_29.o
            char* j_2 = j_1
            int32_t xmm1_1[0x4] = var_28.o
            char* j
            
            do
                if (*(edi_1 + 3) == 0)
                    sub_581a50(j_1, &var_28, edi_1, 8, esi_1)
                    j_1 = j_2
                
                edi_1 += 4
                xmm1_1 = _mm_add_epi32(xmm1_1, xmm2)
                xmm0_1 = _mm_add_epi32(xmm0_1, xmm2)
                var_28.o = xmm1_1
                void* var_18_4
                var_18_4.o = xmm0_1
                
                if (ebx != 0)
                    esi_1 = &esi_1[1]
                
                j = j_1
                j_1 -= 1
                j_2 = j_1
            while (j != 1)
            ecx_29 = var_40_1
            edx_36 = var_2c_3
        
        result = var_38 << 2
        var_4c += result
        ecx_29 += result
        var_40_1 = ecx_29
        
        if (ebx != 0)
            var_2c_3 = edx_36 + var_38
        
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

if (ebx != 0)
    int32_t i_13 = i_14
    
    if (i_13 s> 0)
        char* ecx_31 = eax_7
        int32_t i_6
        
        do
            result.b = *ebx
            ebx += 1
            *ecx_31 = result.b
            ecx_31 = &ecx_31[4]
            i_6 = i_13
            i_13 -= 1
        while (i_6 != 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
