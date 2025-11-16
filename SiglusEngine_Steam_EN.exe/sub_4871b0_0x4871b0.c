// 函数: sub_4871b0
// 地址: 0x4871b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b8a5ec
uint32_t ecx = data_1b8a5e8
int32_t esi = ecx + eax

if (data_1b8a6d4 == 0)
    esi = data_131310c

int32_t esi_1 = esi - eax
uint32_t edi

if (esi_1 u< ecx)
    int32_t edx_1 = 0
    int32_t eax_2 = ecx * esi_1
    
    if (ecx s< 0)
        edi = neg.d(divu.dp.d(edx_1:(neg.d(eax_2)), ecx))
        
        if (edi s< ecx)
            edi = ecx
    else
        edi = divu.dp.d(edx_1:eax_2, ecx)
        
        if (edi s> ecx)
            edi = ecx
else
    edi = ecx

void* ebx = data_1b8a5a4

if (esi_1 u< ecx)
    int32_t edx_4 = data_1b8a5a0
    
    if (edx_4 s> ebx)
        void* edx_9 = data_1b8a5a0 - divu.dp.d(0:((edx_4 - ebx) * esi_1), ecx)
        
        if (edx_9 s< ebx)
            edx_9 = ebx
        
        ebx = edx_9
    else
        void* eax_10 = divu.dp.d(0:((ebx - edx_4) * esi_1), ecx) + data_1b8a5a0
        
        if (eax_10 s<= ebx)
            ebx = eax_10

int32_t var_14_2

if (esi_1 u< ecx && esi_1 u< ecx)
    int32_t eax_16 = data_1b8a5a8
    int32_t edx_10 = data_1b8a5ac
    
    if (eax_16 s> edx_10)
        int32_t edx_16 = data_1b8a5a8 - divu.dp.d(0:((eax_16 - edx_10) * esi_1), ecx)
        
        if (edx_16 s< data_1b8a5ac)
            edx_16 = data_1b8a5ac
        
        var_14_2 = edx_16
    else
        int32_t eax_21 = data_1b8a5ac
        int32_t edx_13 = divu.dp.d(0:((edx_10 - data_1b8a5a8) * esi_1), ecx) + data_1b8a5a8
        var_14_2 = edx_13
        
        if (edx_13 s> eax_21)
            var_14_2 = eax_21
else
    var_14_2 = data_1b8a5ac

void* var_10_1

if (esi_1 u< ecx)
    int32_t eax_26 = data_1b8a5b0
    int32_t edx_17 = data_1b8a5b4
    void* edx_19
    
    if (eax_26 s> edx_17)
        edx_19 = data_1b8a5b0 - divu.dp.d(0:((eax_26 - edx_17) * esi_1), ecx)
        
        if (edx_19 s< data_1b8a5b4)
            edx_19 = data_1b8a5b4
        
        var_10_1 = edx_19
    else
        edx_19 = data_1b8a5b4
        void* eax_31 = divu.dp.d(0:((edx_17 - data_1b8a5b0) * esi_1), ecx) + data_1b8a5b0
        var_10_1 = eax_31
        
        if (eax_31 s> edx_19)
            var_10_1 = edx_19
else
    var_10_1 = data_1b8a5b4

int32_t var_c_1

if (esi_1 u< ecx)
    int32_t eax_36 = data_1b8a5b8
    int32_t edx_22 = data_1b8a5bc
    int32_t edx_24
    
    if (eax_36 s> edx_22)
        edx_24 = data_1b8a5b8 - divu.dp.d(0:((eax_36 - edx_22) * esi_1), ecx)
        
        if (edx_24 s< data_1b8a5bc)
            edx_24 = data_1b8a5bc
        
        var_c_1 = edx_24
    else
        edx_24 = data_1b8a5bc
        int32_t eax_41 = divu.dp.d(0:((edx_22 - data_1b8a5b8) * esi_1), ecx) + data_1b8a5b8
        var_c_1 = eax_41
        
        if (eax_41 s> edx_24)
            var_c_1 = edx_24
else
    var_c_1 = data_1b8a5bc

int32_t var_8_1

if (esi_1 u< ecx)
    int32_t eax_46 = data_1b8a5c4
    int32_t edx_27 = data_1b8a5c8
    int32_t edx_29
    
    if (eax_46 s> edx_27)
        edx_29 = data_1b8a5c4 - divu.dp.d(0:((eax_46 - edx_27) * esi_1), ecx)
        
        if (edx_29 s< data_1b8a5c8)
            edx_29 = data_1b8a5c8
        
        var_8_1 = edx_29
    else
        edx_29 = data_1b8a5c8
        int32_t eax_51 = divu.dp.d(0:((edx_27 - data_1b8a5c4) * esi_1), ecx) + data_1b8a5c4
        var_8_1 = eax_51
        
        if (eax_51 s> edx_29)
            var_8_1 = edx_29
else
    var_8_1 = data_1b8a5c8

int32_t edx_34 = data_1b8a5d0

if (esi_1 u< ecx)
    int32_t eax_55 = data_1b8a5cc
    
    if (eax_55 s> edx_34)
        edx_34 = data_1b8a5cc - divu.dp.d(0:((eax_55 - edx_34) * esi_1), ecx)
        
        if (edx_34 s< data_1b8a5d0)
            edx_34 = data_1b8a5d0
    else
        int32_t eax_60 = data_1b8a5d0
        edx_34 = divu.dp.d(0:((edx_34 - data_1b8a5cc) * esi_1), ecx) + data_1b8a5cc
        
        if (edx_34 s> eax_60)
            edx_34 = eax_60

int32_t result = data_1b8a5c0

if (result s>= 0)
    result = sub_4128b0(result, var_14_2, ebx, var_10_1, var_c_1, result, var_8_1, edx_34, 
        data_1b8a5e4, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff)
    ecx = data_1b8a5e8

if (edi == ecx)
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
