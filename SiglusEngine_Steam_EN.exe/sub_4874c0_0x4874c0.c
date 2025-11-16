// 函数: sub_4874c0
// 地址: 0x4874c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t ecx = data_1b1bd80
int32_t eax_1

if (data_1b8a6d4 == 0)
    eax_1 = data_131310c
else
    eax_1 = data_1b1bd84 + ecx

int32_t edx_1 = eax_1 - data_1b1bd84
int32_t var_18 = edx_1
uint32_t var_20

if (edx_1 u< ecx)
    int32_t eax_3 = ecx * edx_1
    int32_t edx_2 = 0
    
    if (ecx s< 0)
        int32_t ebx_3 = neg.d(divu.dp.d(edx_2:(neg.d(eax_3)), ecx))
        
        if (ebx_3 s< ecx)
            ebx_3 = ecx
        
        var_20 = ebx_3
    else
        uint32_t temp0_1 = divu.dp.d(edx_2:eax_3, ecx)
        var_20 = temp0_1
        
        if (temp0_1 s> ecx)
            var_20 = ecx
    
    edx_1 = var_18
else
    var_20 = ecx

int32_t eax_7 = data_1b1bd58
int32_t ebx_4 = data_1b1bd60
int32_t esi_1

if (eax_7 s<= ebx_4)
    esi_1 = ebx_4 - eax_7
else
    esi_1 = eax_7 - ebx_4

int32_t eax_8 = data_1b1bd5c
uint32_t esi_3 = esi_1 + 1
int32_t ebx_5 = data_1b1bd64
int32_t edi_1

if (eax_8 s<= ebx_5)
    edi_1 = ebx_5 - eax_8
else
    edi_1 = eax_8 - ebx_5

int32_t eax_9 = data_1b1bd6c
uint32_t result_1 = edi_1 + 1
int32_t ebx_6 = data_1b1bd74
int32_t ebx_8

if (eax_9 s<= ebx_6)
    ebx_8 = ebx_6 - eax_9
else
    ebx_8 = eax_9 - data_1b1bd74

int32_t eax_10 = data_1b1bd70
int32_t eax_11

if (eax_10 s<= data_1b1bd78)
    eax_11 = data_1b1bd78 - data_1b1bd70
else
    eax_11 = eax_10 - data_1b1bd78

uint32_t var_8

if (edx_1 u< ecx)
    int32_t edx_5 = 0
    int32_t eax_15 = edx_1 * esi_3
    
    if (esi_3 s< 0)
        uint32_t eax_19 = neg.d(divu.dp.d(edx_5:(neg.d(eax_15)), ecx))
        
        if (eax_19 s< esi_3)
            eax_19 = esi_3
        
        var_8 = eax_19
    else
        uint32_t temp0_3 = divu.dp.d(edx_5:eax_15, ecx)
        var_8 = temp0_3
        
        if (temp0_3 s> esi_3)
            var_8 = esi_3
    
    edx_1 = var_18
else
    var_8 = esi_3

int32_t result_6
int32_t result_4

if (edx_1 u< ecx)
    int32_t edx_8 = edx_1 * result_1
    
    if (result_1 s< 0)
        result_4 = neg.d(divu.dp.d(0:(neg.d(edx_8)), ecx))
        
        if (result_4 s< result_1)
            result_4 = result_1
        
        result_6 = result_4
    else
        result_4 = divu.dp.d(0:edx_8, ecx)
        result_6 = result_4
        
        if (result_4 s> result_1)
            result_4 = result_1
            result_6 = result_4
else
    result_4 = result_1
    result_6 = result_4

uint32_t eax_24 = var_8
uint32_t var_c = eax_24

if (eax_24 s> ebx_8 + 1)
    eax_24 = ebx_8 + 1

int32_t result_5 = result_4
uint32_t ecx_1 = eax_24

if (result_4 s> eax_11 + 1)
    result_4 = eax_11 + 1

if (ecx_1 s> esi_3)
    ecx_1 = esi_3

if (result_4 s> result_1)
    result_4 = result_1

int32_t ecx_2 = data_1b1bd80

