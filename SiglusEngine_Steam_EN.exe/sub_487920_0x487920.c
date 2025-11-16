// 函数: sub_487920
// 地址: 0x487920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b1bd50
uint32_t ecx = data_1b1bd4c
int32_t edx = ecx + eax

if (data_1b8a6d4 == 0)
    edx = data_131310c

int32_t edx_4 = edx - eax
int32_t var_14 = edx_4
uint32_t var_1c

if (edx_4 u< ecx)
    int32_t eax_2 = ecx * edx_4
    int32_t edx_1 = 0
    
    if (ecx s< 0)
        int32_t eax_6 = neg.d(divu.dp.d(edx_1:(neg.d(eax_2)), ecx))
        
        if (eax_6 s< ecx)
            eax_6 = ecx
        
        var_1c = eax_6
    else
        uint32_t temp0_1 = divu.dp.d(edx_1:eax_2, ecx)
        var_1c = temp0_1
        
        if (temp0_1 s> ecx)
            var_1c = ecx
    
    edx_4 = var_14
else
    var_1c = ecx

void* ebx = data_1b1bd24
int32_t eax_7 = data_1b1bd2c
void* esi_1

if (ebx s<= eax_7)
    esi_1 = eax_7 - ebx
else
    esi_1 = ebx - eax_7

int32_t eax_8 = data_1b1bd28
int32_t edi = data_1b1bd30
int32_t edi_2

if (eax_8 s<= edi)
    edi_2 = edi - eax_8
else
    edi_2 = eax_8 - data_1b1bd30

int32_t eax_9 = data_1b1bd38
int32_t eax_10

if (eax_9 s<= data_1b1bd40)
    eax_10 = data_1b1bd40 - data_1b1bd38
else
    eax_10 = eax_9 - data_1b1bd40

int32_t eax_13 = data_1b1bd3c
int32_t eax_14

if (eax_13 s<= data_1b1bd44)
    eax_14 = data_1b1bd44 - data_1b1bd3c
else
    eax_14 = eax_13 - data_1b1bd44

int32_t result_3

if (edx_4 u< ecx)
    int32_t edx_5 = 0
    int32_t eax_18 = edx_4 * (esi_1 + 1)
    
    if (esi_1 + 1 s< 0)
        int32_t result_4 = neg.d(divu.dp.d(edx_5:(neg.d(eax_18)), ecx))
        
        if (result_4 s< esi_1 + 1)
            result_4 = esi_1 + 1
        
        result_3 = result_4
    else
        int32_t result_5 = divu.dp.d(edx_5:eax_18, ecx)
        result_3 = result_5
        
        if (result_5 s> esi_1 + 1)
            result_3 = esi_1 + 1
    
    edx_4 = var_14
else
    result_3 = esi_1 + 1

uint32_t var_c_1
uint32_t eax_22

if (edx_4 u< ecx)
    int32_t edx_8 = edx_4 * (edi_2 + 1)
    
    if (edi_2 + 1 s< 0)
        eax_22 = neg.d(divu.dp.d(0:(neg.d(edx_8)), ecx))
        
        if (eax_22 s< edi_2 + 1)
            eax_22 = edi_2 + 1
        
        var_c_1 = eax_22
    else
        eax_22 = divu.dp.d(0:edx_8, ecx)
        var_c_1 = eax_22
        
        if (eax_22 s> edi_2 + 1)
            eax_22 = edi_2 + 1
            var_c_1 = eax_22
else
    eax_22 = edi_2 + 1
    var_c_1 = eax_22

int32_t result_2 = result_3

if (result_2 s> eax_10 + 1)
    result_2 = eax_10 + 1

uint32_t ecx_1 = eax_22

if (var_c_1 s> eax_14 + 1)
    ecx_1 = eax_14 + 1

int32_t result = result_2
uint32_t var_14_2 = ecx_1

if (result s> esi_1 + 1)
    result = esi_1 + 1

uint32_t esi_4 = ecx_1
int32_t ecx_2 = data_1b1bd4c
int32_t result_1 = result

if (esi_4 s> edi_2 + 1)
    esi_4 = edi_2 + 1

if (result s> 0 && esi_4 s> 0)
    int32_t eax_27 = data_1b1bd54
    int32_t var_c_2
    int32_t edx_22
    void* esi_10
    void* edi_4
    int32_t edx_17
    
    if (eax_27 == 0)
        edi_4 = eax_10 + ebx
        result = data_1b1bd30 - var_c_1 + 1
        edx_17 = result - 1 + esi_4
    label_487b50:
        esi_10 = data_1b1bd38
        var_c_2 = edx_17
        edx_22 = data_1b1bd3c
    else if (eax_27 == 1)
        edi_4 = eax_10 + ebx
        result = data_1b1bd28 - esi_4 + var_c_1
        esi_10 = data_1b1bd38
        var_c_2 = esi_4 - 1 + result
        edx_22 = data_1b1bd3c - esi_4 + eax_14 + 1
    else
        if (eax_27 == 2)
            ebx = data_1b1bd2c - result_3 + 1
            result = data_1b1bd28
            edx_17 = eax_14 + result
            edi_4 = result_1 - 1 + ebx
            goto label_487b50
        
        ebx = ebx - result_1 + result_3
        result = data_1b1bd28
        edi_4 = result_1 - 1 + ebx
        var_c_2 = eax_14 + result
        esi_10 = data_1b1bd38 - result_1 + eax_10 + 1
        edx_22 = data_1b1bd3c
    
    if (data_1b1bd34 s>= 0)
        result = sub_4128b0(result, result, ebx, edi_4, var_c_2, data_1b1bd34, esi_10, edx_22, 
            data_1b1bd48, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff)
        ecx_2 = data_1b1bd4c

if (var_1c == ecx_2)
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