if (ecx_1 s> 0 && result_4 s> 0)
    int32_t edx_13 = data_1b1bd88
    void* var_18_1
    int32_t var_14_1
    int32_t var_10_1
    int32_t var_c_3
    int32_t eax_32
    int32_t edx_22
    
    if (edx_13 == 0)
        eax_32 = data_1b1bd58
        edx_22 = data_1b1bd64 - result_6 + 1
        var_18_1 = eax_32 - 1 + ebx_8 + 1
        var_c_3 = result_4 - 1 + edx_22
        var_10_1 = data_1b1bd6c
        var_14_1 = data_1b1bd70
    else if (edx_13 == 1)
        int32_t edx_26 = data_1b1bd58
        var_18_1 = edx_26 - 1 + ebx_8 + 1
        edx_22 = data_1b1bd5c - result_4 + result_6
        var_c_3 = result_4 - 1 + edx_22
        var_10_1 = data_1b1bd6c
        eax_32 = edx_26
        var_14_1 = data_1b1bd70 - result_4 + eax_11 + 1
    else if (edx_13 == 2)
        int32_t edx_25 = data_1b1bd60 - var_8 + 1
        edx_22 = data_1b1bd5c
        var_c_3 = eax_11 + edx_22
        var_10_1 = data_1b1bd6c
        var_14_1 = data_1b1bd70
        eax_32 = edx_25
        var_18_1 = ecx_1 - 1 + edx_25
    else
        int32_t edx_19 = data_1b1bd58 - ecx_1 + var_8
        var_18_1 = edx_19 - 1 + ecx_1
        edx_22 = data_1b1bd5c
        var_c_3 = eax_11 + edx_22
        var_10_1 = data_1b1bd6c - ecx_1 + ebx_8 + 1
        var_14_1 = data_1b1bd70
        eax_32 = edx_19
    
    ecx_2 = data_1b1bd80
    
    if (data_1b1bd68 s>= 0)
        sub_4128b0(eax_32, edx_22, eax_32, var_18_1, var_c_3, data_1b1bd68, var_10_1, var_14_1, 
            data_1b1bd7c, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff)
        ecx_2 = data_1b1bd80

int32_t eax_37 = eax_1 - data_1b1bd84

if (eax_37 u< ecx_2)
    int32_t eax_38 = eax_37 * esi_3
    int32_t edx_31 = 0
    uint32_t eax_39
    
    if (esi_3 s< 0)
        eax_39 = neg.d(divu.dp.d(edx_31:(neg.d(eax_38)), ecx_2))
        
        if (eax_39 s< esi_3)
            eax_39 = esi_3
    else
        eax_39 = divu.dp.d(edx_31:eax_38, ecx_2)
        
        if (eax_39 s> esi_3)
            eax_39 = esi_3
    
    esi_3 = eax_39
    
    if (eax_37 u< ecx_2)
        int32_t eax_43 = eax_37 * result_1
        int32_t edx_34 = 0
        uint32_t result_3
        
        if (result_1 s< 0)
            result_3 = neg.d(divu.dp.d(edx_34:(neg.d(eax_43)), ecx_2))
            
            if (result_3 s< result_1)
                result_3 = result_1
        else
            result_3 = divu.dp.d(edx_34:eax_43, ecx_2)
            
            if (result_3 s> result_1)
                result_3 = result_1
        
        result_1 = result_3

int32_t result = eax_11 + 1

if (esi_3 s> ebx_8 + 1)
    esi_3 = ebx_8 + 1

if (result_1 s> result)
    result_1 = result

if (esi_3 s> 0 && esi_3 s<= ebx_8 + 1 && result_1 s> 0 && result_1 s<= result)
    int32_t edx_37 = data_1b1bd88
    uint32_t result_2
    int32_t edx_40
    void* ebx_10
    int32_t esi_4
    uint32_t edi_3
    
    if (edx_37 == 0)
        edx_40 = data_1b1bd6c
        ebx_10 = ebx_8
        result = result - result_1 - 1
        esi_4 = data_1b1bd70 + result_1
        edi_3 = 0
        result_2 = 0
    else if (edx_37 == 1)
        edx_40 = data_1b1bd6c
        ebx_10 = ebx_8
        esi_4 = data_1b1bd70
        result -= 1
        result_2 = result_1
        edi_3 = 0
    else
        edx_40 = data_1b1bd6c
        
        if (edx_37 == 2)
            edi_3 = 0
            ebx_10 = ebx_8 + 1 - esi_3 - 1
            result_2 = 0
            result -= 1
            edx_40 += esi_3
            esi_4 = data_1b1bd70
        else
            edi_3 = esi_3
            ebx_10 = ebx_8
            esi_4 = data_1b1bd70
            result -= 1
            result_2 = 0
    
    if (data_1b1bd8c s>= 0)
        result = sub_4128b0(result, result_2, edi_3, ebx_10, result, data_1b1bd8c, edx_40, esi_4, 
            data_1b1bd7c, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff)
        ecx_2 = data_1b1bd80

if (var_20 == ecx_2)
    sub_411350(data_1b1bd8c)
    
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
